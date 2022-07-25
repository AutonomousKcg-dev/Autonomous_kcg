# This message defines an object that has been detected and is being tracked accross multiple frames.
# Units must be meters for position, meters per second for velocity, radians per second for angular velocity.
# The field object_type must be set and interpreted using tracked_object_msgs/ObjectTypes.
# The field uuid must always be set with a unique value for each object.
uint32                     uuid                         # UUID for tracking an object across multiple messages
builtin_interfaces/Time    stamp                        # Timestamp associated with this message.
uint32                     object_type                  # Type identifier of object (see TrimbleObjectTypes.msg)
geometry_msgs/Pose         object_pose_m_quat           # Transform from the body frame of object to a base frame
string                     base_frame_id                # Name of the base frame
geometry_msgs/Twist        object_velocity_mps_radps    # 6 dof velocity of the object in the object (obj) frame
geometry_msgs/Vector3      box_dimensions_m             # Bounding box dimensions along object body x- y- and z-axis
float32                    confidence                   # Confidence
string                     metadata                     # Arbitrary meta data
