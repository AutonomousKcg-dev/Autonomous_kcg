// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_planning_msgs:msg/PathChangeModuleId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__struct.h"
#include "autoware_auto_planning_msgs/msg/detail/path_change_module_id__functions.h"
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


// forward declare type support functions


using _PathChangeModuleId__ros_msg_type = autoware_auto_planning_msgs__msg__PathChangeModuleId;

static bool _PathChangeModuleId__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathChangeModuleId__ros_msg_type * ros_message = static_cast<const _PathChangeModuleId__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr << ros_message->type;
  }

  return true;
}

static bool _PathChangeModuleId__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathChangeModuleId__ros_msg_type * ros_message = static_cast<_PathChangeModuleId__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    cdr >> ros_message->type;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_planning_msgs
size_t get_serialized_size_autoware_auto_planning_msgs__msg__PathChangeModuleId(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathChangeModuleId__ros_msg_type * ros_message = static_cast<const _PathChangeModuleId__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathChangeModuleId__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_planning_msgs__msg__PathChangeModuleId(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_planning_msgs
size_t max_serialized_size_autoware_auto_planning_msgs__msg__PathChangeModuleId(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PathChangeModuleId__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_planning_msgs__msg__PathChangeModuleId(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathChangeModuleId = {
  "autoware_auto_planning_msgs::msg",
  "PathChangeModuleId",
  _PathChangeModuleId__cdr_serialize,
  _PathChangeModuleId__cdr_deserialize,
  _PathChangeModuleId__get_serialized_size,
  _PathChangeModuleId__max_serialized_size
};

static rosidl_message_type_support_t _PathChangeModuleId__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathChangeModuleId,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, msg, PathChangeModuleId)() {
  return &_PathChangeModuleId__type_support;
}

#if defined(__cplusplus)
}
#endif
