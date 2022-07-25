// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/radar_output_target__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cognata_sdk_ros2/msg/detail/radar_output_target__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_serialize(
  const cognata_sdk_ros2::msg::RadarOutputTarget & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: id
  cdr << ros_message.id;
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: range
  cdr << ros_message.range;
  // Member: azimuth
  cdr << ros_message.azimuth;
  // Member: elevation
  cdr << ros_message.elevation;
  // Member: range_rate
  cdr << ros_message.range_rate;
  // Member: amplitude
  cdr << ros_message.amplitude;
  // Member: is_aggregate
  cdr << ros_message.is_aggregate;
  // Member: tracking_status
  cdr << ros_message.tracking_status;
  // Member: age
  cdr << ros_message.age;
  // Member: last_seen
  cdr << ros_message.last_seen;
  // Member: is_stationary
  cdr << (ros_message.is_stationary ? true : false);
  // Member: is_ghost
  cdr << (ros_message.is_ghost ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cognata_sdk_ros2::msg::RadarOutputTarget & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: id
  cdr >> ros_message.id;

  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: range
  cdr >> ros_message.range;

  // Member: azimuth
  cdr >> ros_message.azimuth;

  // Member: elevation
  cdr >> ros_message.elevation;

  // Member: range_rate
  cdr >> ros_message.range_rate;

  // Member: amplitude
  cdr >> ros_message.amplitude;

  // Member: is_aggregate
  cdr >> ros_message.is_aggregate;

  // Member: tracking_status
  cdr >> ros_message.tracking_status;

  // Member: age
  cdr >> ros_message.age;

  // Member: last_seen
  cdr >> ros_message.last_seen;

  // Member: is_stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_stationary = tmp ? true : false;
  }

  // Member: is_ghost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ghost = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
get_serialized_size(
  const cognata_sdk_ros2::msg::RadarOutputTarget & ros_message,
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
  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azimuth
  {
    size_t item_size = sizeof(ros_message.azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: elevation
  {
    size_t item_size = sizeof(ros_message.elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: range_rate
  {
    size_t item_size = sizeof(ros_message.range_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: amplitude
  {
    size_t item_size = sizeof(ros_message.amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_aggregate
  {
    size_t item_size = sizeof(ros_message.is_aggregate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tracking_status
  {
    size_t item_size = sizeof(ros_message.tracking_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_seen
  {
    size_t item_size = sizeof(ros_message.last_seen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_stationary
  {
    size_t item_size = sizeof(ros_message.is_stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_ghost
  {
    size_t item_size = sizeof(ros_message.is_ghost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
max_serialized_size_RadarOutputTarget(
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

  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: elevation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: range_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: amplitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_aggregate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tracking_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: last_seen
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_stationary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_ghost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RadarOutputTarget__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::RadarOutputTarget *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarOutputTarget__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cognata_sdk_ros2::msg::RadarOutputTarget *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarOutputTarget__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::RadarOutputTarget *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarOutputTarget__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RadarOutputTarget(full_bounded, 0);
}

static message_type_support_callbacks_t _RadarOutputTarget__callbacks = {
  "cognata_sdk_ros2::msg",
  "RadarOutputTarget",
  _RadarOutputTarget__cdr_serialize,
  _RadarOutputTarget__cdr_deserialize,
  _RadarOutputTarget__get_serialized_size,
  _RadarOutputTarget__max_serialized_size
};

static rosidl_message_type_support_t _RadarOutputTarget__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarOutputTarget__callbacks,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::RadarOutputTarget>()
{
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_RadarOutputTarget__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cognata_sdk_ros2, msg, RadarOutputTarget)() {
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_RadarOutputTarget__handle;
}

#ifdef __cplusplus
}
#endif
