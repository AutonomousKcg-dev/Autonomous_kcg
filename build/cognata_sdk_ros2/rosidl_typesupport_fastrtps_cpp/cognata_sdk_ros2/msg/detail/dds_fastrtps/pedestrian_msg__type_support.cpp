// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace cognata_sdk_ros2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cognata_sdk_ros2::msg::ObjectDescription &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::ObjectDescription &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::ObjectDescription &,
  size_t current_alignment);
size_t
max_serialized_size_ObjectDescription(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cognata_sdk_ros2

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace cognata_sdk_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_serialize(
  const cognata_sdk_ros2::msg::PedestrianMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: description
  cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.description,
    cdr);
  // Member: pedestrian_velocity
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pedestrian_velocity,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cognata_sdk_ros2::msg::PedestrianMsg & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: description
  cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.description);

  // Member: pedestrian_velocity
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pedestrian_velocity);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
get_serialized_size(
  const cognata_sdk_ros2::msg::PedestrianMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: description

  current_alignment +=
    cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.description, current_alignment);
  // Member: pedestrian_velocity

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pedestrian_velocity, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
max_serialized_size_PedestrianMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: description
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectDescription(
        full_bounded, current_alignment);
    }
  }

  // Member: pedestrian_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PedestrianMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::PedestrianMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PedestrianMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cognata_sdk_ros2::msg::PedestrianMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PedestrianMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::PedestrianMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PedestrianMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PedestrianMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _PedestrianMsg__callbacks = {
  "cognata_sdk_ros2::msg",
  "PedestrianMsg",
  _PedestrianMsg__cdr_serialize,
  _PedestrianMsg__cdr_deserialize,
  _PedestrianMsg__get_serialized_size,
  _PedestrianMsg__max_serialized_size
};

static rosidl_message_type_support_t _PedestrianMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PedestrianMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cognata_sdk_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<cognata_sdk_ros2::msg::PedestrianMsg>()
{
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_PedestrianMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cognata_sdk_ros2, msg, PedestrianMsg)() {
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_PedestrianMsg__handle;
}

#ifdef __cplusplus
}
#endif
