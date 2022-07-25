// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tracked_object_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice
#include "tracked_object_msgs/msg/detail/tracked_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tracked_object_msgs/msg/detail/tracked_object__struct.hpp"

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

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
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
  const geometry_msgs::msg::Twist &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Twist &);
size_t get_serialized_size(
  const geometry_msgs::msg::Twist &,
  size_t current_alignment);
size_t
max_serialized_size_Twist(
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


namespace tracked_object_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_object_msgs
cdr_serialize(
  const tracked_object_msgs::msg::TrackedObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: uuid
  cdr << ros_message.uuid;
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: object_type
  cdr << ros_message.object_type;
  // Member: object_pose_m_quat
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_pose_m_quat,
    cdr);
  // Member: base_frame_id
  cdr << ros_message.base_frame_id;
  // Member: object_velocity_mps_radps
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.object_velocity_mps_radps,
    cdr);
  // Member: box_dimensions_m
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.box_dimensions_m,
    cdr);
  // Member: confidence
  cdr << ros_message.confidence;
  // Member: metadata
  cdr << ros_message.metadata;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tracked_object_msgs::msg::TrackedObject & ros_message)
{
  // Member: uuid
  cdr >> ros_message.uuid;

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: object_type
  cdr >> ros_message.object_type;

  // Member: object_pose_m_quat
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_pose_m_quat);

  // Member: base_frame_id
  cdr >> ros_message.base_frame_id;

  // Member: object_velocity_mps_radps
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.object_velocity_mps_radps);

  // Member: box_dimensions_m
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.box_dimensions_m);

  // Member: confidence
  cdr >> ros_message.confidence;

  // Member: metadata
  cdr >> ros_message.metadata;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_object_msgs
get_serialized_size(
  const tracked_object_msgs::msg::TrackedObject & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: uuid
  {
    size_t item_size = sizeof(ros_message.uuid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: object_type
  {
    size_t item_size = sizeof(ros_message.object_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_pose_m_quat

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_pose_m_quat, current_alignment);
  // Member: base_frame_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.base_frame_id.size() + 1);
  // Member: object_velocity_mps_radps

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.object_velocity_mps_radps, current_alignment);
  // Member: box_dimensions_m

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.box_dimensions_m, current_alignment);
  // Member: confidence
  {
    size_t item_size = sizeof(ros_message.confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: metadata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.metadata.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tracked_object_msgs
max_serialized_size_TrackedObject(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: uuid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: object_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: object_pose_m_quat
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  // Member: base_frame_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: object_velocity_mps_radps
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist(
        full_bounded, current_alignment);
    }
  }

  // Member: box_dimensions_m
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  // Member: confidence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: metadata
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

static bool _TrackedObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tracked_object_msgs::msg::TrackedObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrackedObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tracked_object_msgs::msg::TrackedObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrackedObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tracked_object_msgs::msg::TrackedObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrackedObject__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TrackedObject(full_bounded, 0);
}

static message_type_support_callbacks_t _TrackedObject__callbacks = {
  "tracked_object_msgs::msg",
  "TrackedObject",
  _TrackedObject__cdr_serialize,
  _TrackedObject__cdr_deserialize,
  _TrackedObject__get_serialized_size,
  _TrackedObject__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrackedObject__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tracked_object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tracked_object_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tracked_object_msgs::msg::TrackedObject>()
{
  return &tracked_object_msgs::msg::typesupport_fastrtps_cpp::_TrackedObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tracked_object_msgs, msg, TrackedObject)() {
  return &tracked_object_msgs::msg::typesupport_fastrtps_cpp::_TrackedObject__handle;
}

#ifdef __cplusplus
}
#endif
