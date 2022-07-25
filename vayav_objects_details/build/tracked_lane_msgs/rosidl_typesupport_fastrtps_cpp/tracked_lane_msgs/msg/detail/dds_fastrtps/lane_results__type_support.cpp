// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/lane_results__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tracked_lane_msgs/msg/detail/lane_results__struct.hpp"

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

namespace tracked_lane_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tracked_lane_msgs::msg::Lane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracked_lane_msgs::msg::Lane &);
size_t get_serialized_size(
  const tracked_lane_msgs::msg::Lane &,
  size_t current_alignment);
size_t
max_serialized_size_Lane(
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
bool cdr_serialize(
  const tracked_lane_msgs::msg::Lane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracked_lane_msgs::msg::Lane &);
size_t get_serialized_size(
  const tracked_lane_msgs::msg::Lane &,
  size_t current_alignment);
size_t
max_serialized_size_Lane(
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
bool cdr_serialize(
  const tracked_lane_msgs::msg::Lane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracked_lane_msgs::msg::Lane &);
size_t get_serialized_size(
  const tracked_lane_msgs::msg::Lane &,
  size_t current_alignment);
size_t
max_serialized_size_Lane(
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
bool cdr_serialize(
  const tracked_lane_msgs::msg::Lane &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tracked_lane_msgs::msg::Lane &);
size_t get_serialized_size(
  const tracked_lane_msgs::msg::Lane &,
  size_t current_alignment);
size_t
max_serialized_size_Lane(
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
  const tracked_lane_msgs::msg::LaneResults & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: adjacent_left
  {
    size_t size = ros_message.adjacent_left.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.adjacent_left[i],
        cdr);
    }
  }
  // Member: num_adjacent_left
  cdr << ros_message.num_adjacent_left;
  // Member: adjacent_right
  {
    size_t size = ros_message.adjacent_right.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.adjacent_right[i],
        cdr);
    }
  }
  // Member: num_adjacent_right
  cdr << ros_message.num_adjacent_right;
  // Member: ego_lane
  tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ego_lane,
    cdr);
  // Member: road_boundary
  tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.road_boundary,
    cdr);
  // Member: total_number_of_lanes
  cdr << ros_message.total_number_of_lanes;
  // Member: algo_description
  cdr << ros_message.algo_description;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tracked_lane_msgs::msg::LaneResults & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: adjacent_left
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.adjacent_left.resize(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.adjacent_left[i]);
    }
  }

  // Member: num_adjacent_left
  cdr >> ros_message.num_adjacent_left;

  // Member: adjacent_right
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.adjacent_right.resize(size);
    for (size_t i = 0; i < size; i++) {
      tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.adjacent_right[i]);
    }
  }

  // Member: num_adjacent_right
  cdr >> ros_message.num_adjacent_right;

  // Member: ego_lane
  tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ego_lane);

  // Member: road_boundary
  tracked_lane_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.road_boundary);

  // Member: total_number_of_lanes
  cdr >> ros_message.total_number_of_lanes;

  // Member: algo_description
  cdr >> ros_message.algo_description;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
get_serialized_size(
  const tracked_lane_msgs::msg::LaneResults & ros_message,
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
  // Member: adjacent_left
  {
    size_t array_size = ros_message.adjacent_left.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.adjacent_left[index], current_alignment);
    }
  }
  // Member: num_adjacent_left
  {
    size_t item_size = sizeof(ros_message.num_adjacent_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adjacent_right
  {
    size_t array_size = ros_message.adjacent_right.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.adjacent_right[index], current_alignment);
    }
  }
  // Member: num_adjacent_right
  {
    size_t item_size = sizeof(ros_message.num_adjacent_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ego_lane

  current_alignment +=
    tracked_lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ego_lane, current_alignment);
  // Member: road_boundary

  current_alignment +=
    tracked_lane_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.road_boundary, current_alignment);
  // Member: total_number_of_lanes
  {
    size_t item_size = sizeof(ros_message.total_number_of_lanes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.algo_description.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_lane_msgs
max_serialized_size_LaneResults(
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

  // Member: adjacent_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Lane(
        full_bounded, current_alignment);
    }
  }

  // Member: num_adjacent_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adjacent_right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Lane(
        full_bounded, current_alignment);
    }
  }

  // Member: num_adjacent_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ego_lane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Lane(
        full_bounded, current_alignment);
    }
  }

  // Member: road_boundary
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tracked_lane_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Lane(
        full_bounded, current_alignment);
    }
  }

  // Member: total_number_of_lanes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algo_description
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

static bool _LaneResults__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::LaneResults *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaneResults__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tracked_lane_msgs::msg::LaneResults *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaneResults__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tracked_lane_msgs::msg::LaneResults *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaneResults__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LaneResults(full_bounded, 0);
}

static message_type_support_callbacks_t _LaneResults__callbacks = {
  "tracked_lane_msgs::msg",
  "LaneResults",
  _LaneResults__cdr_serialize,
  _LaneResults__cdr_deserialize,
  _LaneResults__get_serialized_size,
  _LaneResults__max_serialized_size
};

static rosidl_message_type_support_t _LaneResults__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaneResults__callbacks,
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
get_message_type_support_handle<tracked_lane_msgs::msg::LaneResults>()
{
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_LaneResults__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tracked_lane_msgs, msg, LaneResults)() {
  return &tracked_lane_msgs::msg::typesupport_fastrtps_cpp::_LaneResults__handle;
}

#ifdef __cplusplus
}
#endif
