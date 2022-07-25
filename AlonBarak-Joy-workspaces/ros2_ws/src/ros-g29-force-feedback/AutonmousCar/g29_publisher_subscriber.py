#!/usr/bin/env python
import rospy2
from msg._ForceFeedback import ForceFeedback

master_deg = 1 / 900.0


# os.system('ros2 topic pub /ff_target ros_g29_force_feedback/msg/ForceFeedback "{header: {stamp: {sec: 0,
# nanosec: 0}, frame_id: ''}, position: 1.0, torque: 0.8}"')

def talker():
    rospy2.init_node('talker')
    pub = rospy2.Publisher('ff_target', ForceFeedback, queue_size=20)  # publish to the ff_target topic

    r = rospy2.Rate(0.5)  # in Hz
    while not rospy2.is_shutdown():
        g29msg = ForceFeedback()
        try:
            real_position = input("Enter Degree:")
            real_position = float(real_position) * master_deg
            g29msg.position = float(real_position)
            g29msg.torque = float(input("Enter Torque:"))
            rospy2.loginfo("g29msg")
            pub.publish(g29msg)
            # break
            r.sleep()
        except ValueError:
            continue


if __name__ == '__main__':
    try:
        talker()
    except rospy2.ROSInterruptException:
        pass