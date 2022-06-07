// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/traffic_light_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"
// Member `status`
// Member `bulb_status`
// Member `functioning_status`
// Member `behaviour`
// Member `traffic_signal_status`
#include "rosidl_runtime_c/string_functions.h"

bool
cognata_sdk_ros2__msg__TrafficLightMsg__init(cognata_sdk_ros2__msg__TrafficLightMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // description
  if (!cognata_sdk_ros2__msg__ObjectDescription__init(&msg->description)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // bulb_status
  if (!rosidl_runtime_c__String__init(&msg->bulb_status)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // functioning_status
  if (!rosidl_runtime_c__String__init(&msg->functioning_status)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // behaviour
  if (!rosidl_runtime_c__String__init(&msg->behaviour)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // traffic_signal_status
  if (!rosidl_runtime_c__String__init(&msg->traffic_signal_status)) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
    return false;
  }
  // azimuth_angle
  // facing
  return true;
}

void
cognata_sdk_ros2__msg__TrafficLightMsg__fini(cognata_sdk_ros2__msg__TrafficLightMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // description
  cognata_sdk_ros2__msg__ObjectDescription__fini(&msg->description);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // bulb_status
  rosidl_runtime_c__String__fini(&msg->bulb_status);
  // functioning_status
  rosidl_runtime_c__String__fini(&msg->functioning_status);
  // behaviour
  rosidl_runtime_c__String__fini(&msg->behaviour);
  // traffic_signal_status
  rosidl_runtime_c__String__fini(&msg->traffic_signal_status);
  // azimuth_angle
  // facing
}

cognata_sdk_ros2__msg__TrafficLightMsg *
cognata_sdk_ros2__msg__TrafficLightMsg__create()
{
  cognata_sdk_ros2__msg__TrafficLightMsg * msg = (cognata_sdk_ros2__msg__TrafficLightMsg *)malloc(sizeof(cognata_sdk_ros2__msg__TrafficLightMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__TrafficLightMsg));
  bool success = cognata_sdk_ros2__msg__TrafficLightMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__TrafficLightMsg__destroy(cognata_sdk_ros2__msg__TrafficLightMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__TrafficLightMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__TrafficLightMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__TrafficLightMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__TrafficLightMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__TrafficLightMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__TrafficLightMsg__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__fini(cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__TrafficLightMsg__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *
cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * array = (cognata_sdk_ros2__msg__TrafficLightMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__TrafficLightMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__destroy(cognata_sdk_ros2__msg__TrafficLightMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__TrafficLightMsg__Sequence__fini(array);
  }
  free(array);
}
