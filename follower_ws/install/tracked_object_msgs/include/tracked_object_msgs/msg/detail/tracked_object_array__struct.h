// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_object_msgs:msg/TrackedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_

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
// Member 'tracked_objects'
#include "tracked_object_msgs/msg/detail/tracked_object__struct.h"

// Struct defined in msg/TrackedObjectArray in the package tracked_object_msgs.
typedef struct tracked_object_msgs__msg__TrackedObjectArray
{
  std_msgs__msg__Header header;
  tracked_object_msgs__msg__TrackedObject__Sequence tracked_objects;
} tracked_object_msgs__msg__TrackedObjectArray;

// Struct for a sequence of tracked_object_msgs__msg__TrackedObjectArray.
typedef struct tracked_object_msgs__msg__TrackedObjectArray__Sequence
{
  tracked_object_msgs__msg__TrackedObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_object_msgs__msg__TrackedObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__TRACKED_OBJECT_ARRAY__STRUCT_H_
