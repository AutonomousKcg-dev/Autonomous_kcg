// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from additional_msgs:msg/TargetPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_H_
#define ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_H_

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

// Struct defined in msg/TargetPoint in the package additional_msgs.
typedef struct additional_msgs__msg__TargetPoint
{
  std_msgs__msg__Header header;
  float angle;
  float distance;
  float velocity;
} additional_msgs__msg__TargetPoint;

// Struct for a sequence of additional_msgs__msg__TargetPoint.
typedef struct additional_msgs__msg__TargetPoint__Sequence
{
  additional_msgs__msg__TargetPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} additional_msgs__msg__TargetPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__TARGET_POINT__STRUCT_H_
