// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
#define AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dim'
#include "autoware_auto_debug_msgs/msg/detail/multi_array_dimension__struct.h"

// Struct defined in msg/MultiArrayLayout in the package autoware_auto_debug_msgs.
typedef struct autoware_auto_debug_msgs__msg__MultiArrayLayout
{
  autoware_auto_debug_msgs__msg__MultiArrayDimension__Sequence dim;
  uint32_t data_offset;
} autoware_auto_debug_msgs__msg__MultiArrayLayout;

// Struct for a sequence of autoware_auto_debug_msgs__msg__MultiArrayLayout.
typedef struct autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence
{
  autoware_auto_debug_msgs__msg__MultiArrayLayout * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_DEBUG_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__STRUCT_H_
