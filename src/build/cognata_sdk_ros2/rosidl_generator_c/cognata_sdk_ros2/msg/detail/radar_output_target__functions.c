// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/radar_output_target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
cognata_sdk_ros2__msg__RadarOutputTarget__init(cognata_sdk_ros2__msg__RadarOutputTarget * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__RadarOutputTarget__fini(msg);
    return false;
  }
  // id
  // time_stamp
  // range
  // azimuth
  // elevation
  // range_rate
  // amplitude
  // is_aggregate
  // tracking_status
  // age
  // last_seen
  // is_stationary
  // is_ghost
  return true;
}

void
cognata_sdk_ros2__msg__RadarOutputTarget__fini(cognata_sdk_ros2__msg__RadarOutputTarget * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // time_stamp
  // range
  // azimuth
  // elevation
  // range_rate
  // amplitude
  // is_aggregate
  // tracking_status
  // age
  // last_seen
  // is_stationary
  // is_ghost
}

cognata_sdk_ros2__msg__RadarOutputTarget *
cognata_sdk_ros2__msg__RadarOutputTarget__create()
{
  cognata_sdk_ros2__msg__RadarOutputTarget * msg = (cognata_sdk_ros2__msg__RadarOutputTarget *)malloc(sizeof(cognata_sdk_ros2__msg__RadarOutputTarget));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__RadarOutputTarget));
  bool success = cognata_sdk_ros2__msg__RadarOutputTarget__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__RadarOutputTarget__destroy(cognata_sdk_ros2__msg__RadarOutputTarget * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__RadarOutputTarget__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__RadarOutputTarget * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__RadarOutputTarget *)calloc(size, sizeof(cognata_sdk_ros2__msg__RadarOutputTarget));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__RadarOutputTarget__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__RadarOutputTarget__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__RadarOutputTarget__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array = (cognata_sdk_ros2__msg__RadarOutputTarget__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__destroy(cognata_sdk_ros2__msg__RadarOutputTarget__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(array);
  }
  free(array);
}
