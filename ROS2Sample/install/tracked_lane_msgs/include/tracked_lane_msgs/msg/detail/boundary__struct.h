// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "tracked_lane_msgs/msg/detail/point__struct.h"

// Struct defined in msg/Boundary in the package tracked_lane_msgs.
typedef struct tracked_lane_msgs__msg__Boundary
{
  tracked_lane_msgs__msg__Point__Sequence points;
  uint32_t num_points;
} tracked_lane_msgs__msg__Boundary;

// Struct for a sequence of tracked_lane_msgs__msg__Boundary.
typedef struct tracked_lane_msgs__msg__Boundary__Sequence
{
  tracked_lane_msgs__msg__Boundary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_lane_msgs__msg__Boundary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__BOUNDARY__STRUCT_H_
