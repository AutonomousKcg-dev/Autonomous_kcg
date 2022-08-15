// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_g29_force_feedback:msg/ForceFeedback.idl
// generated code does not contain a copyright notice

#ifndef ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_H_
#define ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ForceFeedback in the package ros_g29_force_feedback.
typedef struct ros_g29_force_feedback__msg__ForceFeedback
{
  std_msgs__msg__Header header;
  float position;
  float torque;
} ros_g29_force_feedback__msg__ForceFeedback;

// Struct for a sequence of ros_g29_force_feedback__msg__ForceFeedback.
typedef struct ros_g29_force_feedback__msg__ForceFeedback__Sequence
{
  ros_g29_force_feedback__msg__ForceFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_g29_force_feedback__msg__ForceFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_G29_FORCE_FEEDBACK__MSG__DETAIL__FORCE_FEEDBACK__STRUCT_H_
