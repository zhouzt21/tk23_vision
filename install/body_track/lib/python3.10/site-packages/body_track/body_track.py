import cv2
import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import Point
from std_msgs.msg import Float32MultiArray, MultiArrayDimension, Float32, Int32MultiArray

import numpy as np
import faulthandler
import mediapipe as mp
from cv_bridge import CvBridge

import sys

##### Realsense Camera Configuration #####
# launch with the following parameters set:
# align_depth.enable:=true depth_module.profile:=848x480x30 rgb_camera.profile:=848x480x30
# or alter the rs_launch.py file inside the realsense-ros package
##### Realsense Camera Configuration #####


faulthandler.enable()
bridge = CvBridge()

mp_pose = mp.solutions.pose
LEFT_SHOULDER = mp_pose.PoseLandmark.LEFT_SHOULDER
LEFT_HIP = mp_pose.PoseLandmark.LEFT_HIP

RIGHT_SHOULDER = mp_pose.PoseLandmark.RIGHT_SHOULDER
RIGHT_HIP = mp_pose.PoseLandmark.RIGHT_HIP


# def get_body_center(height, width, landmarks):
#     landmarks = np.array([ (landmark.x * width, landmark.y * height) for landmark in landmarks])
#     center = ( (landmarks[LEFT_HIP] + landmarks[LEFT_SHOULDER] + landmarks[RIGHT_HIP] + landmarks[RIGHT_SHOULDER]) / 4).astype(int) 

#     return center.tolist()

def get_time_diff_mili(old_stamp, new_stamp):
    return ((new_stamp.nanoseconds - old_stamp.nanoseconds) // 1e6) if new_stamp else None


class BodyCenterTrackNode(Node):
    def __init__(self):
        super().__init__("body_track")
        self.name = "body_track"
        self.body_detector = mp_pose.Pose(
            static_image_mode=False,
            model_complexity=0,
            min_tracking_confidence=0.5,
            min_detection_confidence=0.5)
        
        self.next_frame = True
        self.depth_frame = None

        self.rgb_topic = '/camera/color/image_raw'
        self.dep_topic = "/camera/aligned_depth_to_color/image_raw"
        # self.dep_topic = '/camera/depth/image_rect_raw'
        self.camera_info_topic = '/camera/aligned_depth_to_color/camera_info' # needs to run camera with the parameter align_depth.enable:=true
        self.caminfo_topic = '/camera/color/camera_info'

        self.result_topic = '/vision/body_track/result'
        self.result_physical_topic = '/vision/body_track/result_physical'
        self.result_image_topic = 'vision/body_track/result_image' # for testing
        self.result_depth_topic = 'vision/body_track/result_depth' # for tesing too
        self.landmarks_topic = 'vision/body_track/landmarks'

        self.res_pub = self.create_publisher(
            Point, # x and y of the Point message indicate coordinate on the rgb image (in pixels), z of the Point indicate the distance to the point (in centimeters)
            self.result_topic,
            qos_profile=3
        )

        self.res_physical_pub = self.create_publisher(
            Point,
            self.result_physical_topic,
            qos_profile=3
        )
        self.res_image_pub = self.create_publisher(
            Image,
            self.result_image_topic,
            qos_profile=3
        )
        self.res_depth_pub = self.create_publisher(
            Float32,
            self.result_depth_topic,
            qos_profile=3
        )
        self.landmarks_pub = self.create_publisher(
            # publishes the landmarks identified by mediapipe if there is any
            # points are in row-major order, first row being all of the x coordinates (in pixels)
            Int32MultiArray,
            self.landmarks_topic,
            qos_profile=3
        )

        # self.img_rgb_sub = self.create_subscription(
        #     Image, 
        #     self.rgb_topic, 
        #     self.image_callback, 
        #     qos_profile=1
        # )
        # self.img_depth_sub = self.create_subscription(
        #     Image, 
        #     self.dep_topic, 
        #     self.depth_callback, 
        #     qos_profile=1
        # )
        self.camera_info_sub = self.create_subscription(
            CameraInfo, 
            self.camera_info_topic, 
            self.camera_info_callback, 
            qos_profile=1
        )
        
        self.img_rgb_subcriber =  Subscriber(
            self,
            Image, 
            self.rgb_topic 
        )
        self.img_depth_subsriber = Subscriber(
            self,
            Image, 
            self.dep_topic
        )
        self.img_sync = ApproximateTimeSynchronizer(
            [self.img_rgb_subcriber, self.img_depth_subsriber], queue_size=3, slop=0.03
        )
        self.img_sync.registerCallback(self.image_sync_callback)

        camera_info = self.create_subscription(
            CameraInfo,
            self.caminfo_topic, 
            self.camera_callback, 
            qos_profile=10
        )

        self.fx = self.fy = self.cx = self.cy = 0.0
        self.recent_img_stamp = None
        self.prev_distance = None

    
    def camera_callback(self, camera_msg):
        self.camera_info = camera_msg
        # print("camera_info received.")

    # def depth_callback(self, depth_img_ros : Image):
    #     # print(depth_img_ros.encoding, depth_img_ros.width, depth_img_ros.step)
    #     # print("depth image: ", depth_img_ros.height, depth_img_ros.width)
    #     self.depth_frame = np.ndarray(shape=(depth_img_ros.height, depth_img_ros.width), dtype=np.uint16, buffer=depth_img_ros.data)
    
    def camera_info_callback(self, camera_info:CameraInfo):
        intrinsic_matrix = camera_info.k
        self.fx = intrinsic_matrix[0]
        self.fy = intrinsic_matrix[4]
        self.cx = intrinsic_matrix[2]
        self.cy = intrinsic_matrix[5]

    def to_3D(self, u, v, depth):
        x = (u-self.cx) * depth / self.fx
        y = (v-self.cy) * depth / self.fy
        z = depth

        return z, -x, -y

    def image_sync_callback(self, rgb_img_ros, depth_img_ros):
        self.depth_frame = np.ndarray(shape=(depth_img_ros.height, depth_img_ros.width), dtype=np.uint16, buffer=depth_img_ros.data)
        rgb_img = np.ndarray(shape=(rgb_img_ros.height, rgb_img_ros.width, 3), dtype=np.uint8, buffer=rgb_img_ros.data)

        try:
            img_rgb, img_depth = self.image_process(np.copy(rgb_img), np.copy(self.depth_frame))
            cv2.imshow("Depth Image", img_depth)
        except BaseException as e:
            print(e)
            img_rgb = cv2.flip(cv2.cvtColor(rgb_img, cv2.COLOR_RGB2BGR), 1)
        
        cv2.imshow(self.name, img_rgb)
        key = cv2.waitKey(1)
    
    # def image_callback(self, rgb_img_ros):
    #     # print("rgb image: ", rgb_img_ros.height, rgb_img_ros.width)
    #     rgb_img = np.ndarray(shape=(rgb_img_ros.height, rgb_img_ros.width, 3), dtype=np.uint8, buffer=rgb_img_ros.data)
    #     try:
    #         result_image = self.image_process(np.copy(rgb_img))
    #     except BaseException as e:
    #         print(e)
    #         result_image = cv2.flip(cv2.cvtColor(rgb_img, cv2.COLOR_RGB2BGR), 1)
        
    #     cv2.imshow(self.name, result_image)
    #     key = cv2.waitKey(1)

    def publish_landmarks(self, landmarks):
        # publishes the body position landmarks to topic so that object_detection and other processes can use them
        length = len(landmarks)
        # is in row-major order (aka all of the x coordinates first, then y coordinates)
        landmark_msg = Int32MultiArray()
        landmark_msg.data = landmarks.reshape([length*2]).astype(np.int32).tolist()
        landmark_msg.layout.data_offset = 0
        landmark_msg.layout.dim = [MultiArrayDimension(), MultiArrayDimension()]
        # dim[0] is the vertical dimension of your matrix
        landmark_msg.layout.dim[0].label = "axis"
        landmark_msg.layout.dim[0].size = 2
        landmark_msg.layout.dim[0].stride = length*2
        # dim[1] is the horizontal dimension of your matrix
        landmark_msg.layout.dim[1].label = "landmarks"
        landmark_msg.layout.dim[1].size = length
        landmark_msg.layout.dim[1].stride = length
        # publish the message at last
        self.landmarks_pub.publish(landmark_msg)

    
    def image_process(self, rgb_img, depth_frame):
        # flip the rgb image
        image_rgb_flip = cv2.flip(cv2.cvtColor(rgb_img, cv2.COLOR_RGB2BGR), 1)

        depth_frame[depth_frame > 7000] = 0
        # print(depth_frame.min(), depth_frame.max())
        depth_gray = np.clip((depth_frame - depth_frame.min()) * 256.0 / depth_frame.max(), a_min=0, a_max=255).astype(np.uint8)
        # print(depth_gray)
        
        depth_img = cv2.cvtColor(depth_gray, cv2.COLOR_GRAY2BGR)

        image_depth_flip = cv2.flip(cv2.cvtColor(depth_img, cv2.COLOR_RGB2BGR), 1)
    
        # only process every other frame
        # GET RID OF if hardware allows for fast enough body detection per frame    
        if self.next_frame and False:
            self.next_frame = False
            # publish nothing
            return image_flip
        else:
            self.next_frame = True
            results = self.body_detector.process(rgb_img)

            if results is not None and results.pose_landmarks is not None:
                # if processing was susccessful and there are body points (landmarks) identified
                
                # mark the current time stamp
                stamp = self.get_clock().now()

                height, width = rgb_img.shape[:-1]

                # body_center = get_body_center(height, width, results.pose_landmarks.landmark)

                landmarks = results.pose_landmarks.landmark
                landmarks = np.array([ (landmark.x * width, landmark.y * height) for landmark in landmarks])
                center = ( (landmarks[LEFT_HIP] + landmarks[LEFT_SHOULDER] + landmarks[RIGHT_HIP] + landmarks[RIGHT_SHOULDER]) / 4).astype(int) 
                body_center = center.tolist()

                self.publish_landmarks(landmarks)

                # # draws the circle
                # cv2.circle(rgb_img, tuple(body_center), 10, (255, 255, 0), -1) 

                # get a 10x10 pixel square that is centered at <body_center>, 
                roi_h = 5
                left_shoulder = landmarks[LEFT_SHOULDER].astype(int).tolist()
                right_shoulder = landmarks[RIGHT_SHOULDER].astype(int).tolist()

                roi_w = max(abs(left_shoulder[0] - right_shoulder[0]) // 10, 1)

                # print(roi_w)

                w_1 = body_center[0] - roi_w
                w_2 = body_center[0] + roi_w
                h_1 = body_center[1] - roi_h
                h_2 = body_center[1] + roi_h

                cv2.rectangle(rgb_img, (w_1, h_1), (w_2, h_2), (255, 255, 0), -1)
                cv2.rectangle(depth_img, (w_1, h_1), (w_2, h_2), (255, 255, 0), -1)

                # crop the square at the edges if necessary as to not exceed the boundaries of the image
                if w_1 < 0:
                    w_1 = 0
                if w_2 > width:
                    w_2 = width
                
                if h_1 < 0:
                    h_1 = 0
                if h_2 > height:
                    h_2 = height

                # take the average distance to the points in the center rectangle
                roi = self.depth_frame[h_1:h_2, w_1:w_2]
                distances = roi[np.logical_and(roi > 0, roi < 40000)]
                if len(distances) > 0:
                    distance = float(np.mean(distances)/1000.0)
                else:
                    # print(roi, len(self.depth_frame), len(self.depth_frame[h_1+1]), h_1, h_2, w_1, w_2)
                    # self.get_logger().info('Unable to get valid distance, result ignored')
                    return image_rgb_flip, image_depth_flip
                    distance = 0.0

                rgb_img = cv2.flip(rgb_img, 1)
                depth_img = cv2.flip(depth_img, 1)
                
                cv2.putText(depth_img, str("%.2f" % distance), (0, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 0), 1, cv2.LINE_AA)
                cv2.putText(rgb_img, str("%.2f" % distance), (0, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 0), 1, cv2.LINE_AA)

                result_depth_image = cv2.cvtColor(depth_img, cv2.COLOR_RGB2BGR)
                result_rgb_image = cv2.cvtColor(rgb_img, cv2.COLOR_RGB2BGR)
                
                if self.recent_img_stamp is not None and self.prev_distance is not None:
                    # assuming a minim frame rate of 15fps, if the last identified distance of the person happened in the last frame
                    # and their distance have moved more than 1 meter, assume there is an error with the depth perception and discard this frame's results
                    if get_time_diff_mili(self.recent_img_stamp, stamp) < 70 and distance-self.prev_distance > 1:
                        print(self.prev_distance, distance)
                        self.get_logger().info('Distance changed too fast, result ignored')
                        return image_rgb_flip, image_depth_flip
                
                self.recent_img_stamp = stamp
                self.prev_distance = distance
                
                # x and y of the Point message indicate coordinate on the rgb image (in pixels), z of the Point indicate the distance to the point (in centimeters)
                body_center_msg = Point()
                body_center_msg.x, body_center_msg.y, body_center_msg.z = float(body_center[0]), float(body_center[1]), distance
                self.res_pub.publish(body_center_msg)

                phys_point_msg = Point()
                phys_point_msg.x, phys_point_msg.y, phys_point_msg.z = self.to_3D(body_center[0], body_center[1], distance)
                self.res_physical_pub.publish(phys_point_msg)

                depth_message = Float32()
                depth_message.data = distance
                self.res_depth_pub.publish(depth_message)

                # print(image_message, type(image_message))
                image_message = bridge.cv2_to_imgmsg(result_rgb_image, encoding="passthrough")
                self.res_image_pub.publish(image_message)

                return result_rgb_image, result_depth_image
            
            else:
                # body tracking/identification failed, publish nothing
                return image_rgb_flip, image_depth_flip


def main():
    rclpy.init()

    node_body_track = BodyCenterTrackNode()

    rclpy.spin(node_body_track)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
