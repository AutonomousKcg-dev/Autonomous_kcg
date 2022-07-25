// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/car_telemetries_msg__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"  // wheels
#include "geometry_msgs/msg/detail/twist__functions.h"  // center_of_mass
#include "rosidl_runtime_c/string.h"  // turn_light
#include "rosidl_runtime_c/string_functions.h"  // turn_light
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelTelemetries)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CarTelemetriesMsg__ros_msg_type = cognata_sdk_ros2__msg__CarTelemetriesMsg;

static bool _CarTelemetriesMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CarTelemetriesMsg__ros_msg_type * ros_message = static_cast<const _CarTelemetriesMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: turn_light
  {
    const rosidl_runtime_c__String * str = &ros_message->turn_light;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: brake
  {
    cdr << ros_message->brake;
  }

  // Field name: gas
  {
    cdr << ros_message->gas;
  }

  // Field name: steering
  {
    cdr << ros_message->steering;
  }

  // Field name: center_of_mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->center_of_mass, cdr))
    {
      return false;
    }
  }

  // Field name: engine_rpm
  {
    cdr << ros_message->engine_rpm;
  }

  // Field name: engine_load
  {
    cdr << ros_message->engine_load;
  }

  // Field name: engine_torque
  {
    cdr << ros_message->engine_torque;
  }

  // Field name: engine_power
  {
    cdr << ros_message->engine_power;
  }

  // Field name: current_gear
  {
    cdr << ros_message->current_gear;
  }

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelTelemetries
      )()->data);
    size_t size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _CarTelemetriesMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CarTelemetriesMsg__ros_msg_type * ros_message = static_cast<_CarTelemetriesMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: turn_light
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->turn_light.data) {
      rosidl_runtime_c__String__init(&ros_message->turn_light);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->turn_light,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'turn_light'\n");
      return false;
    }
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: brake
  {
    cdr >> ros_message->brake;
  }

  // Field name: gas
  {
    cdr >> ros_message->gas;
  }

  // Field name: steering
  {
    cdr >> ros_message->steering;
  }

  // Field name: center_of_mass
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->center_of_mass))
    {
      return false;
    }
  }

  // Field name: engine_rpm
  {
    cdr >> ros_message->engine_rpm;
  }

  // Field name: engine_load
  {
    cdr >> ros_message->engine_load;
  }

  // Field name: engine_torque
  {
    cdr >> ros_message->engine_torque;
  }

  // Field name: engine_power
  {
    cdr >> ros_message->engine_power;
  }

  // Field name: current_gear
  {
    cdr >> ros_message->current_gear;
  }

  // Field name: wheels
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelTelemetries
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wheels.data) {
      cognata_sdk_ros2__msg__WheelTelemetries__Sequence__fini(&ros_message->wheels);
    }
    if (!cognata_sdk_ros2__msg__WheelTelemetries__Sequence__init(&ros_message->wheels, size)) {
      return "failed to create array for field 'wheels'";
    }
    auto array_ptr = ros_message->wheels.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t get_serialized_size_cognata_sdk_ros2__msg__CarTelemetriesMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CarTelemetriesMsg__ros_msg_type * ros_message = static_cast<const _CarTelemetriesMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name turn_light
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->turn_light.size + 1);
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake
  {
    size_t item_size = sizeof(ros_message->brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gas
  {
    size_t item_size = sizeof(ros_message->gas);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering
  {
    size_t item_size = sizeof(ros_message->steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_of_mass

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->center_of_mass), current_alignment);
  // field.name engine_rpm
  {
    size_t item_size = sizeof(ros_message->engine_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_load
  {
    size_t item_size = sizeof(ros_message->engine_load);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_torque
  {
    size_t item_size = sizeof(ros_message->engine_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_power
  {
    size_t item_size = sizeof(ros_message->engine_power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_gear
  {
    size_t item_size = sizeof(ros_message->current_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheels
  {
    size_t array_size = ros_message->wheels.size;
    auto array_ptr = ros_message->wheels.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CarTelemetriesMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__CarTelemetriesMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__CarTelemetriesMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: turn_light
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gas
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: center_of_mass
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Twist(
        full_bounded, current_alignment);
    }
  }
  // member: engine_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_load
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_gear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheels
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CarTelemetriesMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__CarTelemetriesMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CarTelemetriesMsg = {
  "cognata_sdk_ros2::msg",
  "CarTelemetriesMsg",
  _CarTelemetriesMsg__cdr_serialize,
  _CarTelemetriesMsg__cdr_deserialize,
  _CarTelemetriesMsg__get_serialized_size,
  _CarTelemetriesMsg__max_serialized_size
};

static rosidl_message_type_support_t _CarTelemetriesMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CarTelemetriesMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, CarTelemetriesMsg)() {
  return &_CarTelemetriesMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
