## Autonomous control a vehicle in Cognata simulation

MAKE SURE TO SOURCE ROS2 IN EACH TERMINAL

### How to run the joy_node subscriber

Open a new terminal
```ruby
$ ros2 run joy joy_node

```

### How to control the wheel from the Keyboard

Open a new terminal
```ruby
$ cd AlonBarak-Joy_ws/ros2_ws
$ source install/setup.bash
$ ros2 run ros_g29_force_feedback g29_force_feedback
```

4. open a new terminal
5. cd to AlonBarak-dev/ros_ws
6. run the next command:
```ruby
source install/setup.bash
```
7. cd to src/ros-g29-force-feedback/script
8. run the next command:
```ruby
python3 talker_shovalsus.py
```


### How to run the python Publisher

MAKE SURE THE PACKAGE 'python_publisher' IS BUILT
#### Note: if usage is at the lab CPU - $ cd copy/

Open a new terminal
```ruby
$ cd ROS2Sample
$ source install/setup.bash
$ cd .. && cd python_publisher_ws/python_publisher
$ source install/setup.bash
$ ros2 run python_publisher publisher
```



### How to start the Cognata station-simulation

1. Open a new terminal
```ruby
$ cd cognataStation
$ ./CognataStation-2022.1.4.AppImage
```
2. Go to Scenarios
3. Quick start try1_now
4. Choose "shovaltry" in Ego car sensors preset 
5. Go to Summary
6. Click Generate 



### How to run the Cognata linked-code

Open a new terminal
#### Note: if usage is at the lab CPU - $ cd copy/

```ruby
$ cd to ROS2Sample
$ source install/setup.bash
$ ros2 run cognata_sdk_ros2 ROS2SDK 10.2.2.57 3056
```



### How to run the ACC 

make sure the pkg -pyhton_publisher- is built
#### Note: if usage is at the lab CPU - $ cd copy/

1. cd to ROS2Sample/src
2. open a new terminal
3. run the next command:
```ruby
colcon build
```
3. run the next command:
```ruby
source install/setup.bash
```
5. run the next command:
```ruby
ros2 run python_publisher acc
```





