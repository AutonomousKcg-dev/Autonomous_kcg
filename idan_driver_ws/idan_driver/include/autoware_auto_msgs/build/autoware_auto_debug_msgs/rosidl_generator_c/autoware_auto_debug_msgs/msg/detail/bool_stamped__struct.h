// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_debug_msgs:msg/BoolStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_H_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_H_

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

// Struct defined in msg/BoolStamped in the package autoware_auto_debug_msgs.
typedef struct autoware_auto_debug_msgs__msg__BoolStamped
{
  builtin_interfaces__msg__Time stamp;
  bool data;
} autoware_auto_debug_msgs__msg__BoolStamped;

// Struct for a sequence of autoware_auto_debug_msgs__msg__BoolStamped.
typedef struct autoware_auto_debug_msgs__msg__BoolStamped__Sequence
{
  autoware_auto_debug_msgs__msg__BoolStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_debug_msgs__msg__BoolStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__BOOL_STAMPED__STRUCT_H_
