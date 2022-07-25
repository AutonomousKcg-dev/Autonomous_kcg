// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_H_
#define ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Friction in the package additional_msgs.
typedef struct additional_msgs__msg__Friction
{
  float value;
} additional_msgs__msg__Friction;

// Struct for a sequence of additional_msgs__msg__Friction.
typedef struct additional_msgs__msg__Friction__Sequence
{
  additional_msgs__msg__Friction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} additional_msgs__msg__Friction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__STRUCT_H_
