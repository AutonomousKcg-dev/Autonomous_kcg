// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_perception_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.h"
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__functions.h"
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

#include "autoware_auto_perception_msgs/msg/detail/predicted_path__functions.h"  // predicted_paths
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"  // initial_acceleration
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"  // initial_pose
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"  // initial_twist

// forward declare type support functions
size_t get_serialized_size_autoware_auto_perception_msgs__msg__PredictedPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_perception_msgs__msg__PredictedPath(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, PredictedPath)();
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
size_t get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_auto_perception_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance)();
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


using _PredictedObjectKinematics__ros_msg_type = autoware_auto_perception_msgs__msg__PredictedObjectKinematics;

static bool _PredictedObjectKinematics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PredictedObjectKinematics__ros_msg_type * ros_message = static_cast<const _PredictedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_pose, cdr))
    {
      return false;
    }
  }

  // Field name: initial_twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_twist, cdr))
    {
      return false;
    }
  }

  // Field name: initial_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initial_acceleration, cdr))
    {
      return false;
    }
  }

  // Field name: predicted_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, PredictedPath
      )()->data);
    size_t size = ros_message->predicted_paths.size;
    auto array_ptr = ros_message->predicted_paths.data;
    if (size > 10) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
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

static bool _PredictedObjectKinematics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PredictedObjectKinematics__ros_msg_type * ros_message = static_cast<_PredictedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  // Field name: initial_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_pose))
    {
      return false;
    }
  }

  // Field name: initial_twist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, TwistWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_twist))
    {
      return false;
    }
  }

  // Field name: initial_acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, AccelWithCovariance
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initial_acceleration))
    {
      return false;
    }
  }

  // Field name: predicted_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, PredictedPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->predicted_paths.data) {
      autoware_auto_perception_msgs__msg__PredictedPath__Sequence__fini(&ros_message->predicted_paths);
    }
    if (!autoware_auto_perception_msgs__msg__PredictedPath__Sequence__init(&ros_message->predicted_paths, size)) {
      return "failed to create array for field 'predicted_paths'";
    }
    auto array_ptr = ros_message->predicted_paths.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t get_serialized_size_autoware_auto_perception_msgs__msg__PredictedObjectKinematics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PredictedObjectKinematics__ros_msg_type * ros_message = static_cast<const _PredictedObjectKinematics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initial_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseWithCovariance(
    &(ros_message->initial_pose), current_alignment);
  // field.name initial_twist

  current_alignment += get_serialized_size_geometry_msgs__msg__TwistWithCovariance(
    &(ros_message->initial_twist), current_alignment);
  // field.name initial_acceleration

  current_alignment += get_serialized_size_geometry_msgs__msg__AccelWithCovariance(
    &(ros_message->initial_acceleration), current_alignment);
  // field.name predicted_paths
  {
    size_t array_size = ros_message->predicted_paths.size;
    auto array_ptr = ros_message->predicted_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_autoware_auto_perception_msgs__msg__PredictedPath(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PredictedObjectKinematics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_perception_msgs__msg__PredictedObjectKinematics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_perception_msgs
size_t max_serialized_size_autoware_auto_perception_msgs__msg__PredictedObjectKinematics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: initial_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: initial_twist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__TwistWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: initial_acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__AccelWithCovariance(
        full_bounded, current_alignment);
    }
  }
  // member: predicted_paths
  {
    size_t array_size = 10;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_perception_msgs__msg__PredictedPath(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PredictedObjectKinematics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_perception_msgs__msg__PredictedObjectKinematics(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PredictedObjectKinematics = {
  "autoware_auto_perception_msgs::msg",
  "PredictedObjectKinematics",
  _PredictedObjectKinematics__cdr_serialize,
  _PredictedObjectKinematics__cdr_deserialize,
  _PredictedObjectKinematics__get_serialized_size,
  _PredictedObjectKinematics__max_serialized_size
};

static rosidl_message_type_support_t _PredictedObjectKinematics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PredictedObjectKinematics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_perception_msgs, msg, PredictedObjectKinematics)() {
  return &_PredictedObjectKinematics__type_support;
}

#if defined(__cplusplus)
}
#endif
