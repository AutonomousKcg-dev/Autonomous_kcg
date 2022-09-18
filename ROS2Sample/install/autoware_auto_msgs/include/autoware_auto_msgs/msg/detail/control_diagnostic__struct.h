// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_H_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_H_

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
#include "autoware_auto_msgs/msg/detail/diagnostic_header__struct.h"
// Member 'trajectory_source'
// Member 'pose_source'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// trajectory_source
enum
{
  autoware_auto_msgs__msg__ControlDiagnostic__trajectory_source__MAX_STRING_SIZE = 256
};
// pose_source
enum
{
  autoware_auto_msgs__msg__ControlDiagnostic__pose_source__MAX_STRING_SIZE = 256
};

// Struct defined in msg/ControlDiagnostic in the package autoware_auto_msgs.
typedef struct autoware_auto_msgs__msg__ControlDiagnostic
{
  autoware_auto_msgs__msg__DiagnosticHeader diag_header;
  bool new_trajectory;
  rosidl_runtime_c__String trajectory_source;
  rosidl_runtime_c__String pose_source;
  float lateral_error_m;
  float longitudinal_error_m;
  float velocity_error_mps;
  float acceleration_error_mps2;
  float yaw_error_rad;
  float yaw_rate_error_rps;
} autoware_auto_msgs__msg__ControlDiagnostic;

// Struct for a sequence of autoware_auto_msgs__msg__ControlDiagnostic.
typedef struct autoware_auto_msgs__msg__ControlDiagnostic__Sequence
{
  autoware_auto_msgs__msg__ControlDiagnostic * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_msgs__msg__ControlDiagnostic__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__CONTROL_DIAGNOSTIC__STRUCT_H_
