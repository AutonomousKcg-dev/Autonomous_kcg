// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/trajectory_point__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_msgs/msg/detail/trajectory_point__struct.h"
#include "autoware_auto_msgs/msg/detail/trajectory_point__functions.h"
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

#include "autoware_auto_msgs/msg/detail/complex32__functions.h"  // heading
#include "builtin_interfaces/msg/detail/duration__functions.h"  // time_from_start

// forward declare type support functions
size_t get_serialized_size_autoware_auto_msgs__msg__Complex32(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_msgs__msg__Complex32(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_msgs, msg, Complex32)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();


using _TrajectoryPoint__ros_msg_type = autoware_auto_msgs__msg__TrajectoryPoint;

static bool _TrajectoryPoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryPoint__ros_msg_type * ros_message = static_cast<const _TrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: time_from_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_from_start, cdr))
    {
      return false;
    }
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_msgs, msg, Complex32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->heading, cdr))
    {
      return false;
    }
  }

  // Field name: longitudinal_velocity_mps
  {
    cdr << ros_message->longitudinal_velocity_mps;
  }

  // Field name: lateral_velocity_mps
  {
    cdr << ros_message->lateral_velocity_mps;
  }

  // Field name: acceleration_mps2
  {
    cdr << ros_message->acceleration_mps2;
  }

  // Field name: heading_rate_rps
  {
    cdr << ros_message->heading_rate_rps;
  }

  // Field name: front_wheel_angle_rad
  {
    cdr << ros_message->front_wheel_angle_rad;
  }

  // Field name: rear_wheel_angle_rad
  {
    cdr << ros_message->rear_wheel_angle_rad;
  }

  return true;
}

static bool _TrajectoryPoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryPoint__ros_msg_type * ros_message = static_cast<_TrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  // Field name: time_from_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_from_start))
    {
      return false;
    }
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: heading
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_msgs, msg, Complex32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->heading))
    {
      return false;
    }
  }

  // Field name: longitudinal_velocity_mps
  {
    cdr >> ros_message->longitudinal_velocity_mps;
  }

  // Field name: lateral_velocity_mps
  {
    cdr >> ros_message->lateral_velocity_mps;
  }

  // Field name: acceleration_mps2
  {
    cdr >> ros_message->acceleration_mps2;
  }

  // Field name: heading_rate_rps
  {
    cdr >> ros_message->heading_rate_rps;
  }

  // Field name: front_wheel_angle_rad
  {
    cdr >> ros_message->front_wheel_angle_rad;
  }

  // Field name: rear_wheel_angle_rad
  {
    cdr >> ros_message->rear_wheel_angle_rad;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_msgs
size_t get_serialized_size_autoware_auto_msgs__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryPoint__ros_msg_type * ros_message = static_cast<const _TrajectoryPoint__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_from_start

  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->time_from_start), current_alignment);
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading

  current_alignment += get_serialized_size_autoware_auto_msgs__msg__Complex32(
    &(ros_message->heading), current_alignment);
  // field.name longitudinal_velocity_mps
  {
    size_t item_size = sizeof(ros_message->longitudinal_velocity_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_velocity_mps
  {
    size_t item_size = sizeof(ros_message->lateral_velocity_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_mps2
  {
    size_t item_size = sizeof(ros_message->acceleration_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_rate_rps
  {
    size_t item_size = sizeof(ros_message->heading_rate_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wheel_angle_rad
  {
    size_t item_size = sizeof(ros_message->front_wheel_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_wheel_angle_rad
  {
    size_t item_size = sizeof(ros_message->rear_wheel_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryPoint__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_msgs__msg__TrajectoryPoint(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_msgs
size_t max_serialized_size_autoware_auto_msgs__msg__TrajectoryPoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time_from_start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Duration(
        full_bounded, current_alignment);
    }
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_msgs__msg__Complex32(
        full_bounded, current_alignment);
    }
  }
  // member: longitudinal_velocity_mps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral_velocity_mps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_mps2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_rate_rps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_wheel_angle_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_wheel_angle_rad
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrajectoryPoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_msgs__msg__TrajectoryPoint(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrajectoryPoint = {
  "autoware_auto_msgs::msg",
  "TrajectoryPoint",
  _TrajectoryPoint__cdr_serialize,
  _TrajectoryPoint__cdr_deserialize,
  _TrajectoryPoint__get_serialized_size,
  _TrajectoryPoint__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryPoint__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryPoint,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_msgs, msg, TrajectoryPoint)() {
  return &_TrajectoryPoint__type_support;
}

#if defined(__cplusplus)
}
#endif
