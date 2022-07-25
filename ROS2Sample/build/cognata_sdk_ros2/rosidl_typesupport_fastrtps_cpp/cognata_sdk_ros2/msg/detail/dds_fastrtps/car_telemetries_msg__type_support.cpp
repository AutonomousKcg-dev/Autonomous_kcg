// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.hpp"

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
  const cognata_sdk_ros2::msg::WheelTelemetries &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cognata_sdk_ros2::msg::WheelTelemetries &);
size_t get_serialized_size(
  const cognata_sdk_ros2::msg::WheelTelemetries &,
  size_t current_alignment);
size_t
max_serialized_size_WheelTelemetries(
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
  const cognata_sdk_ros2::msg::CarTelemetriesMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: turn_light
  cdr << ros_message.turn_light;
  // Member: acceleration
  cdr << ros_message.acceleration;
  // Member: brake
  cdr << ros_message.brake;
  // Member: gas
  cdr << ros_message.gas;
  // Member: steering
  cdr << ros_message.steering;
  // Member: center_of_mass
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.center_of_mass,
    cdr);
  // Member: engine_rpm
  cdr << ros_message.engine_rpm;
  // Member: engine_load
  cdr << ros_message.engine_load;
  // Member: engine_torque
  cdr << ros_message.engine_torque;
  // Member: engine_power
  cdr << ros_message.engine_power;
  // Member: current_gear
  cdr << ros_message.current_gear;
  // Member: wheels
  {
    size_t size = ros_message.wheels.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.wheels[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cognata_sdk_ros2::msg::CarTelemetriesMsg & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: turn_light
  cdr >> ros_message.turn_light;

  // Member: acceleration
  cdr >> ros_message.acceleration;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: gas
  cdr >> ros_message.gas;

  // Member: steering
  cdr >> ros_message.steering;

  // Member: center_of_mass
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.center_of_mass);

  // Member: engine_rpm
  cdr >> ros_message.engine_rpm;

  // Member: engine_load
  cdr >> ros_message.engine_load;

  // Member: engine_torque
  cdr >> ros_message.engine_torque;

  // Member: engine_power
  cdr >> ros_message.engine_power;

  // Member: current_gear
  cdr >> ros_message.current_gear;

  // Member: wheels
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.wheels.resize(size);
    for (size_t i = 0; i < size; i++) {
      cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.wheels[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
get_serialized_size(
  const cognata_sdk_ros2::msg::CarTelemetriesMsg & ros_message,
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
  // Member: turn_light
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.turn_light.size() + 1);
  // Member: acceleration
  {
    size_t item_size = sizeof(ros_message.acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gas
  {
    size_t item_size = sizeof(ros_message.gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_of_mass

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.center_of_mass, current_alignment);
  // Member: engine_rpm
  {
    size_t item_size = sizeof(ros_message.engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_load
  {
    size_t item_size = sizeof(ros_message.engine_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_torque
  {
    size_t item_size = sizeof(ros_message.engine_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_power
  {
    size_t item_size = sizeof(ros_message.engine_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_gear
  {
    size_t item_size = sizeof(ros_message.current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheels
  {
    size_t array_size = ros_message.wheels.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.wheels[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cognata_sdk_ros2
max_serialized_size_CarTelemetriesMsg(
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

  // Member: turn_light
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gas
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: center_of_mass
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Twist(
        full_bounded, current_alignment);
    }
  }

  // Member: engine_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelTelemetries(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CarTelemetriesMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::CarTelemetriesMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CarTelemetriesMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cognata_sdk_ros2::msg::CarTelemetriesMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CarTelemetriesMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cognata_sdk_ros2::msg::CarTelemetriesMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CarTelemetriesMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CarTelemetriesMsg(full_bounded, 0);
}

static message_type_support_callbacks_t _CarTelemetriesMsg__callbacks = {
  "cognata_sdk_ros2::msg",
  "CarTelemetriesMsg",
  _CarTelemetriesMsg__cdr_serialize,
  _CarTelemetriesMsg__cdr_deserialize,
  _CarTelemetriesMsg__get_serialized_size,
  _CarTelemetriesMsg__max_serialized_size
};

static rosidl_message_type_support_t _CarTelemetriesMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CarTelemetriesMsg__callbacks,
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
get_message_type_support_handle<cognata_sdk_ros2::msg::CarTelemetriesMsg>()
{
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_CarTelemetriesMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cognata_sdk_ros2, msg, CarTelemetriesMsg)() {
  return &cognata_sdk_ros2::msg::typesupport_fastrtps_cpp::_CarTelemetriesMsg__handle;
}

#ifdef __cplusplus
}
#endif
