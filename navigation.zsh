gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_chassis_bringup chassis_bringup.launch.py"

sleep 10

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch livox_ros_driver2 laserscan_MID360_launch.py"

sleep 5

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_nav_bringup tinker_navigation_local.launch.py"

sleep 5

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch tinker_nav_bringup tinker_navigation_bringup_cmd.launch.py"

