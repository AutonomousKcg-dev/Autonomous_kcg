source /opt/ros/foxy/setup.bash
source Deliverables/colcon_workspace/install/setup.bash
ros2 bag play Deliverables/rosbag2_2022_07_04-17_41_29/rosbag2_2022_07_04-17_41_29_0.db3 $1 $2 $3
