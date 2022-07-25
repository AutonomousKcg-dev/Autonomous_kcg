// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/ObjectDescription.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/object_description__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cognata_sdk_ros2/msg/detail/object_description__struct.hpp"

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

namespace cognata_sdk_ros2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cognata_sdk_ros2::msg::BoundingBoxMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::BoundingBoxMsg &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::BoundingBoxMsg &,
  size_t current_alignment);
size_t
max_serialized_size_BoundingBoxMsg(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cognata_sdk_ros2


namespace cognata_sdk_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_serialize(
  const cognata_sdk_ros2::msg::ObjectDescription & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: object_id
  cdr << ros_message.object_id;
  // Member: roi_type
  cdr << ros_message.roi_type;
  // Member: roi_subtype
  cdr << ros_message.roi_subtype;
  // Member: motion
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.motion,
    cdr);
  // Member: bounding_box
  cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bounding_box,
    cdr);
  // Member: sensor_ids
  {
    cdr << ros_message.sensor_ids;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cognata_sdk_ros2::msg::ObjectDescription & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: roi_type
  cdr >> ros_message.roi_type;

  // Member: roi_subtype
  cdr >> ros_message.roi_subtype;

  // Member: motion
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.motion);

  // Member: bounding_box
  cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bounding_box);

  // Member: sensor_ids
  {
    cdr >> ros_message.sensor_ids;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
get_serialized_size(
  const cognata_sdk_ros2::msg::ObjectDescription & ros_message,
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
  // Member: object_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.object_id.size() + 1);
  // Member: roi_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.roi_type.size() + 1);
  // Member: roi_subtype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.roi_subtype.size() + 1);
  // Member: motion

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.motion, current_alignment);
  // Member: bounding_box

  current_alignment +=
    cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bounding_box, current_alignment);
  // Member: sensor_ids
  {
    size_t array_size = ros_message.sensor_ids.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.sensor_ids[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
max_serialized_size_ObjectDescription(
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

  // Member: object_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: roi_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: roi_subtype
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: motion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist(
        full_bounded, current_alignment);
    }
  }

  // Member: bounding_box
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_BoundingBoxMsg(
        full_bounded, current_alignment);
    }
  }

  // Member: sensor_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ObjectDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::ObjectDescription *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cognata_sdk_ros2::msg::ObjectDescription *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectDescription__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::ObjectDescription *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectDescription__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObjectDescription(full_bounded, 0);
}

static message_type_support_callbacks_t _ObjectDescription__callbacks = {
  "cognata_sdk_ros2::msg",
  "ObjectDescription",
  _ObjectDescription__cdr_serialize,
  _ObjectDescription__cdr_deserialize,
  _ObjectDescription__get_serialized_size,
  _ObjectDescription__max_serialized_size
};

static rosidl_message_type_support_t _ObjectDescription__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectDescription__callbacks,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::ObjectDescription>()
{
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_ObjectDescription__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cognata_sdk_ros2, msg, ObjectDescription)() {
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_ObjectDescription__handle;
}

#ifdef __cplusplus
}
#endif
