# gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch azure_kinect_ros_driver driver.launch.py"

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 launch realsense2_camera rs_launch.py align_depth.enable:=true depth_module.profile:=848x480x30 rgb_camera.profile:=848x480x30"

sleep 10

gnome-terminal --tab -- zsh -c ". install/setup.zsh; ros2 run object_detection service"

