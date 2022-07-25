#!/usr/bin/env python                                                                                                                 
import rospy

from std_msgs.msg import String
from g29_force_feedback.msg import ForceFeedback
master_deg = 1/900.0

def talker():
    rospy.init_node('talker')
    pub = rospy.Publisher('ff_target', ForceFeedback, queue_size=20)	# publish to the ff_target topic


    r = rospy.Rate(0.5)	# in Hz
    while not rospy.is_shutdown():                                                                                                
      g29msg = ForceFeedback()
      real_position = input("Enter Degree:")
      real_position = float(real_position) * master_deg
      g29msg.position = float(real_position)
      g29msg.torque = float(input("Enter Torque:"))
      rospy.loginfo(g29msg)
      pub.publish(g29msg)
      #break                                                                                                                          
      r.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException: pass
