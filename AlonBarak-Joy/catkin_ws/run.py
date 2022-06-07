from multiprocessing import Process
import os
import subprocess

subprocess.run("roscore")
subprocess.run("rosrun g29_force_feedback  g29_force_feedback_node --ros-args --params-file /catkin_ws/src/ros_g29_force_feedback/config/g29.yaml")
subprocess.run("rostopic pub /ff_target g29_force_feedback/ForceFeedback \"{header: {}, position: 0.4, torque: 0.5}\"")
os.system("source devel/setup.bash")
os.system("python3 AlonBarak-Joy/catkin_ws/src/ros_g29_force_feedback/examples/talker_shoval.py")