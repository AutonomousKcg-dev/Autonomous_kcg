// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__struct.hpp"

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
namespace autoware_auto_system_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autoware_auto_system_msgs::msg::DiagnosticHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autoware_auto_system_msgs::msg::DiagnosticHeader &);
size_t get_serialized_size(
  const autoware_auto_system_msgs::msg::DiagnosticHeader &,
  size_t current_alignment);
size_t
max_serialized_size_DiagnosticHeader(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autoware_auto_system_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float32MultiArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float32MultiArray &);
size_t get_serialized_size(
  const std_msgs::msg::Float32MultiArray &,
  size_t current_alignment);
size_t
max_serialized_size_Float32MultiArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
cdr_serialize(
  const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: diag_header
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.diag_header,
    cdr);
  // Member: diag_array
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.diag_array,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & ros_message)
{
  // Member: diag_header
  autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.diag_header);

  // Member: diag_array
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.diag_array);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
get_serialized_size(
  const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: diag_header

  current_alignment +=
    autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.diag_header, current_alignment);
  // Member: diag_array

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.diag_array, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_system_msgs
max_serialized_size_Float32MultiArrayDiagnostic(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: diag_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DiagnosticHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: diag_array
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32MultiArray(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Float32MultiArrayDiagnostic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Float32MultiArrayDiagnostic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Float32MultiArrayDiagnostic__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Float32MultiArrayDiagnostic__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Float32MultiArrayDiagnostic(full_bounded, 0);
}

static message_type_support_callbacks_t _Float32MultiArrayDiagnostic__callbacks = {
  "autoware_auto_system_msgs::msg",
  "Float32MultiArrayDiagnostic",
  _Float32MultiArrayDiagnostic__cdr_serialize,
  _Float32MultiArrayDiagnostic__cdr_deserialize,
  _Float32MultiArrayDiagnostic__get_serialized_size,
  _Float32MultiArrayDiagnostic__max_serialized_size
};

static rosidl_message_type_support_t _Float32MultiArrayDiagnostic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Float32MultiArrayDiagnostic__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_auto_system_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_system_msgs::msg::Float32MultiArrayDiagnostic>()
{
  return &autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::_Float32MultiArrayDiagnostic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_system_msgs, msg, Float32MultiArrayDiagnostic)() {
  return &autoware_auto_system_msgs::msg::typesupport_fastrtps_cpp::_Float32MultiArrayDiagnostic__handle;
}

#ifdef __cplusplus
}
#endif
