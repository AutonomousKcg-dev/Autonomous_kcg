// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/Boundary.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/boundary__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tracked_lane_msgs/msg/detail/boundary__struct.hpp"

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
namespace tracked_lane_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tracked_lane_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracked_lane_msgs::msg::Point &);
size_t get_serialized_size(
  const tracked_lane_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tracked_lane_msgs


namespace tracked_lane_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
cdr_serialize(
  const tracked_lane_msgs::msg::Boundary & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: points
  {
    size_t size = ros_message.points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.points[i],
        cdr);
    }
  }
  // Member: num_points
  cdr << ros_message.num_points;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tracked_lane_msgs::msg::Boundary & ros_message)
{
  // Member: points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.points.resize(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.points[i]);
    }
  }

  // Member: num_points
  cdr >> ros_message.num_points;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
get_serialized_size(
  const tracked_lane_msgs::msg::Boundary & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: points
  {
    size_t array_size = ros_message.points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.points[index], current_alignment);
    }
  }
  // Member: num_points
  {
    size_t item_size = sizeof(ros_message.num_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
max_serialized_size_Boundary(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: points
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: num_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Boundary__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::Boundary *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Boundary__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tracked_lane_msgs::msg::Boundary *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Boundary__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::Boundary *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Boundary__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Boundary(full_bounded, 0);
}

static message_type_support_callbacks_t _Boundary__callbacks = {
  "tracked_lane_msgs::msg",
  "Boundary",
  _Boundary__cdr_serialize,
  _Boundary__cdr_deserialize,
  _Boundary__get_serialized_size,
  _Boundary__max_serialized_size
};

static rosidl_message_type_support_t _Boundary__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Boundary__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tracked_lane_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tracked_lane_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tracked_lane_msgs::msg::Boundary>()
{
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_Boundary__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tracked_lane_msgs, msg, Boundary)() {
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_Boundary__handle;
}

#ifdef __cplusplus
}
#endif
