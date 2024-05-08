import cv2
import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import Point
from std_msgs.msg import Float32MultiArray, MultiArrayDimension, Float32, Int32MultiArray
from tinker_vision_msgs.msg import Objects

import numpy as np
import faulthandler
import mediapipe as mp
from cv_bridge import CvBridge

import torch
import torchvision
import os
import time
import argparse

from torchvision.transforms import ToTensor
from deep_sort_realtime.deepsort_tracker import DeepSort
# from utils import convert_detections, annotate
# from coco_classes import COCO_91_CLASSES

import sys

##### Realsense Camera Configuration #####
# launch with the following parameters set:
# align_depth.enable:=true depth_module.profile:=848x480x30 rgb_camera.profile:=848x480x30
# or alter the rs_launch.py file inside the realsense-ros package
##### Realsense Camera Configuration #####

#### function from utils.py ####
# Define a function to convert detections to SORT format.
def convert_detections(detections, threshold, classes):
    # Get the bounding boxes, labels and scores from the detections dictionary.
    boxes = detections["boxes"].cpu().numpy()
    labels = detections["labels"].cpu().numpy()
    scores = detections["scores"].cpu().numpy()
    lbl_mask = np.isin(labels, classes)
    scores = scores[lbl_mask]
    # Filter out low confidence scores and non-person classes.
    mask = scores > threshold
    boxes = boxes[lbl_mask][mask]
    scores = scores[mask]
    labels = labels[lbl_mask][mask]

    # Convert boxes to [x1, y1, w, h, score] format.
    final_boxes = []
    for i, box in enumerate(boxes):
        # Append ([x, y, w, h], score, label_string).
        final_boxes.append(
            (
                [box[0], box[1], box[2] - box[0], box[3] - box[1]],
                scores[i],
                str(labels[i])
            )
        )

    return final_boxes

# Function for bounding box and ID annotation.
def annotate(tracks, frame, resized_frame, frame_width, frame_height, colors):
    for track in tracks:
        if not track.is_confirmed():
            continue
        track_id = track.track_id
        track_class = track.det_class
        x1, y1, x2, y2 = track.to_ltrb()
        p1 = (int(x1/resized_frame.shape[1]*frame_width), int(y1/resized_frame.shape[0]*frame_height))
        p2 = (int(x2/resized_frame.shape[1]*frame_width), int(y2/resized_frame.shape[0]*frame_height))
        # Annotate boxes.
        color = colors[int(track_class)]
        cv2.rectangle(
            frame, 
            p1, 
            p2, 
            color=(int(color[0]), int(color[1]), int(color[2])), 
            thickness=2
        )
        # Annotate ID.
        cv2.putText(
            frame, f"ID: {track_id}", 
            (p1[0], p1[1] - 10), 
            cv2.FONT_HERSHEY_SIMPLEX, 
            0.5, 
            (0, 255, 0), 
            2,
            lineType=cv2.LINE_AA
        )
    return frame
#### function from utils.py ####

#### COCO classes ####
COCO_91_CLASSES = [
    '__background__', 
    'person', 'bicycle', 'car', 'motorcycle', 'airplane', 'bus',
    'train', 'truck', 'boat', 'traffic light', 'fire hydrant', 'N/A', 'stop sign',
    'parking meter', 'bench', 'bird', 'cat', 'dog', 'horse', 'sheep', 'cow',
    'elephant', 'bear', 'zebra', 'giraffe', 'N/A', 'backpack', 'umbrella', 'N/A', 'N/A',
    'handbag', 'tie', 'suitcase', 'frisbee', 'skis', 'snowboard', 'sports ball',
    'kite', 'baseball bat', 'baseball glove', 'skateboard', 'surfboard', 'tennis racket',
    'bottle', 'N/A', 'wine glass', 'cup', 'fork', 'knife', 'spoon', 'bowl',
    'banana', 'apple', 'sandwich', 'orange', 'broccoli', 'carrot', 'hot dog', 'pizza',
    'donut', 'cake', 'chair', 'couch', 'potted plant', 'bed', 'N/A', 'dining table',
    'N/A', 'N/A', 'toilet', 'N/A', 'tv', 'laptop', 'mouse', 'remote', 'keyboard', 'cell phone',
    'microwave', 'oven', 'toaster', 'sink', 'refrigerator', 'N/A', 'book',
    'clock', 'vase', 'scissors', 'teddy bear', 'hair drier', 'toothbrush'
]
#### COCO classes ####


faulthandler.enable()
bridge = CvBridge()

mp_pose = mp.solutions.pose
LEFT_SHOULDER = mp_pose.PoseLandmark.LEFT_SHOULDER
LEFT_HIP = mp_pose.PoseLandmark.LEFT_HIP

RIGHT_SHOULDER = mp_pose.PoseLandmark.RIGHT_SHOULDER
RIGHT_HIP = mp_pose.PoseLandmark.RIGHT_HIP

#### DeepSORT related Paser setup ####
parser = argparse.ArgumentParser()
parser.add_argument(
    '--input', 
    default='input/mvmhat_1_1.mp4',
    help='path to input video',
)
parser.add_argument(
    '--imgsz', 
    default=None,
    help='image resize, 640 will resize images to 640x640',
    type=int
)
parser.add_argument(
    '--model',
    default='fasterrcnn_resnet50_fpn_v2',
    help='model name',
    choices=[
        'fasterrcnn_resnet50_fpn_v2',
        'fasterrcnn_resnet50_fpn',
        'fasterrcnn_mobilenet_v3_large_fpn',
        'fasterrcnn_mobilenet_v3_large_320_fpn',
        'fcos_resnet50_fpn',
        'ssd300_vgg16',
        'ssdlite320_mobilenet_v3_large',
        'retinanet_resnet50_fpn',
        'retinanet_resnet50_fpn_v2'
    ]
)
parser.add_argument(
    '--threshold',
    default=0.8,
    help='score threshold to filter out detections',
    type=float
)
parser.add_argument(
    '--embedder',
    default='mobilenet',
    help='type of feature extractor to use',
    choices=[
        "mobilenet",
        "torchreid",
        "clip_RN50",
        "clip_RN101",
        "clip_RN50x4",
        "clip_RN50x16",
        "clip_ViT-B/32",
        "clip_ViT-B/16"
    ]
)
parser.add_argument(
    '--show',
    action='store_true',
    help='visualize results in real-time on screen'
)
parser.add_argument(
    '--cls', 
    nargs='+',
    default=[1],
    help='which classes to track',
    type=int
)
args = parser.parse_args()

np.random.seed(42)
#### DeepSORT related Paser setup ####


#### TensorVision and DeepSORT model setup ####
device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
COLORS = np.random.randint(0, 255, size=(len(COCO_91_CLASSES), 3))

print(f"Tracking: {[COCO_91_CLASSES[idx] for idx in args.cls]}")
print(f"Detector: {args.model}")
print(f"Re-ID embedder: {args.embedder}")

# Load model.
model = getattr(torchvision.models.detection, args.model)(weights='DEFAULT')
# Set model to evaluation mode.
model.eval().to(device)

# Initialize a SORT tracker object.
tracker = DeepSort(max_age=30, embedder=args.embedder)
#### TensorVision and DeepSORT model setup ####


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
    
    def camera_info_callback(self, camera_info:CameraInfo):
        intrinsic_matrix = camera_info.k
        self.fx = intrinsic_matrix[0]
        self.fy = intrinsic_matrix[4]
        self.cx = intrinsic_matrix[2]
        self.cy = intrinsic_matrix[5]

    def to_3D(self, u, v, depth):
        x = (u-self.cx) * depth / self.fx
        y = (v-self.cy) *depth / self.fy
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

    def publish_landmarks(self, landmarks):
        # publishes the body position landmarks to topic so that object_detection and other processes can use them
        length = len(landmarks)
        # is in row-major order (aka all of the x coordinates first, then y coordinates)
        landmark_msg = Int32MultiArray()
        landmark_msg.data = landmarks.reshape([length*2]).astype(np.int32)
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
            # results = self.body_detector.process(rgb_img)
            if args.imgsz != None:
                resized_frame = cv2.resize(image_rgb_flip, (args.imgsz, args.imgsz))
            else:
                resized_frame = image_rgb_flip
            
            frame_tensor = ToTensor()(resized_frame).to(device)
            with torch.no_grad():
                detections = model([frame_tensor])[0]
            
            start_time = time.time()
        # Feed frame to model and get detections.
        det_start_time = time.time()
        with torch.no_grad():
            detections = model([frame_tensor])[0]
        det_end_time = time.time()

        det_fps = 1 / (det_end_time - det_start_time)
    
        # Convert detections to Deep SORT format.
        detections = convert_detections(detections, args.threshold, args.cls)
    
        # Update tracker with detections.
        track_start_time = time.time()
        tracks = tracker.update_tracks(detections, frame=image_rgb_flip)
        track_end_time = time.time()
        track_fps = 1 / (track_end_time - track_start_time)

        end_time = time.time()
        fps = 1 / (end_time - start_time)

        frame_width = 848
        frame_height = 480

        print(f"Detection FPS: {det_fps:.1f},", 
              f"Tracking FPS: {track_fps:.1f}, Total FPS: {fps:.1f}")
        # Draw bounding boxes and labels on frame.
        if len(tracks) > 0:
            image_rgb_flip = annotate(
                tracks, 
                image_rgb_flip, 
                resized_frame,
                frame_width,
                frame_height,
                COLORS
            )
        print(image_rgb_flip)
        cv2.putText(
            image_rgb_flip,
            f"FPS: {fps:.1f}",
            (int(20), int(40)),
            fontFace=cv2.FONT_HERSHEY_SIMPLEX,
            fontScale=1,
            color=(0, 0, 255),
            thickness=2,
            lineType=cv2.LINE_AA
        )
        print("showing")
        if args.show:
            # Display or save output frame.
            cv2.imshow("Output", image_rgb_flip)

        return image_rgb_flip, image_depth_flip
        


def main():
    rclpy.init()

    node_body_track = BodyCenterTrackNode()

    rclpy.spin(node_body_track)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
