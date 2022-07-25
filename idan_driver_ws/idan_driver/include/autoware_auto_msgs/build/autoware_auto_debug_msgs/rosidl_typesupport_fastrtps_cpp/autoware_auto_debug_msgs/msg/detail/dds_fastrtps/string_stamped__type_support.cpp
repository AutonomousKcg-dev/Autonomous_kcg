// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_debug_msgs:msg/StringStamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_debug_msgs/msg/detail/string_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_auto_debug_msgs/msg/detail/string_stamped__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace autoware_auto_debug_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_debug_msgs
cdr_serialize(
  const autoware_auto_debug_msgs::msg::StringStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: data
  cdr << ros_message.data;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_debug_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_debug_msgs::msg::StringStamped & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: data
  cdr >> ros_message.data;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_debug_msgs
get_serialized_size(
  const autoware_auto_debug_msgs::msg::StringStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_debug_msgs
max_serialized_size_StringStamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _StringStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_auto_debug_msgs::msg::StringStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StringStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_auto_debug_msgs::msg::StringStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StringStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_auto_debug_msgs::msg::StringStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StringStamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StringStamped(full_bounded, 0);
}

static message_type_support_callbacks_t _StringStamped__callbacks = {
  "autoware_auto_debug_msgs::msg",
  "StringStamped",
  _StringStamped__cdr_serialize,
  _StringStamped__cdr_deserialize,
  _StringStamped__get_serialized_size,
  _StringStamped__max_serialized_size
};

static rosidl_message_type_support_t _StringStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StringStamped__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_auto_debug_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_auto_debug_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_debug_msgs::msg::StringStamped>()
{
  return &autoware_auto_debug_msgs::msg::typesupport_fastrtps_cpp::_StringStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_debug_msgs, msg, StringStamped)() {
  return &autoware_auto_debug_msgs::msg::typesupport_fastrtps_cpp::_StringStamped__handle;
}

#ifdef __cplusplus
}
#endif
