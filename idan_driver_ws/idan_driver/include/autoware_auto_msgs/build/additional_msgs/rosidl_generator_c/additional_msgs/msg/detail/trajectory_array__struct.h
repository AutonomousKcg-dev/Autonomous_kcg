// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from additional_msgs:msg/TrajectoryArray.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_
#define ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CAPACITY'.
enum
{
  additional_msgs__msg__TrajectoryArray__CAPACITY = 100ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'trajectories'
#include "autoware_auto_msgs/msg/detail/trajectory__struct.h"

// constants for array fields with an upper bound
// trajectories
enum
{
  additional_msgs__msg__TrajectoryArray__trajectories__MAX_SIZE = 100
};

// Struct defined in msg/TrajectoryArray in the package additional_msgs.
typedef struct additional_msgs__msg__TrajectoryArray
{
  std_msgs__msg__Header header;
  autoware_auto_msgs__msg__Trajectory__Sequence trajectories;
} additional_msgs__msg__TrajectoryArray;

// Struct for a sequence of additional_msgs__msg__TrajectoryArray.
typedef struct additional_msgs__msg__TrajectoryArray__Sequence
{
  additional_msgs__msg__TrajectoryArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} additional_msgs__msg__TrajectoryArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TRAJECTORY_ARRAY__STRUCT_H_
