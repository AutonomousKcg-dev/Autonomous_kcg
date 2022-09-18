// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_H_
#define TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_H_

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
// Member 'adjacent_left'
// Member 'adjacent_right'
// Member 'ego_lane'
// Member 'road_boundary'
#include "tracked_lane_msgs/msg/detail/lane__struct.h"
// Member 'algo_description'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/LaneResults in the package tracked_lane_msgs.
typedef struct tracked_lane_msgs__msg__LaneResults
{
  std_msgs__msg__Header header;
  tracked_lane_msgs__msg__Lane__Sequence adjacent_left;
  uint32_t num_adjacent_left;
  tracked_lane_msgs__msg__Lane__Sequence adjacent_right;
  uint32_t num_adjacent_right;
  tracked_lane_msgs__msg__Lane ego_lane;
  tracked_lane_msgs__msg__Lane road_boundary;
  int32_t total_number_of_lanes;
  rosidl_runtime_c__String algo_description;
} tracked_lane_msgs__msg__LaneResults;

// Struct for a sequence of tracked_lane_msgs__msg__LaneResults.
typedef struct tracked_lane_msgs__msg__LaneResults__Sequence
{
  tracked_lane_msgs__msg__LaneResults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_lane_msgs__msg__LaneResults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_LANE_MSGS__MSG__DETAIL__LANE_RESULTS__STRUCT_H_
