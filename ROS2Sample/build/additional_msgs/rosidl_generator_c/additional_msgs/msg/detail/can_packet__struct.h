// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_
#define ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_

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

// Struct defined in msg/CanPacket in the package additional_msgs.
typedef struct additional_msgs__msg__CanPacket
{
  std_msgs__msg__Header header;
  uint32_t count;
  uint32_t id;
  uint8_t len;
  uint8_t dat[8];
  uint16_t flag;
  uint32_t time;
} additional_msgs__msg__CanPacket;

// Struct for a sequence of additional_msgs__msg__CanPacket.
typedef struct additional_msgs__msg__CanPacket__Sequence
{
  additional_msgs__msg__CanPacket * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} additional_msgs__msg__CanPacket__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__CAN_PACKET__STRUCT_H_
