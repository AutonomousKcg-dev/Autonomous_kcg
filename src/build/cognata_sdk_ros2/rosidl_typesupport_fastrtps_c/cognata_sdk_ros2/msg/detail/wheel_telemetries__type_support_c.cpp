// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__struct.h"
#include "cognata_sdk_ros2/msg/detail/wheel_telemetries__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // tire_force, tire_slip
#include "geometry_msgs/msg/detail/vector3__functions.h"  // wheel_velocity
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cognata_sdk_ros2
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();
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


using _WheelTelemetries__ros_msg_type = cognata_sdk_ros2__msg__WheelTelemetries;

static bool _WheelTelemetries__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WheelTelemetries__ros_msg_type * ros_message = static_cast<const _WheelTelemetries__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angular_velocity
  {
    cdr << ros_message->angular_velocity;
  }

  // Field name: steer_angle
  {
    cdr << ros_message->steer_angle;
  }

  // Field name: drive_torque
  {
    cdr << ros_message->drive_torque;
  }

  // Field name: brake_torque
  {
    cdr << ros_message->brake_torque;
  }

  // Field name: reaction_torque
  {
    cdr << ros_message->reaction_torque;
  }

  // Field name: tire_force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tire_force, cdr))
    {
      return false;
    }
  }

  // Field name: tire_slip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tire_slip, cdr))
    {
      return false;
    }
  }

  // Field name: can_slip
  {
    cdr << (ros_message->can_slip ? true : false);
  }

  // Field name: combined_tire_slip
  {
    cdr << ros_message->combined_tire_slip;
  }

  // Field name: suspension_compression
  {
    cdr << ros_message->suspension_compression;
  }

  // Field name: down_force
  {
    cdr << ros_message->down_force;
  }

  // Field name: contact_angle
  {
    cdr << ros_message->contact_angle;
  }

  // Field name: contact_depth
  {
    cdr << ros_message->contact_depth;
  }

  // Field name: contact_speed
  {
    cdr << ros_message->contact_speed;
  }

  // Field name: is_grounded
  {
    cdr << (ros_message->is_grounded ? true : false);
  }

  // Field name: wheel_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wheel_velocity, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _WheelTelemetries__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WheelTelemetries__ros_msg_type * ros_message = static_cast<_WheelTelemetries__ros_msg_type *>(untyped_ros_message);
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

  // Field name: angular_velocity
  {
    cdr >> ros_message->angular_velocity;
  }

  // Field name: steer_angle
  {
    cdr >> ros_message->steer_angle;
  }

  // Field name: drive_torque
  {
    cdr >> ros_message->drive_torque;
  }

  // Field name: brake_torque
  {
    cdr >> ros_message->brake_torque;
  }

  // Field name: reaction_torque
  {
    cdr >> ros_message->reaction_torque;
  }

  // Field name: tire_force
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tire_force))
    {
      return false;
    }
  }

  // Field name: tire_slip
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tire_slip))
    {
      return false;
    }
  }

  // Field name: can_slip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_slip = tmp ? true : false;
  }

  // Field name: combined_tire_slip
  {
    cdr >> ros_message->combined_tire_slip;
  }

  // Field name: suspension_compression
  {
    cdr >> ros_message->suspension_compression;
  }

  // Field name: down_force
  {
    cdr >> ros_message->down_force;
  }

  // Field name: contact_angle
  {
    cdr >> ros_message->contact_angle;
  }

  // Field name: contact_depth
  {
    cdr >> ros_message->contact_depth;
  }

  // Field name: contact_speed
  {
    cdr >> ros_message->contact_speed;
  }

  // Field name: is_grounded
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_grounded = tmp ? true : false;
  }

  // Field name: wheel_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wheel_velocity))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t get_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WheelTelemetries__ros_msg_type * ros_message = static_cast<const _WheelTelemetries__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name angular_velocity
  {
    size_t item_size = sizeof(ros_message->angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_angle
  {
    size_t item_size = sizeof(ros_message->steer_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drive_torque
  {
    size_t item_size = sizeof(ros_message->drive_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_torque
  {
    size_t item_size = sizeof(ros_message->brake_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reaction_torque
  {
    size_t item_size = sizeof(ros_message->reaction_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_force

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->tire_force), current_alignment);
  // field.name tire_slip

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->tire_slip), current_alignment);
  // field.name can_slip
  {
    size_t item_size = sizeof(ros_message->can_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name combined_tire_slip
  {
    size_t item_size = sizeof(ros_message->combined_tire_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name suspension_compression
  {
    size_t item_size = sizeof(ros_message->suspension_compression);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name down_force
  {
    size_t item_size = sizeof(ros_message->down_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_angle
  {
    size_t item_size = sizeof(ros_message->contact_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_depth
  {
    size_t item_size = sizeof(ros_message->contact_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_speed
  {
    size_t item_size = sizeof(ros_message->contact_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_grounded
  {
    size_t item_size = sizeof(ros_message->is_grounded);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->wheel_velocity), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _WheelTelemetries__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
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
  // member: angular_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steer_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: drive_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: reaction_torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_force
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: tire_slip
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: can_slip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: combined_tire_slip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: suspension_compression
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: down_force
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contact_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contact_depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contact_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_grounded
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheel_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WheelTelemetries__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__WheelTelemetries(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WheelTelemetries = {
  "cognata_sdk_ros2::msg",
  "WheelTelemetries",
  _WheelTelemetries__cdr_serialize,
  _WheelTelemetries__cdr_deserialize,
  _WheelTelemetries__get_serialized_size,
  _WheelTelemetries__max_serialized_size
};

static rosidl_message_type_support_t _WheelTelemetries__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WheelTelemetries,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, WheelTelemetries)() {
  return &_WheelTelemetries__type_support;
}

#if defined(__cplusplus)
}
#endif
