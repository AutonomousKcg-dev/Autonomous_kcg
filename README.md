## Autonomous control a vehicle in Cognata simulation

first, make sure to source ros2 in each terminal

### How to run the joy_node subscriber

1. cd to ROS2Sample/src
2. open a new terminal
3. run the next command: 
```ruby
ros2 run joy joy_node
```


### How to run the python Publisher

make sure the pkg -pyhton_publisher- is built

1. cd to ROS2Sample/src
2. open a new terminal
3. run the next command:
```ruby
source install/setup.bash
```
4. run the next command:
```ruby
ros2 run python_publisher publisher
```


### How to control the wheel from the Keyboard

1. cd to AlonBarak-Joy/ros_ws
2. run the next command:
```ruby
source install/setup.bash
```
3. run the next command:
```ruby
ros2 run ros_g29_force_feedback g29_force_feedback
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


### How to start the Cognata station-simulation

1. cd to cognataStation

2. run the next command:
```ruby
./CognataStation-2022.1.4.AppImage
```
3. goto Scenarios
4. quick start try1_now
5. Choose "shovaltry" in Ego car sensors preset 
6. goto Summary
7. Click Generate 



### How to run the Cognata linked-code

1. cd to ROS2Sample
2. run the next command:
```ruby
source install/setup.bash
```
3. run the next command:
```ruby
ros2 run cognata_sdk_ros2 ROS2SDK 10.2.2.57 3056
```



### How to run the ACC 

make sure the pkg -pyhton_publisher- is built

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





