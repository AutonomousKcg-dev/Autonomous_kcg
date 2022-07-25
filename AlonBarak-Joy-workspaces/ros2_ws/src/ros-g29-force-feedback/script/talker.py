#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
import random
from std_msgs.msg import String
from g29_force_feedback.msg import ForceFeedback
master_deg = 1/900.0

class Talker(Node):
    def __init__(self):
        super().__init__("talker")
        self.temperature_publisher_ = self.create_publisher(
            ForceFeedback, "ff_target", 10)
            
    def publish_temperature(self):
	g29msg = ForceFeedback()
	real_position = input("Enter Degree:")
	real_position = float(real_position) * master_deg
	g29msg.position = float(real_position)
	g29msg.torque = float(input("Enter Torque:"))
	self.temperature_publisher_.publish(g29msg)
        
def main(args=None):

    rclpy.init(args=args)
    node = Talker()
    rclpy.spin(node)
    rclpy.shutdown()
    
    
if __name__ == "__main__":
    main()
