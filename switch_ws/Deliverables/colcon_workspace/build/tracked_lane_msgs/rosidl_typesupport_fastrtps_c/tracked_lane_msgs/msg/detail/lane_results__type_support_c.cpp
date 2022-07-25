// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tracked_lane_msgs:msg/LaneResults.idl
// generated code does not contain a copyright notice
#include "tracked_lane_msgs/msg/detail/lane_results__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tracked_lane_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tracked_lane_msgs/msg/detail/lane_results__struct.h"
#include "tracked_lane_msgs/msg/detail/lane_results__functions.h"
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

#include "rosidl_runtime_c/string.h"  // algo_description
#include "rosidl_runtime_c/string_functions.h"  // algo_description
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "tracked_lane_msgs/msg/detail/lane__functions.h"  // adjacent_left, adjacent_right, ego_lane, road_boundary

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_lane_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_lane_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tracked_lane_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();
size_t get_serialized_size_tracked_lane_msgs__msg__Lane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tracked_lane_msgs__msg__Lane(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane)();


using _LaneResults__ros_msg_type = tracked_lane_msgs__msg__LaneResults;

static bool _LaneResults__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaneResults__ros_msg_type * ros_message = static_cast<const _LaneResults__ros_msg_type *>(untyped_ros_message);
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

  // Field name: adjacent_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    size_t size = ros_message->adjacent_left.size;
    auto array_ptr = ros_message->adjacent_left.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: num_adjacent_left
  {
    cdr << ros_message->num_adjacent_left;
  }

  // Field name: adjacent_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    size_t size = ros_message->adjacent_right.size;
    auto array_ptr = ros_message->adjacent_right.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: num_adjacent_right
  {
    cdr << ros_message->num_adjacent_right;
  }

  // Field name: ego_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ego_lane, cdr))
    {
      return false;
    }
  }

  // Field name: road_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->road_boundary, cdr))
    {
      return false;
    }
  }

  // Field name: total_number_of_lanes
  {
    cdr << ros_message->total_number_of_lanes;
  }

  // Field name: algo_description
  {
    const rosidl_runtime_c__String * str = &ros_message->algo_description;
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

  return true;
}

static bool _LaneResults__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaneResults__ros_msg_type * ros_message = static_cast<_LaneResults__ros_msg_type *>(untyped_ros_message);
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

  // Field name: adjacent_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->adjacent_left.data) {
      tracked_lane_msgs__msg__Lane__Sequence__fini(&ros_message->adjacent_left);
    }
    if (!tracked_lane_msgs__msg__Lane__Sequence__init(&ros_message->adjacent_left, size)) {
      return "failed to create array for field 'adjacent_left'";
    }
    auto array_ptr = ros_message->adjacent_left.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: num_adjacent_left
  {
    cdr >> ros_message->num_adjacent_left;
  }

  // Field name: adjacent_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->adjacent_right.data) {
      tracked_lane_msgs__msg__Lane__Sequence__fini(&ros_message->adjacent_right);
    }
    if (!tracked_lane_msgs__msg__Lane__Sequence__init(&ros_message->adjacent_right, size)) {
      return "failed to create array for field 'adjacent_right'";
    }
    auto array_ptr = ros_message->adjacent_right.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: num_adjacent_right
  {
    cdr >> ros_message->num_adjacent_right;
  }

  // Field name: ego_lane
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ego_lane))
    {
      return false;
    }
  }

  // Field name: road_boundary
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, Lane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->road_boundary))
    {
      return false;
    }
  }

  // Field name: total_number_of_lanes
  {
    cdr >> ros_message->total_number_of_lanes;
  }

  // Field name: algo_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->algo_description.data) {
      rosidl_runtime_c__String__init(&ros_message->algo_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->algo_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'algo_description'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_lane_msgs
size_t get_serialized_size_tracked_lane_msgs__msg__LaneResults(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaneResults__ros_msg_type * ros_message = static_cast<const _LaneResults__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name adjacent_left
  {
    size_t array_size = ros_message->adjacent_left.size;
    auto array_ptr = ros_message->adjacent_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tracked_lane_msgs__msg__Lane(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name num_adjacent_left
  {
    size_t item_size = sizeof(ros_message->num_adjacent_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adjacent_right
  {
    size_t array_size = ros_message->adjacent_right.size;
    auto array_ptr = ros_message->adjacent_right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tracked_lane_msgs__msg__Lane(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name num_adjacent_right
  {
    size_t item_size = sizeof(ros_message->num_adjacent_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ego_lane

  current_alignment += get_serialized_size_tracked_lane_msgs__msg__Lane(
    &(ros_message->ego_lane), current_alignment);
  // field.name road_boundary

  current_alignment += get_serialized_size_tracked_lane_msgs__msg__Lane(
    &(ros_message->road_boundary), current_alignment);
  // field.name total_number_of_lanes
  {
    size_t item_size = sizeof(ros_message->total_number_of_lanes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algo_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->algo_description.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _LaneResults__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tracked_lane_msgs__msg__LaneResults(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tracked_lane_msgs
size_t max_serialized_size_tracked_lane_msgs__msg__LaneResults(
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
  // member: adjacent_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Lane(
        full_bounded, current_alignment);
    }
  }
  // member: num_adjacent_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adjacent_right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Lane(
        full_bounded, current_alignment);
    }
  }
  // member: num_adjacent_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ego_lane
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Lane(
        full_bounded, current_alignment);
    }
  }
  // member: road_boundary
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tracked_lane_msgs__msg__Lane(
        full_bounded, current_alignment);
    }
  }
  // member: total_number_of_lanes
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algo_description
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

static size_t _LaneResults__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tracked_lane_msgs__msg__LaneResults(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LaneResults = {
  "tracked_lane_msgs::msg",
  "LaneResults",
  _LaneResults__cdr_serialize,
  _LaneResults__cdr_deserialize,
  _LaneResults__get_serialized_size,
  _LaneResults__max_serialized_size
};

static rosidl_message_type_support_t _LaneResults__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaneResults,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tracked_lane_msgs, msg, LaneResults)() {
  return &_LaneResults__type_support;
}

#if defined(__cplusplus)
}
#endif
