// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/GPSAdditionalData.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/gps_additional_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `position`
// Member `velocity_local_3d`
// Member `angular_acceleration_local_3d`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
cognata_sdk_ros2__msg__GPSAdditionalData__init(cognata_sdk_ros2__msg__GPSAdditionalData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__GPSAdditionalData__fini(msg);
    return false;
  }
  // speed
  // lane_width
  // lane_offset
  // position
  if (!geometry_msgs__msg__Vector3__init(&msg->position)) {
    cognata_sdk_ros2__msg__GPSAdditionalData__fini(msg);
    return false;
  }
  // velocity_local_3d
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity_local_3d)) {
    cognata_sdk_ros2__msg__GPSAdditionalData__fini(msg);
    return false;
  }
  // angular_acceleration_local_3d
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_acceleration_local_3d)) {
    cognata_sdk_ros2__msg__GPSAdditionalData__fini(msg);
    return false;
  }
  // lane_number
  // navigation_segment
  return true;
}

void
cognata_sdk_ros2__msg__GPSAdditionalData__fini(cognata_sdk_ros2__msg__GPSAdditionalData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // speed
  // lane_width
  // lane_offset
  // position
  geometry_msgs__msg__Vector3__fini(&msg->position);
  // velocity_local_3d
  geometry_msgs__msg__Vector3__fini(&msg->velocity_local_3d);
  // angular_acceleration_local_3d
  geometry_msgs__msg__Vector3__fini(&msg->angular_acceleration_local_3d);
  // lane_number
  // navigation_segment
}

cognata_sdk_ros2__msg__GPSAdditionalData *
cognata_sdk_ros2__msg__GPSAdditionalData__create()
{
  cognata_sdk_ros2__msg__GPSAdditionalData * msg = (cognata_sdk_ros2__msg__GPSAdditionalData *)malloc(sizeof(cognata_sdk_ros2__msg__GPSAdditionalData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__GPSAdditionalData));
  bool success = cognata_sdk_ros2__msg__GPSAdditionalData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__GPSAdditionalData__destroy(cognata_sdk_ros2__msg__GPSAdditionalData * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__GPSAdditionalData__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__init(cognata_sdk_ros2__msg__GPSAdditionalData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__GPSAdditionalData * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__GPSAdditionalData *)calloc(size, sizeof(cognata_sdk_ros2__msg__GPSAdditionalData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__GPSAdditionalData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__GPSAdditionalData__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__fini(cognata_sdk_ros2__msg__GPSAdditionalData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__GPSAdditionalData__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__GPSAdditionalData__Sequence *
cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__GPSAdditionalData__Sequence * array = (cognata_sdk_ros2__msg__GPSAdditionalData__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__GPSAdditionalData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__destroy(cognata_sdk_ros2__msg__GPSAdditionalData__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__GPSAdditionalData__Sequence__fini(array);
  }
  free(array);
}
