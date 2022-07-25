// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__struct.h"
#include "autoware_auto_planning_msgs/msg/detail/path_point_with_lane_id__functions.h"
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

#include "autoware_auto_planning_msgs/msg/detail/path_point__functions.h"  // point
#include "rosidl_runtime_c/primitives_sequence.h"  // lane_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // lane_ids

// forward declare type support functions
size_t get_serialized_size_autoware_auto_planning_msgs__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_auto_planning_msgs__msg__PathPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, msg, PathPoint)();


using _PathPointWithLaneId__ros_msg_type = autoware_auto_planning_msgs__msg__PathPointWithLaneId;

static bool _PathPointWithLaneId__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathPointWithLaneId__ros_msg_type * ros_message = static_cast<const _PathPointWithLaneId__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, msg, PathPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->point, cdr))
    {
      return false;
    }
  }

  // Field name: lane_ids
  {
    size_t size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PathPointWithLaneId__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathPointWithLaneId__ros_msg_type * ros_message = static_cast<_PathPointWithLaneId__ros_msg_type *>(untyped_ros_message);
  // Field name: point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, msg, PathPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->point))
    {
      return false;
    }
  }

  // Field name: lane_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lane_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->lane_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->lane_ids, size)) {
      return "failed to create array for field 'lane_ids'";
    }
    auto array_ptr = ros_message->lane_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_planning_msgs
size_t get_serialized_size_autoware_auto_planning_msgs__msg__PathPointWithLaneId(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathPointWithLaneId__ros_msg_type * ros_message = static_cast<const _PathPointWithLaneId__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name point

  current_alignment += get_serialized_size_autoware_auto_planning_msgs__msg__PathPoint(
    &(ros_message->point), current_alignment);
  // field.name lane_ids
  {
    size_t array_size = ros_message->lane_ids.size;
    auto array_ptr = ros_message->lane_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathPointWithLaneId__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_auto_planning_msgs__msg__PathPointWithLaneId(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_auto_planning_msgs
size_t max_serialized_size_autoware_auto_planning_msgs__msg__PathPointWithLaneId(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: point
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_auto_planning_msgs__msg__PathPoint(
        full_bounded, current_alignment);
    }
  }
  // member: lane_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PathPointWithLaneId__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_auto_planning_msgs__msg__PathPointWithLaneId(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PathPointWithLaneId = {
  "autoware_auto_planning_msgs::msg",
  "PathPointWithLaneId",
  _PathPointWithLaneId__cdr_serialize,
  _PathPointWithLaneId__cdr_deserialize,
  _PathPointWithLaneId__get_serialized_size,
  _PathPointWithLaneId__max_serialized_size
};

static rosidl_message_type_support_t _PathPointWithLaneId__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathPointWithLaneId,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, msg, PathPointWithLaneId)() {
  return &_PathPointWithLaneId__type_support;
}

#if defined(__cplusplus)
}
#endif
