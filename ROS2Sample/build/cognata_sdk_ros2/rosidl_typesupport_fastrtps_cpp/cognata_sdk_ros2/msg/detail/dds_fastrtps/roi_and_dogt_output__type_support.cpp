// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cognata_sdk_ros2/msg/detail/roi_and_dogt_output__struct.hpp"

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

namespace cognata_sdk_ros2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cognata_sdk_ros2::msg::AnnotationMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::AnnotationMsg &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::AnnotationMsg &,
  size_t current_alignment);
size_t
max_serialized_size_AnnotationMsg(
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
bool cdr_serialize(
  const cognata_sdk_ros2::msg::PedestrianMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::PedestrianMsg &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::PedestrianMsg &,
  size_t current_alignment);
size_t
max_serialized_size_PedestrianMsg(
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
bool cdr_serialize(
  const cognata_sdk_ros2::msg::VehicleMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::VehicleMsg &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::VehicleMsg &,
  size_t current_alignment);
size_t
max_serialized_size_VehicleMsg(
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
bool cdr_serialize(
  const cognata_sdk_ros2::msg::TrafficLightMsg &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::TrafficLightMsg &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::TrafficLightMsg &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficLightMsg(
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
  const cognata_sdk_ros2::msg::ROIAndDOGTOutput & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: other_list
  {
    size_t size = ros_message.other_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.other_list[i],
        cdr);
    }
  }
  // Member: annotation_list
  {
    size_t size = ros_message.annotation_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.annotation_list[i],
        cdr);
    }
  }
  // Member: pedestrian_list
  {
    size_t size = ros_message.pedestrian_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pedestrian_list[i],
        cdr);
    }
  }
  // Member: vehicle_list
  {
    size_t size = ros_message.vehicle_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.vehicle_list[i],
        cdr);
    }
  }
  // Member: traffic_light_list
  {
    size_t size = ros_message.traffic_light_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.traffic_light_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cognata_sdk_ros2::msg::ROIAndDOGTOutput & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: other_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.other_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.other_list[i]);
    }
  }

  // Member: annotation_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.annotation_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.annotation_list[i]);
    }
  }

  // Member: pedestrian_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.pedestrian_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pedestrian_list[i]);
    }
  }

  // Member: vehicle_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.vehicle_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.vehicle_list[i]);
    }
  }

  // Member: traffic_light_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.traffic_light_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.traffic_light_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
get_serialized_size(
  const cognata_sdk_ros2::msg::ROIAndDOGTOutput & ros_message,
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
  // Member: other_list
  {
    size_t array_size = ros_message.other_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.other_list[index], current_alignment);
    }
  }
  // Member: annotation_list
  {
    size_t array_size = ros_message.annotation_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.annotation_list[index], current_alignment);
    }
  }
  // Member: pedestrian_list
  {
    size_t array_size = ros_message.pedestrian_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pedestrian_list[index], current_alignment);
    }
  }
  // Member: vehicle_list
  {
    size_t array_size = ros_message.vehicle_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.vehicle_list[index], current_alignment);
    }
  }
  // Member: traffic_light_list
  {
    size_t array_size = ros_message.traffic_light_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.traffic_light_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
max_serialized_size_ROIAndDOGTOutput(
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

  // Member: other_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_ObjectDescription(
        full_bounded, current_alignment);
    }
  }

  // Member: annotation_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_AnnotationMsg(
        full_bounded, current_alignment);
    }
  }

  // Member: pedestrian_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_PedestrianMsg(
        full_bounded, current_alignment);
    }
  }

  // Member: vehicle_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_VehicleMsg(
        full_bounded, current_alignment);
    }
  }

  // Member: traffic_light_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficLightMsg(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ROIAndDOGTOutput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::ROIAndDOGTOutput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ROIAndDOGTOutput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cognata_sdk_ros2::msg::ROIAndDOGTOutput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ROIAndDOGTOutput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::ROIAndDOGTOutput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ROIAndDOGTOutput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ROIAndDOGTOutput(full_bounded, 0);
}

static message_type_support_callbacks_t _ROIAndDOGTOutput__callbacks = {
  "cognata_sdk_ros2::msg",
  "ROIAndDOGTOutput",
  _ROIAndDOGTOutput__cdr_serialize,
  _ROIAndDOGTOutput__cdr_deserialize,
  _ROIAndDOGTOutput__get_serialized_size,
  _ROIAndDOGTOutput__max_serialized_size
};

static rosidl_message_type_support_t _ROIAndDOGTOutput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ROIAndDOGTOutput__callbacks,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::ROIAndDOGTOutput>()
{
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_ROIAndDOGTOutput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cognata_sdk_ros2, msg, ROIAndDOGTOutput)() {
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_ROIAndDOGTOutput__handle;
}

#ifdef __cplusplus
}
#endif
