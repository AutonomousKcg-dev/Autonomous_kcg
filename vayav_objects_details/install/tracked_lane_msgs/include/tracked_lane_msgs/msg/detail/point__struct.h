// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_lane_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__POINT__STRUCT_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Point in the package tracked_lane_msgs.
typedef struct tracked_lane_msgs__msg__Point
{
  float u;
  float v;
  float x;
  float y;
  float z;
  float confidence;
  bool valid;
} tracked_lane_msgs__msg__Point;

// Struct for a sequence of tracked_lane_msgs__msg__Point.
typedef struct tracked_lane_msgs__msg__Point__Sequence
{
  tracked_lane_msgs__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_lane_msgs__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__POINT__STRUCT_H_
