// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tracked_lane_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tracked_lane_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tracked_lane_msgs/msg/detail/lane__struct.h"
#include "tracked_lane_msgs/msg/detail/lane__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tracked_lane_msgs/msg/detail/boundary__functions.h"  // left_boundary, right_boundary

// forward declare type support functions
size_t get_serialized_size_tracked_lane_msgs__msg__Boundary(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tracked_lane_msgs__msg__Boundary(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Boundary)();


using _Lane__ros_msg_type = tracked_lane_msgs__msg__Lane;

static bool _Lane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Lane__ros_msg_type * ros_message = static_cast<const _Lane__ros_msg_type *>(untyped_ros_message);
  // Field name: left_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Boundary
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->left_boundary, cdr))
    {
      return false;
    }
  }

  // Field name: right_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Boundary
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->right_boundary, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Lane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Lane__ros_msg_type * ros_message = static_cast<_Lane__ros_msg_type *>(untyped_ros_message);
  // Field name: left_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Boundary
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->left_boundary))
    {
      return false;
    }
  }

  // Field name: right_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Boundary
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->right_boundary))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_lane_msgs
size_t get_serialized_size_tracked_lane_msgs__msg__Lane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Lane__ros_msg_type * ros_message = static_cast<const _Lane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_boundary

  current_alignment += get_serialized_size_tracked_lane_msgs__msg__Boundary(
    &(ros_message->left_boundary), current_alignment);
  // field.name right_boundary

  current_alignment += get_serialized_size_tracked_lane_msgs__msg__Boundary(
    &(ros_message->right_boundary), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Lane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tracked_lane_msgs__msg__Lane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_lane_msgs
size_t max_serialized_size_tracked_lane_msgs__msg__Lane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_boundary
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Boundary(
        full_bounded, current_alignment);
    }
  }
  // member: right_boundary
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Boundary(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Lane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tracked_lane_msgs__msg__Lane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Lane = {
  "tracked_lane_msgs::msg",
  "Lane",
  _Lane__cdr_serialize,
  _Lane__cdr_deserialize,
  _Lane__get_serialized_size,
  _Lane__max_serialized_size
};

static rosidl_message_type_support_t _Lane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Lane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane)() {
  return &_Lane__type_support;
}

#if defined(__cplusplus)
}
#endif
