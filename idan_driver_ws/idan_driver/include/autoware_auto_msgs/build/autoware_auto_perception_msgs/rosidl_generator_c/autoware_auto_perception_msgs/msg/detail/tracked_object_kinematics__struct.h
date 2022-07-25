// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__UNAVAILABLE = 0
};

/// Constant 'SIGN_UNKNOWN'.
enum
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__SIGN_UNKNOWN = 1
};

/// Constant 'AVAILABLE'.
enum
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics__AVAILABLE = 2
};

// Include directives for member types
// Member 'centroid_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"
// Member 'acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.h"

// Struct defined in msg/TrackedObjectKinematics in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrackedObjectKinematics
{
  geometry_msgs__msg__Point centroid_position;
  double position_covariance[9];
  geometry_msgs__msg__Quaternion orientation;
  uint8_t orientation_availability;
  geometry_msgs__msg__TwistWithCovariance twist;
  geometry_msgs__msg__AccelWithCovariance acceleration;
  bool is_stationary;
} autoware_auto_perception_msgs__msg__TrackedObjectKinematics;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrackedObjectKinematics.
typedef struct autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence
{
  autoware_auto_perception_msgs__msg__TrackedObjectKinematics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrackedObjectKinematics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__STRUCT_H_
