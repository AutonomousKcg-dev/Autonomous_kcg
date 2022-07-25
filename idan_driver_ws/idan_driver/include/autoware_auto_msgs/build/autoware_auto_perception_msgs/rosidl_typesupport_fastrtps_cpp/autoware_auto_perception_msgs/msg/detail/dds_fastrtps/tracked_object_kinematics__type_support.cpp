// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Quaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Quaternion &);
size_t get_serialized_size(
  const geometry_msgs::msg::Quaternion &,
  size_t current_alignment);
size_t
max_serialized_size_Quaternion(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::TwistWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::TwistWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::TwistWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_TwistWithCovariance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::AccelWithCovariance &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::AccelWithCovariance &);
size_t get_serialized_size(
  const geometry_msgs::msg::AccelWithCovariance &,
  size_t current_alignment);
size_t
max_serialized_size_AccelWithCovariance(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_perception_msgs
cdr_serialize(
  const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: centroid_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.centroid_position,
    cdr);
  // Member: position_covariance
  {
    cdr << ros_message.position_covariance;
  }
  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  // Member: orientation_availability
  cdr << ros_message.orientation_availability;
  // Member: twist
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.twist,
    cdr);
  // Member: acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.acceleration,
    cdr);
  // Member: is_stationary
  cdr << (ros_message.is_stationary ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_perception_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autoware_auto_perception_msgs::msg::TrackedObjectKinematics & ros_message)
{
  // Member: centroid_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.centroid_position);

  // Member: position_covariance
  {
    cdr >> ros_message.position_covariance;
  }

  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.orientation);

  // Member: orientation_availability
  cdr >> ros_message.orientation_availability;

  // Member: twist
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.twist);

  // Member: acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.acceleration);

  // Member: is_stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_stationary = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_perception_msgs
get_serialized_size(
  const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: centroid_position

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.centroid_position, current_alignment);
  // Member: position_covariance
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.position_covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.orientation, current_alignment);
  // Member: orientation_availability
  {
    size_t item_size = sizeof(ros_message.orientation_availability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twist

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.twist, current_alignment);
  // Member: acceleration

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.acceleration, current_alignment);
  // Member: is_stationary
  {
    size_t item_size = sizeof(ros_message.is_stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autoware_auto_perception_msgs
max_serialized_size_TrackedObjectKinematics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: centroid_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: position_covariance
  {
    size_t array_size = 9;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Quaternion(
        full_bounded, current_alignment);
    }
  }

  // Member: orientation_availability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TwistWithCovariance(
        full_bounded, current_alignment);
    }
  }

  // Member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AccelWithCovariance(
        full_bounded, current_alignment);
    }
  }

  // Member: is_stationary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TrackedObjectKinematics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autoware_auto_perception_msgs::msg::TrackedObjectKinematics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackedObjectKinematics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autoware_auto_perception_msgs::msg::TrackedObjectKinematics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackedObjectKinematics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autoware_auto_perception_msgs::msg::TrackedObjectKinematics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackedObjectKinematics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrackedObjectKinematics(full_bounded, 0);
}

static message_type_support_callbacks_t _TrackedObjectKinematics__callbacks = {
  "autoware_auto_perception_msgs::msg",
  "TrackedObjectKinematics",
  _TrackedObjectKinematics__cdr_serialize,
  _TrackedObjectKinematics__cdr_deserialize,
  _TrackedObjectKinematics__get_serialized_size,
  _TrackedObjectKinematics__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObjectKinematics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackedObjectKinematics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return &autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::_TrackedObjectKinematics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)() {
  return &autoware_auto_perception_msgs::msg::typesupport_fastrtps_cpp::_TrackedObjectKinematics__handle;
}

#ifdef __cplusplus
}
#endif
