import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient


from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import tf2_geometry_msgs

from std_msgs.msg import Header
from geometry_msgs.msg import Point, PointStamped, Pose, PoseStamped, PoseWithCovarianceStamped, Quaternion
from nav_msgs.msg import Odometry
from tinker_vision_msgs.msg import Object, Objects
from tinker_vision_msgs.srv import ObjectDetection
from tinker_arm_msgs.srv import URControlService, Robotiq
from audio_common_msgs.action import SoundRequest as SoundRequestAction
from audio_common_msgs.msg import SoundRequest
import numpy as np
import copy
import time


def dist(x: Point, y: Point):
    return np.sqrt((x.x - y.x) ** 2 + (x.y - y.y) ** 2 + (x.z - y.z) ** 2)


class CarryMyLuggage(Node):

    def __init__(self):
        super().__init__('carry_my_luggage')
        self.state = 'init_task'
        # self.state = 'grab_the_bag'
        timer_period = 0.2
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.declare_parameter('debug_mode', False)
        self.debug = self.get_parameter('debug_mode').get_parameter_value().bool_value

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.detection_sub = self.create_subscription(
            Objects,
            'detection_publisher',
            self.detection_callback,
            10)
        self.detection_result = None
        self.detection_stamp = None
        # self.goal_pos = self.create_subscription

        self.body_track_sub = self.create_subscription(
            Point,
            '/vision/body_track/result_physical',
            self.body_track_callback,
            10
        )

        self.odom_sub = self.create_subscription(Odometry, 'odometry/filtered', self.odom_callback, 10)
        self.current_pose = None

        self.navigation_pub = self.create_publisher(PoseStamped, 'goal_pose', 10)
        
        self.debug_cur_pub = self.create_publisher(PointStamped, 'd_cur_pose', 10)
        self.debug_goal_pub = self.create_publisher(PointStamped, 'd_goal_pose', 10)
        self.debug_person_pub = self.create_publisher(PointStamped, 'd_person_pos', 10)

        self.ur_client = self.create_client(URControlService, 'tinker_arm_control_service')
        self.gripper_client = self.create_client(Robotiq, 'robotiq_service')

        self.audio_client = ActionClient(self, SoundRequestAction, 'sound_play')
        
        self.person_pos = None
        self.person_stamp = None
        self.bag_pos = None
        
        self.initial_pose = None

        self.arm_future = None
        self.client_list = []

        self.stop_cnt = 0
        self.init_cnt = 0

        self.person_retry_cnt = 0

        # self.bag_pose = None

    
    def odom_callback(self, odometry):
        # type() = Pose
        try:
            transform = self.tf_buffer.lookup_transform(
                target_frame='map',
                source_frame='odom',
                time=rclpy.time.Time()
            )
        except TransformException as ex:
            self.get_logger().warn(f'Could not transform /odom to /map: {ex}')
            return
        
        # odometry = Odometry
        # odometry.pose = PoseWithCovariance
        # odometry.pose.pose = Pose
        self.current_pose = tf2_geometry_msgs.do_transform_pose(odometry.pose.pose, transform)
        # self.get_logger().warn('Update on current_robot_position = %.3f, %.3f, %.3f' % (self.current_pose.position.x, self.current_pose.position.y, self.current_pose.position.z))


    def detection_callback(self, objects_msg):
        if objects_msg.status == 0:
            self.detection_result = objects_msg
            self.detection_stamp = self.get_clock().now()
    

    def detection_result_valid(self):
        if self.detection_result is None:
            return False
        if abs(self.detection_stamp.nanoseconds - self.get_clock().now().nanoseconds) > 2e9:
            return False
        return True


    def body_track_callback(self, point):
        try:
            # self.get_logger().warn('current = ' + str(time_now) + ' source time = ' + str(get_time_sec(self.recent_point_stamp)))
            transform = self.tf_buffer.lookup_transform(
                target_frame='map',
                source_frame='camera_depth_frame',
                time=rclpy.time.Time()
            )
        except TransformException as ex:
            self.get_logger().warn(f'Could not transform /depth_camera_link to /map: {ex}')
            return
        
        point_stamped = PointStamped(
            header=Header(frame_id='camera_depth_frame', stamp=rclpy.time.Time().to_msg()),
            point=point
        )
        self.person_pos = tf2_geometry_msgs.do_transform_point(point_stamped, transform).point
        self.get_logger().warn('Updated person (%.2f, %.2f, %.2f)' % (self.person_pos.x, self.person_pos.y, self.person_pos.z))
    
    def update_person_pos(self, cls='person', threshold=1.2):
        return self.person_pos is not None
        if self.detection_result_valid():
            dis, point = 1e18, Point()
            for obj in self.detection_result.objects:
                if obj.cls == cls:
                    d = dist(obj.centroid, self.person_pos)
                    if d < dis:
                        dis, point = d, obj.centroid
            if dis < 1e18 - 1:
                self.get_logger().warn('update_person_pos(): dist = %.3f, old pos = (%.2f, %.2f, %.2f), new pos = (%.2f, %.2f, %.2f)'
                                        % (dis, self.person_pos.x, self.person_pos.y, self.person_pos.z, point.x, point.y, point.z))
                
                if dis < threshold:
                    self.person_retry_cnt = 0
                    self.person_pos = point
                    self.get_logger().warn(f'Person pos updated within err {threshold}.')
                    return True
                else:
                    self.person_retry_cnt += 1

                    if self.person_retry_cnt > 100:
                        self.person_retry_cnt = 0
                        self.get_logger().warn(f'No person found within err {threshold}, trying to follow the nearest person...')
                        self.person_pos = point
                        return True
                    else:
                        self.get_logger().warn(f'No person found within err {threshold}, going to his last position...')
                        return True
                # self.person_pos = point
                # return True
        return False
    

    def get_target_pose(self, target_point: Point, stopping_dist: float) -> (bool, Pose, float):
        dist_to_target = dist(target_point, self.current_pose.position)
        # print('dist between (%.2f, %.2f, %.2f) and (%.2f, %.2f, %.2f) is %.4f' % (target_point.x, target_point.y, target_point.z, self.current_pose.position.x, self.current_pose.position.y, self.current_pose.position.z, dist_to_target))

        if dist_to_target < stopping_dist + 0.6:
            return True, None, dist_to_target
        else:
            alpha = stopping_dist / dist_to_target
            target = copy.deepcopy(self.current_pose)
            target.position = Point(
                x = self.current_pose.position.x * alpha + target_point.x * (1 - alpha),
                y = self.current_pose.position.y * alpha + target_point.y * (1 - alpha),
                z = self.current_pose.position.z * alpha + target_point.z * (1 - alpha)
            )
            return False, target, dist_to_target


    def navigation_cmd(self, pose: Pose):
        msg = PoseStamped()
        msg.pose = pose
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'map'
        
        if not self.debug:
            self.navigation_pub.publish(msg)
            # pass了

    def speak(self, content):
        goal_msg = SoundRequestAction.Goal()
        msg = SoundRequest()
        msg.sound = SoundRequest.SAY
        msg.command = SoundRequest.PLAY_ONCE
        msg.volume = 0.5
        msg.arg = content
        goal_msg.sound_request = msg

        self.audio_client.wait_for_server()

        success = self.audio_client.send_goal_async(goal_msg)

        return True


    def timer_callback(self):
        self.debug = self.get_parameter('debug_mode').get_parameter_value().bool_value
        if self.current_pose is None:
            self.get_logger().warn('Can\'t get current pose')
            return

        if self.state == 'init_task':
            # if self.init_cnt == 0:
            #     self.speak("Hello! My name is Tinker. What can I help for you?")
                # time.sleep(10)
            self.initial_pose = self.current_pose

            # if self.detection_result_valid():
            #     # find the nearest person
            #     dis, point = 1e18, Point()
            #     for obj in self.detection_result.objects:
            #         if obj.cls == 'person':
            #             d = dist(obj.centroid, self.current_pose.position)
            #             if d < dis:
            #                 dis, point = d, obj.centroid
            #     if dis < 1e18 - 1:
            #         self.person_pos = point

            if self.person_pos is not None and self.init_cnt > 1:
                self.get_logger().warn('following person')
                self.state = "follow_the_person"
            elif self.person_pos is not None:
                self.get_logger().warn('person found, waiting for pose...')
                
            self.init_cnt += 1
                # find the nearest bag
                # dis, point = 1e18, Point()
                # for obj in self.detection_result.objects:
                #     if obj.cls == 'handbag' or obj.cls == 'bottle' or obj.cls == 'suitcase':
                #         if obj.centroid.z < dis:
                #             dis, point = obj.centroid.z, obj.centroid
                # if dis < 1e18 - 1:
                #     self.bag_pos = point
                
                # if self.bag_pos is not None and self.person_pos is not None:
                #     self.state = 'move_to_bag'

        elif self.state == 'move_to_bag':
            self.get_logger().warn('Moving to Bag...')

            # if self.bag_pose is None:
            #     self.bag_pose = copy.deepcopy(self.current_pose)
            #     self.bag_pose.position.x -= 1.5

            # self.get_logger().warn(str(dist(self.current_pose.position, self.bag_pose.position)))
            # if dist(self.current_pose.position, self.bag_pose.position) > 0.3:
            #     self.navigation_cmd(self.bag_pose)
            # else:
            #     self.navigation_cmd(self.current_pose)
            #     self.state = 'grab_the_bag'
            
            if not self.update_person_pos():
                # self.get_logger().warn('Failed to update person_pos')
                pass

            self.debug_person_pub.publish(
                PointStamped(
                    point=self.bag_pos,
                    header=Header(stamp=self.get_clock().now().to_msg(), frame_id='map')
                )
            )

            # arrived, target_pose, _ = self.get_target_pose(self.person_pos, 0.8)
            arrived, target_pose, _ = self.get_target_pose(self.bag_pos, 0.0)

            # self.get_logger().warn('current_robot_position = %.3f, %.3f, %.3f' % (self.current_pose.position.x, self.current_pose.position.y, self.current_pose.position.z))
            # self.get_logger().warn('current_human_position = %.3f, %.3f, %.3f' % (self.person_pos.x, self.person_pos.y, self.person_pos.z))
            self.get_logger().warn('Dist to bag = ' + str(_) + ' ' + str(arrived))
            
            if arrived:
                # self.get_logger().warn('Person arrived, grabbing...')
                self.navigation_cmd(self.current_pose)
                self.state = 'grab_the_bag'

            else:
                # self.get_logger().warn('Following person')
                self.navigation_cmd(target_pose)

                self.debug_goal_pub.publish(PointStamped(
                    point=target_pose.position,
                    header=Header(stamp=self.get_clock().now().to_msg(), frame_id='map')
                ))
        
        elif self.state == 'grab_the_bag':
            self.get_logger().warn('Grabbing the bag...')

            ur_req = URControlService.Request()
            gripper_req = Robotiq.Request()
            if len(self.client_list) == 0:
                # self.get_logger().warn('Stage 0 start...')
                
                # try:
                #     transform = self.tf_buffer.lookup_transform(
                #         target_frame='base_link',
                #         source_frame='map',
                #         time=rclpy.time.Time()
                #     )
                # except TransformException as ex:
                #     self.get_logger().warn(f'Could not transform /map to /base_link: {ex}')
                #     return
                # bag_point = tf2_geometry_msgs.do_transform_point(
                #     PointStamped(
                #         header=Header(frame_id='map', stamp=self.get_clock().now()),
                #         point=self.bag_pos
                #     )
                # , transform)
                
                ur_req.target_pose = Pose(position=Point(x=0.8,y=-0.5,z=0.3),orientation=Quaternion(x=0.707,y=0.707,z=0.,w=0.))
                # ur_req.target_pose = Pose(position=bag_point.point,orientation=Quaternion(x=1.,y=0.,z=0.,w=0.))
                arm_future = self.ur_client.call_async(ur_req)
                self.client_list.append(arm_future)

            if len(self.client_list) == 1:
                if self.client_list[0].done():
                    self.get_logger().warn('Stage 1 start...')
                    gripper_req.distance = 250
                    gripper_future = self.gripper_client.call_async(gripper_req)
                    self.client_list.append(gripper_future)
                else:
                    self.get_logger().warn('Stage 0 running...')

            if len(self.client_list) == 2:
                if self.client_list[1].done():
                    self.get_logger().warn('Stage 2 start...')
                    ur_req.target_pose = Pose(position=Point(x=0.11,y=0.4,z=0.6),orientation=Quaternion(x=0.,y=1.,z=0.,w=0.))
                    # ur_req.target_pose = Pose(position=Point(x=0.11,y=0.4,z=0.6),orientation=Quaternion(x=1.,y=0.,z=0.,w=0.))
                    arm_future = self.ur_client.call_async(ur_req)
                    self.client_list.append(arm_future)
                else:
                    self.get_logger().warn('Stage 1 running...')
            
            if len(self.client_list) == 3:
                if self.client_list[2].done():
                    self.get_logger().warn('Successfully grab the bag...')
                    self.state = 'follow_the_person'
                else:
                    self.get_logger().warn('Stage 2 running...')
            
            # self.navigation_cmd(self.current_pose)
            
            # self.state = 'follow_the_person'
        
        elif self.state == 'follow_the_person':
            # self.get_logger().warn('Following the person...')

            if not self.update_person_pos():
                # self.get_logger().warn('Failed to update person_pos')
                pass

            self.debug_cur_pub.publish(PointStamped(
                point=self.current_pose.position,
                header=Header(stamp=self.get_clock().now().to_msg(), frame_id='map')
            ))
            self.debug_person_pub.publish(PointStamped(
                point=self.person_pos,
                header=Header(stamp=self.get_clock().now().to_msg(), frame_id='map')
            ))

            arrived, target_pose, _ = self.get_target_pose(self.person_pos, 0.3)
            
            # self.get_logger().warn('current_robot_position = %.3f, %.3f, %.3f' % (self.current_pose.position.x, self.current_pose.position.y, self.current_pose.position.z))
            self.get_logger().warn('current_human_position = %.3f, %.3f, %.3f' % (self.person_pos.x, self.person_pos.y, self.person_pos.z))
            self.get_logger().warn('Dist to person = ' + str(_))

            if not arrived:
                self.stop_cnt = 0

                self.navigation_cmd(target_pose)

                self.debug_goal_pub.publish(PointStamped(
                    point=target_pose.position,
                    header=Header(stamp=self.get_clock().now().to_msg(), frame_id='map')
                ))
            else:
                self.stop_cnt += 1
                if self.stop_cnt > 300000:
                    self.get_logger().warn('Person arrived. ' + str(self.stop_cnt))

                    self.navigation_cmd(self.current_pose)
                    self.state = "put_down_the_bag"


        elif self.state == 'put_down_the_bag':
            self.get_logger().warn('Putting down the bag...')

            if len(self.client_list) == 3:
                ur_req = URControlService.Request()
                ur_req.target_pose = Pose(position=Point(x=0.7,y=0.1,z=0.9),orientation=Quaternion(x=1.,y=0.,z=0.,w=0.))
                arm_future = self.ur_client.call_async(ur_req)
                self.client_list.append(arm_future)

            if len(self.client_list) == 4:
                if self.client_list[3].done():
                    gripper_req = Robotiq.Request()
                    gripper_req.distance = 0
                    gripper_future = self.gripper_client.call_async(gripper_req)
                    self.client_list.append(gripper_future)
                else:
                    self.get_logger().warn('Stage 1 running...')
            
            if len(self.client_list) == 5:
                if self.client_list[4].done():
                    self.state = "go_back"
                    self.get_logger().warn('Done, getting back...')
                else:
                    self.get_logger().warn('Stage 2 running...')
            

        elif self.state == "go_back":
            self.navigation_cmd(self.initial_pose)

        else:
            # assert False
            pass



def main(args=None):
    rclpy.init(args=args)

    carry_my_luggage_node = CarryMyLuggage()

    _ = input('Press enter to start the test')

    rclpy.spin(carry_my_luggage_node)

    carry_my_luggage_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
