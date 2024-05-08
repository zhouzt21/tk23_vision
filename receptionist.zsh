sudo src/tk23_navigation/setupcan.sh

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_bringup tinker_bringup.launch.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 run sound_play soundplay_node.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_moveit arm_moveit.launch.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch realsense2_camera rs_launch.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 run face_recognition_arcface receptionist_face_task"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 run teleop_twist_keyboard teleop_twist_keyboard "

gnome-terminal --tab -- zsh -c "rviz2"