// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_

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
// Member 'modules'
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__struct.h"

// Struct defined in msg/PathChangeModuleArray in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__msg__PathChangeModuleArray
{
  std_msgs__msg__Header header;
  autoware_auto_planning_msgs__msg__PathChangeModuleId__Sequence modules;
} autoware_auto_planning_msgs__msg__PathChangeModuleArray;

// Struct for a sequence of autoware_auto_planning_msgs__msg__PathChangeModuleArray.
typedef struct autoware_auto_planning_msgs__msg__PathChangeModuleArray__Sequence
{
  autoware_auto_planning_msgs__msg__PathChangeModuleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__PathChangeModuleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_CHANGE_MODULE_ARRAY__STRUCT_H_
