#!/usr/bin/env python3

import rclpy
import rclpy.action
from rclpy.node import Node
from rclpy.action import ActionClient

from audio_common_msgs.action import SoundRequest as SoundRequestAction
from audio_common_msgs.msg import SoundRequest

class Say(Node):

    def __init__(self):
        super().__init__('tinker_say')

        self._action_client = ActionClient(self, SoundRequestAction, 'sound_play')

    def send_goal(self, content):
        goal_msg = SoundRequestAction.Goal()
        msg = SoundRequest()
        msg.sound = SoundRequest.SAY
        msg.command = SoundRequest.PLAY_ONCE
        msg.volume = 0.5
        msg.arg = content
        goal_msg.sound_request = msg

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)
        


def main():
    rclpy.init()

    action_client = Say()

    future = action_client.send_goal("Hello! My name is Tinker!")

    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()