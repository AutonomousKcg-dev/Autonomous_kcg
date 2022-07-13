In order to run the g29 nodes (publisher and subsriber) do the follow:

topic name : /ff_target
Type: g29_force_feedback/ForceFeedback

subscriber:

1. download the folder catkin_ws from the drive
	connect the wheel to the computer.
	run: $ cat /proc/bus/input/devices.
	look for the wheel and copy its event number (e.g event25).
	open the AlonBarak-Joy/catkin_ws/src/ros_g29_force_feedback/src/g29_force_feedback.cpp file
	change the m_device_name variable to the new event number. (e.g "dev/input/event25")
	
2. run: $ catkin_make
3. add user to the input group: $ sudo gpasswd -a $USER input
4. run: $ roscore
5. cd to the catkin_ws folder
6. run: $ source devel/setup.bash
7. run: $ rosrun g29_force_feedback  g29_force_feedback_node --ros-args --params-file /catkin_ws/src/ros_g29_force_feedback/config/g29.yaml


publisher:	# make sure that the subscriber is on

1. run: $ source devel/set.bash 
2. run: $ rostopic pub /ff_target g29_force_feedback/ForceFeedback "{header: {}, position: 0.4, torque: 0.5}"


Info:

position:
Tells ROS where we want our wheel to spin, range (-1,1)
-1 := Left
1 := Right

torque:
Tells ROS how hard to spin the wheel to the position.
Range (0.2,1.0)
0.2 := Soft
1.0 := Hard


Python Publisher:	# make sure that the subscriber is on

1. Open new terminal
2. cd to AlonBarak-joy/catkin_ws folder
3. source devel/setup.bash
4. cd to src/ros_g29_force_feedback/examples
5. Make sure talker.py is there
6. run: $ python3 talker.py
7. enter position (-1,1)
8. enter torque (0.2, 1.0)
9. watch the wheel spin and enjoy :)
10. loop as much as you like
