import rclpy
from rclpy.node import Node
from rclpy.time import Time
import sensor_msgs
from sensor_msgs.msg import Image, PointCloud2, CameraInfo
from std_msgs.msg import Header, Int32MultiArray
import geometry_msgs
import tinker_vision_msgs
from tinker_vision_msgs.msg import Object, Objects
from tinker_vision_msgs.srv import ObjectDetection

from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import tf2_geometry_msgs
from message_filters import Subscriber, ApproximateTimeSynchronizer

from ultralytics import YOLO
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np
import matplotlib.pyplot as plt
import mediapipe as mp
import time

from torchvision.transforms import ToTensor
# from deep_sort_realtime.deepsort_tracker import DeepSort
from .third_party.deep_sort_realtime.deepsort_tracker import DeepSort

mp_pose = mp.solutions.pose
LEFT_SHOULDER = mp_pose.PoseLandmark.LEFT_SHOULDER
LEFT_ELBOW = mp_pose.PoseLandmark.LEFT_ELBOW
LEFT_WRIST = mp_pose.PoseLandmark.LEFT_WRIST
LEFT_HIP = mp_pose.PoseLandmark.LEFT_HIP

RIGHT_SHOULDER = mp_pose.PoseLandmark.RIGHT_SHOULDER
RIGHT_ELBOW = mp_pose.PoseLandmark.RIGHT_ELBOW
RIGHT_WRIST = mp_pose.PoseLandmark.RIGHT_WRIST
RIGHT_HIP = mp_pose.PoseLandmark.RIGHT_HIP

LEFT_KNEE = mp_pose.PoseLandmark.LEFT_KNEE
LEFT_ANKLE = mp_pose.PoseLandmark.LEFT_ANKLE

RIGHT_KNEE = mp_pose.PoseLandmark.RIGHT_KNEE
RIGHT_ANKLE = mp_pose.PoseLandmark.RIGHT_ANKLE


# helper functions
def get_time_sec(stamp):
    if isinstance(stamp, rclpy.time.Time):
        return (stamp.nanoseconds // 1e6) / 1e3 if stamp else None
    
    assert False
    # return (stamp.nanosec // 1e6) / 1e3 if stamp else None

def cross_product(p1, p2, p3):
    return (p2[0] - p1[0]) * (p3[1] - p1[1]) - (p3[0] - p1[0]) * (p2[1] - p1[1])

def is_intersected(p1, p2, p3, p4):
    if cross_product(p1, p2, p3) * cross_product(p1, p2, p4) < 0 and cross_product(p3, p4, p1) * cross_product(p3, p4, p2) < 0:
        return True
    else:
        return False
    
def get_p1_p2(elbow_x, elbow_y, wrist_x, wrist_y, w, h):
    p1 = (wrist_x, wrist_y)
    p2 = (0, 0)
    if elbow_x < wrist_x:
        if elbow_y < wrist_y:
            if cross_product((elbow_x, elbow_y), p1, (w, h)) * cross_product((elbow_x, elbow_y), p1, (w, 0)) < 0:
                p2 = (w, p1[1] + (w - p1[0]) * (elbow_y - p1[1]) / max(1e-6, float(elbow_x - p1[0])))
            else:
                p2 = (p1[0] + (h - p1[1]) * (elbow_x - p1[0]) / max(1e-6, float(elbow_y - p1[1])), h)
        else:
            if cross_product((elbow_x, elbow_y), p1, (w, h)) * cross_product((elbow_x, elbow_y), p1, (w, 0)) < 0:
                p2 = (w, p1[1] + (w - p1[0]) * (elbow_y - p1[1]) / max(1e-6, float(elbow_x - p1[0])))
            else:
                p2 = (p1[0] + (0 - p1[1]) * (elbow_x - p1[0]) / max(1e-6, float(elbow_y - p1[1])), 0)
    else:
        if elbow_y < wrist_y:
            if cross_product((elbow_x, elbow_y), p1, (0, h)) * cross_product((elbow_x, elbow_y), p1, (0, 0)) < 0:
                p2 = (0, p1[1] + (0 - p1[0]) * (elbow_y - p1[1]) / max(1e-6, float(elbow_x - p1[0])))
            else:
                p2 = (p1[0] + (h - p1[1]) * (elbow_x - p1[0]) / max(1e-6, float(elbow_y - p1[1])), h)
        else:
            if cross_product((elbow_x, elbow_y), p1, (0, h)) * cross_product((elbow_x, elbow_y), p1, (0, 0)) < 0:
                p2 = (0, p1[1] + (0 - p1[0]) * (elbow_y - p1[1]) / max(1e-6, float(elbow_x - p1[0])))
            else:
                p2 = (p1[0] + (0 - p1[1]) * (elbow_x - p1[0]) / max(1e-6, float(elbow_y - p1[1])), 0)
    return p1, p2


def get_array_from_points(points: PointCloud2) -> tuple[np.array, np.array]:
    '''
    Get the point array from point cloud
    Returns: point_arr: [H, W, 3], valid_mask: [H, W]
    Kinect PointCloud2 format:
        height: 1
        width: 3145728
        fields:
        - name: x
            offset: 0
            datatype: 7
            count: 1
        - name: y
            offset: 4
            datatype: 7
            count: 1
        - name: z
            offset: 8
            datatype: 7
            count: 1
        - name: rgb
            offset: 16
            datatype: 7
            count: 1
        is_bigendian: false
        point_step: 32
        row_step: 100663296
    PointField datatype:
        uint8 INT8    = 1
        uint8 UINT8   = 2
        uint8 INT16   = 3
        uint8 UINT16  = 4
        uint8 INT32   = 5
        uint8 UINT32  = 6
        uint8 FLOAT32 = 7
        uint8 FLOAT64 = 8
    '''
    # h, w = 1536, 2048
    h, w = 720, 1280
    arr = np.frombuffer(points.data, dtype='<f4')
    # print(len(arr), h * w * 8)
    assert(len(arr) == h * w * 8)
    arr = arr.reshape((h, w, 8))[:, :, :3]
    mask = 1 - np.multiply.reduce(np.isnan(arr), axis=2)
    # remove nans
    arr = np.nan_to_num(arr, nan=0)
    return arr, mask


class DetectionService(Node):

    def __init__(self):
        super().__init__('detection_service')

        self.declare_parameter('camera_type', 'realsense')
        self.camera_type = self.get_parameter('camera_type').get_parameter_value().string_value

        # self.declare_parameter('image_topic', 'rgb/image_raw')
        self.declare_parameter('image_topic', '/camera/color/image_raw')
        self.image_topic = self.get_parameter('image_topic').get_parameter_value().string_value
        # self.declare_parameter('point_cloud_topic', 'points2')
        self.declare_parameter('point_cloud_topic', '/camera/aligned_depth_to_color/image_raw')
        self.point_cloud_topic = self.get_parameter('point_cloud_topic').get_parameter_value().string_value

        # synchronize between image topic and point cloud topic
        self.image_sub = Subscriber(
            self,
            Image,
            self.image_topic
        )
        self.point_cloud_sub = Subscriber(
            self,
            Image if self.camera_type == 'realsense' else PointCloud2,
            self.point_cloud_topic
        )
        self.image_sync = ApproximateTimeSynchronizer(
            [self.image_sub, self.point_cloud_sub], queue_size=3, slop=0.05
        )
        self.image_sync.registerCallback(self.img_sync_callback)
        
        self.recent_sync_msg = None
        self.recent_pub_stamp = None

        self.camera_info_topic = '/camera/aligned_depth_to_color/camera_info'

        if self.camera_type == 'realsense':
            self.camera_info_sub = self.create_subscription(
                CameraInfo,
                self.camera_info_topic, 
                self.camera_info_callback, 
                qos_profile=10
            )
        self.camera_intrinsic = None
        # self.point_cloud_xy = None

        self.declare_parameter('visualization_en', True)
        self.visualization_en = self.get_parameter('visualization_en').get_parameter_value().bool_value

        self.declare_parameter('debug_mode', True)
        self.debug = self.get_parameter('debug_mode').get_parameter_value().bool_value

        self.declare_parameter('detection_topic_en', True)
        self.detection_topic_en = self.get_parameter('detection_topic_en').get_parameter_value().bool_value
        
        self.declare_parameter('visualization_point', False)
        self.visualization_point = self.get_parameter('visualization_point').get_parameter_value().bool_value
        
        self.declare_parameter('publish_rate', 10)
        self.publish_rate = self.get_parameter('publish_rate').get_parameter_value().integer_value

        self.srv = self.create_service(ObjectDetection, 'object_detection', self.detection_srv_callback)
        # [n, s, m, l, x]
        self.model = YOLO('yolov8m-seg.pt')
        self.bridge = CvBridge()
        
        self.tracker = DeepSort(max_age=300, embedder="mobilenet", max_cosine_distance=0.12)
        self.fps_time_rec = 0

        self.get_logger().info('Detection service initialized.')

        # reads from landmark topic sent by body_track in the vision module, r
        # eturns a Int32MultiArray that containes the pixel (x,y) coordinates of the landmarks in row-major order
        self.landmarks_topic = 'vision/body_track/landmarks'
        self.landmarks_sub = self.create_subscription(
            Int32MultiArray,
            self.landmarks_topic,
            self.landmark_callback,
            qos_profile=1
        )

        # 导入模型
        self.mp_pose = mp.solutions.pose.Pose(static_image_mode=False,        # 是静态图片还是连续视频帧
                                              model_complexity=1,             # 取0,1,2；0最快但性能差，2最慢但性能好
                                              smooth_landmarks=True,          # 是否平滑关键点
                                              min_detection_confidence=0.5,   # 置信度阈值
                                              min_tracking_confidence=0.5)    # 追踪阈值

        # if self.debug:
        self.publisher_ = self.create_publisher(geometry_msgs.msg.PointStamped, 'obj_det', 10)
        if self.detection_topic_en:
            self.detection_publisher = self.create_publisher(Objects, 'detection_publisher', 10)

        # for debug reasons
        import matplotlib.pyplot as plt
        plt.axis([0,10,0,10])
        plt.ion()
        plt.show()


    def landmark_callback(self, arr_float: Int32MultiArray):
        # Reads from topic sent by the body_track node
        # 左胳膊肘
        self.left_elbow_x = int(arr_float.data[LEFT_ELBOW])
        self.left_elbow_y = int(arr_float.data[LEFT_ELBOW + 33]) # +33 because there are 33 elements in one row (33 landmarks total)

        # 右胳膊肘
        self.right_elbow_x = int(arr_float.data[RIGHT_ELBOW])
        self.right_elbow_y = int(arr_float.data[RIGHT_ELBOW + 33])

        # 左手腕
        self.left_wrist_x = int(arr_float.data[LEFT_WRIST])
        self.left_wrist_y = int(arr_float.data[LEFT_WRIST + 33])

        # 右手腕
        self.right_wrist_x = int(arr_float.data[RIGHT_WRIST])
        self.right_wrist_y = int(arr_float.data[RIGHT_WRIST + 33])


    def camera_info_callback(self, info):
        self.camera_intrinsic = info.k
    
    
    def img_sync_callback(self, color_msg, depth_msg):
        if self.camera_type == 'realsense':
            if self.camera_intrinsic is None:
                return
            
            # color_img = np.ndarray(shape=(color_msg.height, color_msg.width, 3), dtype=np.uint8, buffer=color_msg.data)
            color_img = self.bridge.imgmsg_to_cv2(color_msg, "bgr8")
            # depth_img = np.ndarray(shape=(depth_msg.height, depth_msg.width), dtype=np.uint16, buffer=depth_msg.data)
            depth_img = self.bridge.imgmsg_to_cv2(depth_msg, "passthrough")
            depth_img = depth_img.astype(float) / 1000.0

            H, W = depth_img.shape
            fx, fy, cx, cy = tuple(self.camera_intrinsic[[0, 4, 2, 5]])
            points_x = np.repeat(np.expand_dims(np.arange(0, H), axis=1), W, axis=1)
            points_y = np.repeat(np.expand_dims(np.arange(0, W), axis=0), H, axis=0)
            points_x = (points_x - cx) * depth_img / fx
            points_y = (points_y - cy) * depth_img / fy
            
            validmask_points = np.ones_like(depth_img)
            validmask_points[depth_img > 10] = 0
            validmask_points[depth_img < 1e-6] = 0
            # depth_img *= validmask_points
            depth_img[depth_img > 10] = 10
            depth_img[depth_img < 1e-6] = 0

            points = np.stack([points_x, points_y, depth_img], axis=2)

        else:
            color_img = self.bridge.imgmsg_to_cv2(color_msg, "bgr8")
            points, validmask_points = get_array_from_points(depth_msg)

        if self.detection_topic_en:
            if self.publish_rate <= 0 or self.recent_pub_stamp is None \
                or get_time_sec(self.get_clock().now()) - get_time_sec(self.recent_pub_stamp) > 1 / self.publish_rate:

                msg, _ = self.detection_segmentation(color_img, points, validmask_points, register_person=False)
                msg.header = depth_msg.header
                self.detection_publisher.publish(msg)
                self.recent_pub_stamp = self.get_clock().now()

        self.recent_sync_msg = (color_img, points, validmask_points, depth_msg.header)


    def detection_segmentation(self, img, img_pt, validmask_pt, register_person=False) -> Objects:
        '''
        The header section is left empty in the returned response message.
        '''
        self.visualization_en = self.get_parameter('visualization_en').get_parameter_value().bool_value

        response = Objects()

        # response.header.stamp = points_msg.header.stamp
        # response.header.frame_id = 'depth_camera_link'
        response.status = 1
        response.objects = []

        # img = self.bridge.imgmsg_to_cv2(img_msg, "bgr8")
        # img_pt, validmask_pt = get_array_from_points(points_msg)

        img_pt = cv2.resize(img_pt, (img.shape[1], img.shape[0]), interpolation=cv2.INTER_NEAREST)
        validmask_pt = cv2.resize(validmask_pt, (img.shape[1], img.shape[0]), interpolation=cv2.INTER_NEAREST)

        # Pad to the closest multiple of 32, otherwise YOLO will scale your image
        H, W = (img.shape[0] + 31) // 32 * 32, (img.shape[1] + 31) // 32 * 32
        img = cv2.copyMakeBorder(img, 0, H - img.shape[0], 0, W - img.shape[1], cv2.BORDER_CONSTANT, 0)
        img_pt = cv2.copyMakeBorder(img_pt, 0, H - img_pt.shape[0], 0, W - img_pt.shape[1], cv2.BORDER_CONSTANT, 0)
        validmask_pt = cv2.copyMakeBorder(validmask_pt, 0, H - validmask_pt.shape[0], 0, W - validmask_pt.shape[1], cv2.BORDER_CONSTANT, 0)

        results = self.model(img, imgsz=(H, W))

        results_pose = self.mp_pose.process(img) # 将RGB图片输入模型，获取预测结果
        ## 获取图片长宽
        h1, w1 = img.shape[0], img.shape[1]

        if results_pose.pose_landmarks:
            # 左胳膊肘
            left_elbow_x = int(results_pose.pose_landmarks.landmark[13].x * w1)
            left_elbow_y = int(results_pose.pose_landmarks.landmark[13].y * h1)

            # 右胳膊肘
            right_elbow_x = int(results_pose.pose_landmarks.landmark[14].x * w1)
            right_elbow_y = int(results_pose.pose_landmarks.landmark[14].y * h1)

            # 左手腕
            left_wrist_x = int(results_pose.pose_landmarks.landmark[15].x * w1)
            left_wrist_y = int(results_pose.pose_landmarks.landmark[15].y * h1)

            # 右手腕
            right_wrist_x = int(results_pose.pose_landmarks.landmark[16].x * w1)
            right_wrist_y = int(results_pose.pose_landmarks.landmark[16].y * h1)

            left_p1, left_p2 = get_p1_p2(left_elbow_x, left_elbow_y, left_wrist_x, left_wrist_y, w1, h1)
            print(left_p1, left_p2)

            right_p1, right_p2 = get_p1_p2(right_elbow_x, right_elbow_y, right_wrist_x, right_wrist_y, w1, h1)
            print(right_p1, right_p2)

            

        if self.visualization_point:
            point_img = np.copy(img)
            if results_pose.pose_landmarks:
                point_img = cv2.circle(point_img, (left_elbow_x, left_elbow_y), 5, (0, 0, 255), -1)
                point_img = cv2.circle(point_img, (left_wrist_x, left_wrist_y), 5, (1, 240, 255), -1)
                point_img = cv2.circle(point_img, (right_elbow_x, right_elbow_y), 5, (0, 0, 255), -1)
                point_img = cv2.circle(point_img, (right_wrist_x, right_wrist_y), 5, (1, 240, 255), -1)
                point_img = cv2.line(point_img, (int(left_p1[0]), int(left_p1[1])), (int(left_p2[0]), int(left_p2[1])), (223, 155, 60), 3)
                point_img = cv2.line(point_img, (int(right_p1[0]), int(right_p1[1])), (int(right_p2[0]), int(right_p2[1])), (94, 218, 121), 3)
                point_img = cv2.putText(
                    img=point_img,
                    text=f"left point: {left_p1}, {left_p2}\nright point: {right_p1}, {right_p2}",
                    # org=(int((y1 + y2) // 2), int((x1 + x2) // 2) + 25),
                    org=(0, 45),
                    fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                    fontScale=0.9,
                    color=(0, 0, 255),
                    thickness=2
                )

        # draw 
        if self.visualization_en:
            debug_masks = np.zeros((H, W), dtype=np.uint8)
            debug_img = np.copy(img)
            debug_depth_img = np.copy(img_pt[:, :, 2])

            debug_depth_img = (debug_depth_img - debug_depth_img.min()) / (debug_depth_img.max() - debug_depth_img.min())
            debug_depth_img = cv2.cvtColor((debug_depth_img * 255).astype(np.uint8), cv2.COLOR_GRAY2BGR)
        else:
            debug_masks, debug_img, debug_depth_img = None, None, None

        deepsort_detections, deepsort_detection_indices = [], []

        for res in results:
            boxes, masks = res.boxes, res.masks
            for i in range(len(boxes.cls)):
                conf = res.boxes.conf[i].item()
                cls = self.model.names[int(res.boxes.cls[i])]
                mask_obj = masks[i].data.cpu().numpy().squeeze()
                
                # centroid
                # img_pt = [H, W, 3], masks[i] = [H, W]
                mask_pt = mask_obj * validmask_pt
                if mask_pt.sum() < 10:
                    self.get_logger().warn(f'Detected {cls} with invalid depth info, skipped.')
                    continue
                masked_pts = img_pt * np.expand_dims(mask_pt, 2)
                cent_pts = masked_pts.sum(axis=(0, 1)) / mask_pt.sum()

                if self.camera_type == 'realsense':
                    centroid = geometry_msgs.msg.Point(x=cent_pts[2], y=-cent_pts[1], z=-cent_pts[0])
                else:
                    centroid = geometry_msgs.msg.Point(x=cent_pts[0], y=cent_pts[1], z=cent_pts[2])

                # check pointed
                intersect_left = False
                intersect_right = False
                left_up = (boxes.xyxy[i][0].item(), boxes.xyxy[i][1].item())
                left_down = (boxes.xyxy[i][0].item(), boxes.xyxy[i][3].item())
                right_up = (boxes.xyxy[i][2].item(), boxes.xyxy[i][1].item())
                right_down = (boxes.xyxy[i][2].item(), boxes.xyxy[i][3].item())
                if (cls == "suitcase" or cls == "backpack") and results_pose.pose_landmarks:
                    intersect_left =  is_intersected(left_p1, left_p2, left_up, left_down)\
                        or is_intersected(left_p1, left_p2, left_up, right_up)\
                        or is_intersected(left_p1, left_p2, left_down, right_down)\
                        or is_intersected(left_p1, left_p2, right_up, right_down)
                    intersect_right =  is_intersected(left_p1, left_p2, left_up, left_down)\
                        or is_intersected(left_p1, left_p2, left_up, right_up)\
                        or is_intersected(left_p1, left_p2, left_down, right_down)\
                        or is_intersected(left_p1, left_p2, right_up, right_down)
                
                side = "none"
                if intersect_left:
                    response.objects.append(Object(conf=conf, id=0, cls=cls, centroid=centroid, intersect=True, left_up=geometry_msgs.msg.Point(x=left_up[0], y=left_up[1], z=0.0), right_down=geometry_msgs.msg.Point(x=right_down[0], y=right_down[1], z=0.0)))
                    side = "left"
                elif intersect_right:
                    response.objects.append(Object(conf=conf, id=0, cls=cls, centroid=centroid, intersect=True, left_up=geometry_msgs.msg.Point(x=left_up[0], y=left_up[1], z=0.0), right_down=geometry_msgs.msg.Point(x=right_down[0], y=right_down[1], z=0.0)))
                    side = "right"
                else:
                    response.objects.append(Object(conf=conf, id=0, cls=cls, centroid=centroid, intersect=False, left_up=geometry_msgs.msg.Point(x=left_up[0], y=left_up[1], z=0.0), right_down=geometry_msgs.msg.Point(x=right_down[0], y=right_down[1], z=0.0)))

                # format for deepsort tracking
                mask_nonzero = np.nonzero(mask_obj)
                # bbox = x1, y1, x2, y2
                bbox = mask_nonzero[0].min(), mask_nonzero[1].min(), mask_nonzero[0].max(), mask_nonzero[1].max()
                if cls == 'person':
                    deepsort_detections.append((
                        # [bbox[0], bbox[1], bbox[2] - bbox[0], bbox[3] - bbox[1]],
                        [bbox[1], bbox[0], bbox[3] - bbox[1], bbox[2] - bbox[0]],
                        conf,
                        cls,
                        centroid.z
                    ))
                    deepsort_detection_indices.append(i)

                if self.visualization_en:
                    if i < 1:
                        self.publisher_.publish(geometry_msgs.msg.PointStamped(header=response.header, point=centroid))
                    
                    # print(mask_obj.shape, type(mask_obj))
                    debug_masks = np.logical_or(debug_masks, mask_obj.astype(np.uint8)).astype(np.uint8)

                    # bbox
                    x1, y1, x2, y2 = bbox
                    # draw depth of objects
                    cv2.putText(
                        img=debug_depth_img,
                        text="%s, %.2f, %.2f" % (cls, conf, cent_pts[2]),
                        org=((y1 + y2) // 2, (x1 + x2) // 2),
                        fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                        fontScale=0.6,
                        color=(0, 0, 255),
                        thickness=2
                    )

                if self.visualization_point:
                    if cls == ('suitcase' or 'backpack'):
                        # bbox
                        x1, y1, x2, y2 = bbox
                        point_img = cv2.putText(
                            img=point_img,
                            text=f"{cls}, {side}, {left_up}, {left_down}, {right_up}, {right_down}",
                            org=((y1 + y2) // 2, (x1 + x2) // 2),
                            fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                            fontScale=0.6,
                            color=(0, 0, 255),
                            thickness=2
                        )
                        point_img = cv2.rectangle(point_img, (int(left_up[0]), int(left_up[1])), (int(right_down[0]), int(right_down[1])), color=(0, 0, 255), thickness=2)


        track_start_time = time.time()
        if len(deepsort_detections) > 0:
            min_z, min_idx = 1e9, -1
            for idx, (bbox, conf, cls, z) in enumerate(deepsort_detections):
                if min_z > z:
                    min_z, min_idx = z, idx

            for idx, (bbox, conf, cls, z) in enumerate(deepsort_detections):
                deepsort_detections[idx] = (bbox, conf, cls, (register_person and min_idx == idx))

                
        tracks, detection_ids, reg_info = self.tracker.update_tracks(deepsort_detections, frame=img, register_person=register_person)
        for detection_idx, track_id in detection_ids:
            response.objects[deepsort_detection_indices[detection_idx]].id = track_id

        track_end_time = time.time()

        print('tracking time = %.2f ms' % ((track_end_time - track_start_time) * 1000))
        
        if self.visualization_en:
            # draw ids
            for track in tracks:
                # print('Track status: ', track.is_confirmed(), track.time_since_update)
                if not track.is_confirmed():# or track.time_since_update > 200:
                    continue
                y1, x1, y2, x2 = track.to_ltrb()
                y1, x1, y2, x2 = int(y1), int(x1), int(y2), int(x2)
                cv2.rectangle(debug_img, (y1, x1), (y2, x2), color=(0, 0, 255), thickness=2)
                cls, conf = track.det_class, 0 if track.det_conf is None else track.det_conf
                cv2.putText(
                    img=debug_img,
                    # text="ID: %s" % (track.track_id),
                    text="%s, ID: %s, age: %d" % (cls, track.track_id, track.time_since_update),
                    # org=(int((y1 + y2) // 2), int((x1 + x2) // 2) + 25),
                    org=(y1, x1 + 25),
                    fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                    fontScale=0.7,
                    color=(0, 0, 255),
                    thickness=2
                )
                print('Track mean: ')
                print(track.mean)
                print('Track cov: ')
                print(track.covariance)

            # draw contours
            contours, _ = cv2.findContours(debug_masks * 255, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            # cv2.drawContours(debug_img, contours, -1, (255, 0, 0), 1)
            cv2.drawContours(debug_depth_img, contours, -1, (255, 0, 0), 1)

            time_now = get_time_sec(self.get_clock().now())
            fps = 1 / (time_now - self.fps_time_rec + 1e-6) if self.fps_time_rec is not None else 0
            self.fps_time_rec = time_now

            cv2.putText(
                img=debug_img,
                # text="ID: %s" % (track.track_id),
                text="FPS: %.2f" % (fps),
                # org=(int((y1 + y2) // 2), int((x1 + x2) // 2) + 25),
                org=(0, 25),
                fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                fontScale=0.9,
                color=(0, 0, 255),
                thickness=2
            )
                
            cv2.imshow('color image', debug_img)
            # cv2.imshow('depth image', debug_depth_img)
            cv2.waitKey(1)
        
        if self.visualization_point:
            # draw ids
            for track in tracks:
                if not track.is_confirmed() or track.time_since_update > 100:
                    continue
                y1, x1, y2, x2 = track.to_ltrb()
                y1, x1, y2, x2 = int(y1), int(x1), int(y2), int(x2)
                cv2.rectangle(debug_img, (y1, x1), (y2, x2), color=(0, 0, 255), thickness=2)
                cls, conf = track.det_class, 0 if track.det_conf is None else track.det_conf
                cv2.putText(
                    img=debug_img,
                    # text="ID: %s" % (track.track_id),
                    text="%s, ID: %s, age: %d" % (cls, track.track_id, track.time_since_update),
                    # org=(int((y1 + y2) // 2), int((x1 + x2) // 2) + 25),
                    org=(y1, x1 + 25),
                    fontFace=cv2.FONT_HERSHEY_SIMPLEX,
                    fontScale=0.7,
                    color=(0, 0, 255),
                    thickness=2
                )
            cv2.imshow('point image', point_img)
            cv2.waitKey(1)
        response.status = 0
        return response, reg_info
    

    def detection_pose(self) -> Objects:
        pass


    def detection_srv_callback(self, request, response) -> ObjectDetection:
        self.visualization_en = self.get_parameter('visualization_en').get_parameter_value().bool_value

        if self.recent_sync_msg is None:
            response.header = Header(stamp=self.get_clock().now().to_msg())
            response.status = 1
            response.objects = []
            return response
        
        register_person = request.mode == 'register_person'

        self.get_logger().info(f'Incoming detection request (register_person = {register_person}).')

        # if request.mode == 'pose':
        #     objects = self.detection_pose()
        # else:
        img, points, validmask_pt, msg_header = self.recent_sync_msg
        objects, reg_info = self.detection_segmentation(img, points, validmask_pt, register_person)
        objects.header = msg_header
        
        response.header = objects.header
        response.status = objects.status | (register_person and reg_info)
        response.person_id = reg_info[1]
        response.objects = objects.objects

        return response



def main():
    rclpy.init()
    detection_service = DetectionService()
    rclpy.spin(detection_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()

