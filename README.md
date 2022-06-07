# Cognata SDK sample Ros2 - v0.14.0
=============================

# Prequesits:
=============================
Prequesits:
Ubuntu 18.04
Cognata SDK version - v1.18.0
Ros Dashing desktop distribution installed
Colcon build tool installed

# Building:
=============================
1 - Verify you have sourced you ROS installation in your current terminal - 
    (run "source /opt/ros/dashing/install.bash")
2 - Extract package and copy resulting src folder into a new folder that will be    
    your workspace.
3 - Run "colcon build" in that folder.


# Upgrading:
=============================
When upgrading, if you do not wish to replace the whole sample (for example; 
if you have developed your own version and do not mind not importing new examples 
of introduced functionality), you do not need to replace the whole project, you
may simpely do the following:
1 - Copy the cognataSDKLibs folder from src/cognata_sdk_ros2/libs in the new 
    archive to the same path in your work space.
2 - The CognataSDK files are no longer supposed to be in /usr/lib, so please make 
sure the files in src/cognata_sdk_ros2/libs/cognataSDKLibs are no longer in your 
/usr/lib folder.


# Running:
=============================
In a second terminal:
Source your package (inside your workspace run "source install/setup.bash")
Run the sample with "ros2 run cognata_sdk_ros2 ROS2SDK 10.2.2.57 3056"
