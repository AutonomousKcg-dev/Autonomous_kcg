// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/radar_output_header__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__struct.h"
#include "cognata_sdk_ros2/msg/detail/radar_output_header__functions.h"
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

#include "cognata_sdk_ros2/msg/detail/radar_output_target__functions.h"  // targets
#include "geometry_msgs/msg/detail/twist__functions.h"  // radar_placement
#include "rosidl_runtime_c/string.h"  // radar_id
#include "rosidl_runtime_c/string_functions.h"  // radar_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cognata_sdk_ros2__msg__RadarOutputTarget(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__RadarOutputTarget(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, RadarOutputTarget)();
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


using _RadarOutputHeader__ros_msg_type = cognata_sdk_ros2__msg__RadarOutputHeader;

static bool _RadarOutputHeader__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarOutputHeader__ros_msg_type * ros_message = static_cast<const _RadarOutputHeader__ros_msg_type *>(untyped_ros_message);
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

  // Field name: radar_id
  {
    const rosidl_runtime_c__String * str = &ros_message->radar_id;
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

  // Field name: radar_placement
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->radar_placement, cdr))
    {
      return false;
    }
  }

  // Field name: h_fov
  {
    cdr << ros_message->h_fov;
  }

  // Field name: v_fov
  {
    cdr << ros_message->v_fov;
  }

  // Field name: targets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, RadarOutputTarget
      )()->data);
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
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

static bool _RadarOutputHeader__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarOutputHeader__ros_msg_type * ros_message = static_cast<_RadarOutputHeader__ros_msg_type *>(untyped_ros_message);
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

  // Field name: radar_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->radar_id.data) {
      rosidl_runtime_c__String__init(&ros_message->radar_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->radar_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'radar_id'\n");
      return false;
    }
  }

  // Field name: radar_placement
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->radar_placement))
    {
      return false;
    }
  }

  // Field name: h_fov
  {
    cdr >> ros_message->h_fov;
  }

  // Field name: v_fov
  {
    cdr >> ros_message->v_fov;
  }

  // Field name: targets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, RadarOutputTarget
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->targets.data) {
      cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(&ros_message->targets);
    }
    if (!cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(&ros_message->targets, size)) {
      return "failed to create array for field 'targets'";
    }
    auto array_ptr = ros_message->targets.data;
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
size_t get_serialized_size_cognata_sdk_ros2__msg__RadarOutputHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarOutputHeader__ros_msg_type * ros_message = static_cast<const _RadarOutputHeader__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name radar_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->radar_id.size + 1);
  // field.name radar_placement

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->radar_placement), current_alignment);
  // field.name h_fov
  {
    size_t item_size = sizeof(ros_message->h_fov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_fov
  {
    size_t item_size = sizeof(ros_message->v_fov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name targets
  {
    size_t array_size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_cognata_sdk_ros2__msg__RadarOutputTarget(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarOutputHeader__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__RadarOutputHeader(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__RadarOutputHeader(
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
  // member: radar_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: radar_placement
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Twist(
        full_bounded, current_alignment);
    }
  }
  // member: h_fov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_fov
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__RadarOutputTarget(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RadarOutputHeader__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__RadarOutputHeader(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RadarOutputHeader = {
  "cognata_sdk_ros2::msg",
  "RadarOutputHeader",
  _RadarOutputHeader__cdr_serialize,
  _RadarOutputHeader__cdr_deserialize,
  _RadarOutputHeader__get_serialized_size,
  _RadarOutputHeader__max_serialized_size
};

static rosidl_message_type_support_t _RadarOutputHeader__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarOutputHeader,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, RadarOutputHeader)() {
  return &_RadarOutputHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
