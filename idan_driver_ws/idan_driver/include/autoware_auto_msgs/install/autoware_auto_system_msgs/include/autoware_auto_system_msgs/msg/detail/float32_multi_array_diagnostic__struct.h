// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_H_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'diag_header'
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__struct.h"
// Member 'diag_array'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

// Struct defined in msg/Float32MultiArrayDiagnostic in the package autoware_auto_system_msgs.
typedef struct autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic
{
  autoware_auto_system_msgs__msg__DiagnosticHeader diag_header;
  std_msgs__msg__Float32MultiArray diag_array;
} autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic;

// Struct for a sequence of autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic.
typedef struct autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence
{
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__FLOAT32_MULTI_ARRAY_DIAGNOSTIC__STRUCT_H_
