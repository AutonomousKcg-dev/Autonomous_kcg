// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__functions.h"
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

#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"  // acceleration
#include "geometry_msgs/msg/detail/point__functions.h"  // centroid_position
#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"  // twist

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance)();


using _TrackedObjectKinematics__ros_msg_type = autoware_auto_perception_msgs__msg__TrackedObjectKinematics;

static bool _TrackedObjectKinematics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrackedObjectKinematics__ros_msg_type * ros_message = static_cast<const _TrackedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  // Field name: centroid_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->centroid_position, cdr))
    {
      return false;
    }
  }

  // Field name: position_covariance
  {
    size_t size = 9;
    auto array_ptr = ros_message->position_covariance;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->orientation, cdr))
    {
      return false;
    }
  }

  // Field name: orientation_availability
  {
    cdr << ros_message->orientation_availability;
  }

  // Field name: twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->twist, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: is_stationary
  {
    cdr << (ros_message->is_stationary ? true : false);
  }

  return true;
}

static bool _TrackedObjectKinematics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrackedObjectKinematics__ros_msg_type * ros_message = static_cast<_TrackedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  // Field name: centroid_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->centroid_position))
    {
      return false;
    }
  }

  // Field name: position_covariance
  {
    size_t size = 9;
    auto array_ptr = ros_message->position_covariance;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->orientation))
    {
      return false;
    }
  }

  // Field name: orientation_availability
  {
    cdr >> ros_message->orientation_availability;
  }

  // Field name: twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->twist))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration))
    {
      return false;
    }
  }

  // Field name: is_stationary
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_stationary = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrackedObjectKinematics__ros_msg_type * ros_message = static_cast<const _TrackedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name centroid_position

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->centroid_position), current_alignment);
  // field.name position_covariance
  {
    size_t array_size = 9;
    auto array_ptr = ros_message->position_covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation

  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);
  // field.name orientation_availability
  {
    size_t item_size = sizeof(ros_message->orientation_availability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twist

  current_alignment += get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->twist), current_alignment);
  // field.name acceleration

  current_alignment += get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
    &(ros_message->acceleration), current_alignment);
  // field.name is_stationary
  {
    size_t item_size = sizeof(ros_message->is_stationary);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrackedObjectKinematics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: centroid_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: position_covariance
  {
    size_t array_size = 9;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Quaternion(
        full_bounded, current_alignment);
    }
  }
  // member: orientation_availability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: is_stationary
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TrackedObjectKinematics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_perception_msgs__msg__TrackedObjectKinematics(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrackedObjectKinematics = {
  "autoware_auto_perception_msgs::msg",
  "TrackedObjectKinematics",
  _TrackedObjectKinematics__cdr_serialize,
  _TrackedObjectKinematics__cdr_deserialize,
  _TrackedObjectKinematics__get_serialized_size,
  _TrackedObjectKinematics__max_serialized_size
};

static rosidl_message_type_support_t _TrackedObjectKinematics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrackedObjectKinematics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, TrackedObjectKinematics)() {
  return &_TrackedObjectKinematics__type_support;
}

#if defined(__cplusplus)
}
#endif
