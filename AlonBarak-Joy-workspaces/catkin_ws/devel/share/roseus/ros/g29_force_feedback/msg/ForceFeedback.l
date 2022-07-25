;; Auto-generated. Do not edit!


(when (boundp 'g29_force_feedback::ForceFeedback)
  (if (not (find-package "G29_FORCE_FEEDBACK"))
    (make-package "G29_FORCE_FEEDBACK"))
  (shadow 'ForceFeedback (find-package "G29_FORCE_FEEDBACK")))
(unless (find-package "G29_FORCE_FEEDBACK::FORCEFEEDBACK")
  (make-package "G29_FORCE_FEEDBACK::FORCEFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ForceFeedback.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass g29_force_feedback::ForceFeedback
  :super ros::object
  :slots (_header _position _torque ))

(defmethod g29_force_feedback::ForceFeedback
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:position __position) 0.0)
    ((:torque __torque) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _position (float __position))
   (setq _torque (float __torque))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:position
   (&optional __position)
   (if __position (setq _position __position)) _position)
  (:torque
   (&optional __torque)
   (if __torque (setq _torque __torque)) _torque)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _position
    4
    ;; float32 _torque
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _position
       (sys::poke _position (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _torque
       (sys::poke _torque (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _position
     (setq _position (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _torque
     (setq _torque (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get g29_force_feedback::ForceFeedback :md5sum-) "e090eb9eec6a6e3a1658541a33681145")
(setf (get g29_force_feedback::ForceFeedback :datatype-) "g29_force_feedback/ForceFeedback")
(setf (get g29_force_feedback::ForceFeedback :definition-)
      "std_msgs/Header header
float32 position
float32 torque

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

")



(provide :g29_force_feedback/ForceFeedback "e090eb9eec6a6e3a1658541a33681145")


