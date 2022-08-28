// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_boundary'
// Member 'right_boundary'
#include "tracked_lane_msgs/msg/detail/boundary__struct.h"

// Struct defined in msg/Lane in the package tracked_lane_msgs.
typedef struct tracked_lane_msgs__msg__Lane
{
  tracked_lane_msgs__msg__Boundary left_boundary;
  tracked_lane_msgs__msg__Boundary right_boundary;
} tracked_lane_msgs__msg__Lane;

// Struct for a sequence of tracked_lane_msgs__msg__Lane.
typedef struct tracked_lane_msgs__msg__Lane__Sequence
{
  tracked_lane_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_lane_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE__STRUCT_H_
