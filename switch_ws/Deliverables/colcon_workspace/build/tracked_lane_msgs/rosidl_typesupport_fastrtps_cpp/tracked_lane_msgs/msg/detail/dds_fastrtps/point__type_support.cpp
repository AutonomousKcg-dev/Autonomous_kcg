// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/Point.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/point__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tracked_lane_msgs/msg/detail/point__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
cdr_serialize(
  const tracked_lane_msgs::msg::Point & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: u
  cdr << ros_message.u;
  // Member: v
  cdr << ros_message.v;
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: z
  cdr << ros_message.z;
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: valid
  cdr << (ros_message.valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tracked_lane_msgs::msg::Point & ros_message)
{
  // Member: u
  cdr >> ros_message.u;

  // Member: v
  cdr >> ros_message.v;

  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: z
  cdr >> ros_message.z;

  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.valid = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
get_serialized_size(
  const tracked_lane_msgs::msg::Point & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: u
  {
    size_t item_size = sizeof(ros_message.u);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v
  {
    size_t item_size = sizeof(ros_message.v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: valid
  {
    size_t item_size = sizeof(ros_message.valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: u
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Point__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::Point *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Point__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tracked_lane_msgs::msg::Point *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Point__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::Point *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Point__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Point(full_bounded, 0);
}

static message_type_support_callbacks_t _Point__callbacks = {
  "tracked_lane_msgs::msg",
  "Point",
  _Point__cdr_serialize,
  _Point__cdr_deserialize,
  _Point__get_serialized_size,
  _Point__max_serialized_size
};

static rosidl_message_type_support_t _Point__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Point__callbacks,
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
get_message_type_support_handle<tracked_lane_msgs::msg::Point>()
{
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_Point__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tracked_lane_msgs, msg, Point)() {
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_Point__handle;
}

#ifdef __cplusplus
}
#endif
