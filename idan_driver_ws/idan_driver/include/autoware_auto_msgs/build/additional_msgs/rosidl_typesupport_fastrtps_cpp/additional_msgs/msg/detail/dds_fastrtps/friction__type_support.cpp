// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice
#include "additional_msgs/msg/detail/friction__rosidl_typesupport_fastrtps_cpp.hpp"
#include "additional_msgs/msg/detail/friction__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace additional_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_additional_msgs
cdr_serialize(
  const additional_msgs::msg::Friction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_additional_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  additional_msgs::msg::Friction & ros_message)
{
  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_additional_msgs
get_serialized_size(
  const additional_msgs::msg::Friction & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_additional_msgs
max_serialized_size_Friction(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Friction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const additional_msgs::msg::Friction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Friction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<additional_msgs::msg::Friction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Friction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const additional_msgs::msg::Friction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Friction__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Friction(full_bounded, 0);
}

static message_type_support_callbacks_t _Friction__callbacks = {
  "additional_msgs::msg",
  "Friction",
  _Friction__cdr_serialize,
  _Friction__cdr_deserialize,
  _Friction__get_serialized_size,
  _Friction__max_serialized_size
};

static rosidl_message_type_support_t _Friction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Friction__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace additional_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_additional_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<additional_msgs::msg::Friction>()
{
  return &additional_msgs::msg::typesupport_fastrtps_cpp::_Friction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, additional_msgs, msg, Friction)() {
  return &additional_msgs::msg::typesupport_fastrtps_cpp::_Friction__handle;
}

#ifdef __cplusplus
}
#endif
