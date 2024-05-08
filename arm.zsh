# gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch ur_robot_driver ur_control.launch.py ur_type:=ur5 robot_ip:=192.168.1.128 launch_rviz:=true runtime_config_package:=tinker_description description_package:=tinker_description description_file:=tinker_arm_bringup.urdf.xacro tf_prefix:="ur_" "

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_moveit arm_moveit.launch.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; sudo chmod 777 /dev/ttyUSB0; ros2 run robotiq_control gripper"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 run sound_play soundplay_node.py"

