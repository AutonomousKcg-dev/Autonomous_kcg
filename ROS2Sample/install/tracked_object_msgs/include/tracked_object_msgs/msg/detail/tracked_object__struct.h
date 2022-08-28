// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'object_pose_m_quat'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'base_frame_id'
// Member 'metadata'
#include "rosidl_runtime_c/string.h"
// Member 'object_velocity_mps_radps'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'box_dimensions_m'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/TrackedObject in the package tracked_object_msgs.
typedef struct tracked_object_msgs__msg__TrackedObject
{
  uint32_t uuid;
  builtin_interfaces__msg__Time stamp;
  uint32_t object_type;
  geometry_msgs__msg__Pose object_pose_m_quat;
  rosidl_runtime_c__String base_frame_id;
  geometry_msgs__msg__Twist object_velocity_mps_radps;
  geometry_msgs__msg__Vector3 box_dimensions_m;
  float confidence;
  rosidl_runtime_c__String metadata;
} tracked_object_msgs__msg__TrackedObject;

// Struct for a sequence of tracked_object_msgs__msg__TrackedObject.
typedef struct tracked_object_msgs__msg__TrackedObject__Sequence
{
  tracked_object_msgs__msg__TrackedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_object_msgs__msg__TrackedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT__STRUCT_H_
