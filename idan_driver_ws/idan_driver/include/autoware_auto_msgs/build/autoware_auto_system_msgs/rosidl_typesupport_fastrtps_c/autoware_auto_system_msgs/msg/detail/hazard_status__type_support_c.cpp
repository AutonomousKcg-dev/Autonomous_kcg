// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/hazard_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_system_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.h"
#include "autoware_auto_system_msgs/msg/detail/hazard_status__functions.h"
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

#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"  // diag_latent_fault, diag_no_fault, diag_safe_fault, diag_single_point_fault

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
size_t get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
size_t max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus)();


using _HazardStatus__ros_msg_type = autoware_auto_system_msgs__msg__HazardStatus;

static bool _HazardStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HazardStatus__ros_msg_type * ros_message = static_cast<const _HazardStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: level
  {
    cdr << ros_message->level;
  }

  // Field name: emergency
  {
    cdr << (ros_message->emergency ? true : false);
  }

  // Field name: emergency_holding
  {
    cdr << (ros_message->emergency_holding ? true : false);
  }

  // Field name: diag_no_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->diag_no_fault.size;
    auto array_ptr = ros_message->diag_no_fault.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: diag_safe_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->diag_safe_fault.size;
    auto array_ptr = ros_message->diag_safe_fault.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: diag_latent_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->diag_latent_fault.size;
    auto array_ptr = ros_message->diag_latent_fault.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: diag_single_point_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    size_t size = ros_message->diag_single_point_fault.size;
    auto array_ptr = ros_message->diag_single_point_fault.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _HazardStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HazardStatus__ros_msg_type * ros_message = static_cast<_HazardStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: level
  {
    cdr >> ros_message->level;
  }

  // Field name: emergency
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency = tmp ? true : false;
  }

  // Field name: emergency_holding
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_holding = tmp ? true : false;
  }

  // Field name: diag_no_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diag_no_fault.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->diag_no_fault);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->diag_no_fault, size)) {
      return "failed to create array for field 'diag_no_fault'";
    }
    auto array_ptr = ros_message->diag_no_fault.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: diag_safe_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diag_safe_fault.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->diag_safe_fault);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->diag_safe_fault, size)) {
      return "failed to create array for field 'diag_safe_fault'";
    }
    auto array_ptr = ros_message->diag_safe_fault.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: diag_latent_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diag_latent_fault.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->diag_latent_fault);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->diag_latent_fault, size)) {
      return "failed to create array for field 'diag_latent_fault'";
    }
    auto array_ptr = ros_message->diag_latent_fault.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: diag_single_point_fault
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, DiagnosticStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->diag_single_point_fault.data) {
      diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&ros_message->diag_single_point_fault);
    }
    if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&ros_message->diag_single_point_fault, size)) {
      return "failed to create array for field 'diag_single_point_fault'";
    }
    auto array_ptr = ros_message->diag_single_point_fault.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t get_serialized_size_autoware_auto_system_msgs__msg__HazardStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HazardStatus__ros_msg_type * ros_message = static_cast<const _HazardStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name level
  {
    size_t item_size = sizeof(ros_message->level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency
  {
    size_t item_size = sizeof(ros_message->emergency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_holding
  {
    size_t item_size = sizeof(ros_message->emergency_holding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_no_fault
  {
    size_t array_size = ros_message->diag_no_fault.size;
    auto array_ptr = ros_message->diag_no_fault.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name diag_safe_fault
  {
    size_t array_size = ros_message->diag_safe_fault.size;
    auto array_ptr = ros_message->diag_safe_fault.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name diag_latent_fault
  {
    size_t array_size = ros_message->diag_latent_fault.size;
    auto array_ptr = ros_message->diag_latent_fault.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name diag_single_point_fault
  {
    size_t array_size = ros_message->diag_single_point_fault.size;
    auto array_ptr = ros_message->diag_single_point_fault.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HazardStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_system_msgs__msg__HazardStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_system_msgs
size_t max_serialized_size_autoware_auto_system_msgs__msg__HazardStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_holding
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: diag_no_fault
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        full_bounded, current_alignment);
    }
  }
  // member: diag_safe_fault
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        full_bounded, current_alignment);
    }
  }
  // member: diag_latent_fault
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        full_bounded, current_alignment);
    }
  }
  // member: diag_single_point_fault
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_diagnostic_msgs__msg__DiagnosticStatus(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HazardStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_system_msgs__msg__HazardStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HazardStatus = {
  "autoware_auto_system_msgs::msg",
  "HazardStatus",
  _HazardStatus__cdr_serialize,
  _HazardStatus__cdr_deserialize,
  _HazardStatus__get_serialized_size,
  _HazardStatus__max_serialized_size
};

static rosidl_message_type_support_t _HazardStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HazardStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_system_msgs, msg, HazardStatus)() {
  return &_HazardStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
