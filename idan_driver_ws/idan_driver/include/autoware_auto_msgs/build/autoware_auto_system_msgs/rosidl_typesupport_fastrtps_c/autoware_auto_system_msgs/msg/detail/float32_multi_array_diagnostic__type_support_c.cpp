// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.h"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__functions.h"
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

#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__functions.h"  // diag_header
#include "std_msgs/msg/detail/float32_multi_array__functions.h"  // diag_array

// forward declare type support functions
size_t get_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
size_t get_serialized_size_std_msgs__msg__Float32MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
size_t max_serialized_size_std_msgs__msg__Float32MultiArray(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32MultiArray)();


using _Float32MultiArrayDiagnostic__ros_msg_type = autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic;

static bool _Float32MultiArrayDiagnostic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Float32MultiArrayDiagnostic__ros_msg_type * ros_message = static_cast<const _Float32MultiArrayDiagnostic__ros_msg_type *>(untyped_ros_message);
  // Field name: diag_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->diag_header, cdr))
    {
      return false;
    }
  }

  // Field name: diag_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32MultiArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->diag_array, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Float32MultiArrayDiagnostic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Float32MultiArrayDiagnostic__ros_msg_type * ros_message = static_cast<_Float32MultiArrayDiagnostic__ros_msg_type *>(untyped_ros_message);
  // Field name: diag_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, DiagnosticHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->diag_header))
    {
      return false;
    }
  }

  // Field name: diag_array
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32MultiArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->diag_array))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t get_serialized_size_autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Float32MultiArrayDiagnostic__ros_msg_type * ros_message = static_cast<const _Float32MultiArrayDiagnostic__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name diag_header

  current_alignment += get_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
    &(ros_message->diag_header), current_alignment);
  // field.name diag_array

  current_alignment += get_serialized_size_std_msgs__msg__Float32MultiArray(
    &(ros_message->diag_array), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Float32MultiArrayDiagnostic__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t max_serialized_size_autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: diag_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_system_msgs__msg__DiagnosticHeader(
        full_bounded, current_alignment);
    }
  }
  // member: diag_array
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32MultiArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Float32MultiArrayDiagnostic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Float32MultiArrayDiagnostic = {
  "autoware_auto_system_msgs::msg",
  "Float32MultiArrayDiagnostic",
  _Float32MultiArrayDiagnostic__cdr_serialize,
  _Float32MultiArrayDiagnostic__cdr_deserialize,
  _Float32MultiArrayDiagnostic__get_serialized_size,
  _Float32MultiArrayDiagnostic__max_serialized_size
};

static rosidl_message_type_support_t _Float32MultiArrayDiagnostic__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Float32MultiArrayDiagnostic,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, Float32MultiArrayDiagnostic)() {
  return &_Float32MultiArrayDiagnostic__type_support;
}

#if defined(__cplusplus)
}
#endif
