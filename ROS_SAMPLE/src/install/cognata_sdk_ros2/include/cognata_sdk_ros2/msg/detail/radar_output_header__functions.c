// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/radar_output_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radar_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `radar_placement`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `targets`
#include "cognata_sdk_ros2/msg/detail/radar_output_target__functions.h"

bool
cognata_sdk_ros2__msg__RadarOutputHeader__init(cognata_sdk_ros2__msg__RadarOutputHeader * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__RadarOutputHeader__fini(msg);
    return false;
  }
  // radar_id
  if (!rosidl_runtime_c__String__init(&msg->radar_id)) {
    cognata_sdk_ros2__msg__RadarOutputHeader__fini(msg);
    return false;
  }
  // radar_placement
  if (!geometry_msgs__msg__Twist__init(&msg->radar_placement)) {
    cognata_sdk_ros2__msg__RadarOutputHeader__fini(msg);
    return false;
  }
  // h_fov
  // v_fov
  // targets
  if (!cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__init(&msg->targets, 0)) {
    cognata_sdk_ros2__msg__RadarOutputHeader__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__RadarOutputHeader__fini(cognata_sdk_ros2__msg__RadarOutputHeader * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radar_id
  rosidl_runtime_c__String__fini(&msg->radar_id);
  // radar_placement
  geometry_msgs__msg__Twist__fini(&msg->radar_placement);
  // h_fov
  // v_fov
  // targets
  cognata_sdk_ros2__msg__RadarOutputTarget__Sequence__fini(&msg->targets);
}

cognata_sdk_ros2__msg__RadarOutputHeader *
cognata_sdk_ros2__msg__RadarOutputHeader__create()
{
  cognata_sdk_ros2__msg__RadarOutputHeader * msg = (cognata_sdk_ros2__msg__RadarOutputHeader *)malloc(sizeof(cognata_sdk_ros2__msg__RadarOutputHeader));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__RadarOutputHeader));
  bool success = cognata_sdk_ros2__msg__RadarOutputHeader__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__RadarOutputHeader__destroy(cognata_sdk_ros2__msg__RadarOutputHeader * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__RadarOutputHeader__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__init(cognata_sdk_ros2__msg__RadarOutputHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__RadarOutputHeader * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__RadarOutputHeader *)calloc(size, sizeof(cognata_sdk_ros2__msg__RadarOutputHeader));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__RadarOutputHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__RadarOutputHeader__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__fini(cognata_sdk_ros2__msg__RadarOutputHeader__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__RadarOutputHeader__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__RadarOutputHeader__Sequence *
cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__RadarOutputHeader__Sequence * array = (cognata_sdk_ros2__msg__RadarOutputHeader__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__RadarOutputHeader__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__destroy(cognata_sdk_ros2__msg__RadarOutputHeader__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__RadarOutputHeader__Sequence__fini(array);
  }
  free(array);
}
