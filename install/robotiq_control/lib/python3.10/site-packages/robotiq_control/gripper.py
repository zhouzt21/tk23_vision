from tinker_arm_msgs.srv import Robotiq

import rclpy
from rclpy.node import Node
from .robotiqGripper import RobotiqGripper


class Gripper(Node):

    def __init__(self):
        super().__init__('gripper')
        self.gripper = RobotiqGripper("/dev/ttyUSB0")
        self.gripper.reset()
        self.gripper.printInfo()
        self.gripper.activate()
        self.gripper.printInfo()
        self.srv = self.create_service(Robotiq, 'robotiq_service', self.callback)

    def callback(self, request, response):
        try:
            self.gripper.goTo(request.distance)
        except:
            response.success = False
        else:
            response.success = True

        return response


def main():
    rclpy.init()

    gripper = Gripper()

    rclpy.spin(gripper)

    rclpy.shutdown()


if __name__ == '__main__':
    main()