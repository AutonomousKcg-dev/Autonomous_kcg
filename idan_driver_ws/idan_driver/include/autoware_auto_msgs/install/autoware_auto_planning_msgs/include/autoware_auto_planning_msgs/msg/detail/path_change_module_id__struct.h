// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NONE'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__NONE = 0
};

/// Constant 'AVOIDANCE'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__AVOIDANCE = 1
};

/// Constant 'LANE_CHANGE'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__LANE_CHANGE = 2
};

/// Constant 'FORCE_LANE_CHANGE'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__FORCE_LANE_CHANGE = 3
};

/// Constant 'PULL_OVER'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__PULL_OVER = 4
};

/// Constant 'PULL_OUT'.
enum
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId__PULL_OUT = 5
};

// Struct defined in msg/PathChangeModuleId in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__msg__PathChangeModuleId
{
  uint8_t type;
} autoware_auto_planning_msgs__msg__PathChangeModuleId;

// Struct for a sequence of autoware_auto_planning_msgs__msg__PathChangeModuleId.
typedef struct autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence
{
  autoware_auto_planning_msgs__msg__PathChangeModuleId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ID__STRUCT_H_
