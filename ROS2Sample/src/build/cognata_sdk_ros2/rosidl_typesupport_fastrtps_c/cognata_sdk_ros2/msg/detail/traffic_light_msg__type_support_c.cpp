// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cognata_sdk_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__struct.h"
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"
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

#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"  // description
#include "rosidl_runtime_c/string.h"  // behaviour, bulb_status, functioning_status, status, traffic_signal_status
#include "rosidl_runtime_c/string_functions.h"  // behaviour, bulb_status, functioning_status, status, traffic_signal_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription)();
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


using _TrafficLightMsg__ros_msg_type = cognata_sdk_ros2__msg__TrafficLightMsg;

static bool _TrafficLightMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficLightMsg__ros_msg_type * ros_message = static_cast<const _TrafficLightMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->description, cdr))
    {
      return false;
    }
  }

  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
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

  // Field name: bulb_status
  {
    const rosidl_runtime_c__String * str = &ros_message->bulb_status;
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

  // Field name: functioning_status
  {
    const rosidl_runtime_c__String * str = &ros_message->functioning_status;
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

  // Field name: behaviour
  {
    const rosidl_runtime_c__String * str = &ros_message->behaviour;
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

  // Field name: traffic_signal_status
  {
    const rosidl_runtime_c__String * str = &ros_message->traffic_signal_status;
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

  // Field name: azimuth_angle
  {
    cdr << ros_message->azimuth_angle;
  }

  // Field name: facing
  {
    cdr << ros_message->facing;
  }

  return true;
}

static bool _TrafficLightMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficLightMsg__ros_msg_type * ros_message = static_cast<_TrafficLightMsg__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, ObjectDescription
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->description))
    {
      return false;
    }
  }

  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  // Field name: bulb_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bulb_status.data) {
      rosidl_runtime_c__String__init(&ros_message->bulb_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bulb_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bulb_status'\n");
      return false;
    }
  }

  // Field name: functioning_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->functioning_status.data) {
      rosidl_runtime_c__String__init(&ros_message->functioning_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->functioning_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'functioning_status'\n");
      return false;
    }
  }

  // Field name: behaviour
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->behaviour.data) {
      rosidl_runtime_c__String__init(&ros_message->behaviour);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->behaviour,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'behaviour'\n");
      return false;
    }
  }

  // Field name: traffic_signal_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->traffic_signal_status.data) {
      rosidl_runtime_c__String__init(&ros_message->traffic_signal_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->traffic_signal_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'traffic_signal_status'\n");
      return false;
    }
  }

  // Field name: azimuth_angle
  {
    cdr >> ros_message->azimuth_angle;
  }

  // Field name: facing
  {
    cdr >> ros_message->facing;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t get_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficLightMsg__ros_msg_type * ros_message = static_cast<const _TrafficLightMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name description

  current_alignment += get_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
    &(ros_message->description), current_alignment);
  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);
  // field.name bulb_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bulb_status.size + 1);
  // field.name functioning_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->functioning_status.size + 1);
  // field.name behaviour
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behaviour.size + 1);
  // field.name traffic_signal_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->traffic_signal_status.size + 1);
  // field.name azimuth_angle
  {
    size_t item_size = sizeof(ros_message->azimuth_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name facing
  {
    size_t item_size = sizeof(ros_message->facing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficLightMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cognata_sdk_ros2
size_t max_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
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
  // member: description
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_cognata_sdk_ros2__msg__ObjectDescription(
        full_bounded, current_alignment);
    }
  }
  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bulb_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: functioning_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: behaviour
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: traffic_signal_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: azimuth_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: facing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TrafficLightMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cognata_sdk_ros2__msg__TrafficLightMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TrafficLightMsg = {
  "cognata_sdk_ros2::msg",
  "TrafficLightMsg",
  _TrafficLightMsg__cdr_serialize,
  _TrafficLightMsg__cdr_deserialize,
  _TrafficLightMsg__get_serialized_size,
  _TrafficLightMsg__max_serialized_size
};

static rosidl_message_type_support_t _TrafficLightMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficLightMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cognata_sdk_ros2, msg, TrafficLightMsg)() {
  return &_TrafficLightMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
