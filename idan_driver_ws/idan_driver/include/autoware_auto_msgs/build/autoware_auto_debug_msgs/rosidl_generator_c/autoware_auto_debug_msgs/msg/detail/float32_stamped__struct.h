// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_debug_msgs:msg/Float32Stamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__STRUCT_H_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__STRUCT_H_

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

// Struct defined in msg/Float32Stamped in the package autoware_auto_debug_msgs.
typedef struct autoware_auto_debug_msgs__msg__Float32Stamped
{
  builtin_interfaces__msg__Time stamp;
  float data;
} autoware_auto_debug_msgs__msg__Float32Stamped;

// Struct for a sequence of autoware_auto_debug_msgs__msg__Float32Stamped.
typedef struct autoware_auto_debug_msgs__msg__Float32Stamped__Sequence
{
  autoware_auto_debug_msgs__msg__Float32Stamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_debug_msgs__msg__Float32Stamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__FLOAT32_STAMPED__STRUCT_H_
