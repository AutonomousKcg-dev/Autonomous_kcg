// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/WheelMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/wheel_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `relative_position`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
cognata_sdk_ros2__msg__WheelMsg__init(cognata_sdk_ros2__msg__WheelMsg * msg)
{
  if (!msg) {
    return false;
  }
  // relative_position
  if (!geometry_msgs__msg__Vector3__init(&msg->relative_position)) {
    cognata_sdk_ros2__msg__WheelMsg__fini(msg);
    return false;
  }
  // steering_angle
  // rotate_angle
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cognata_sdk_ros2__msg__WheelMsg__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__WheelMsg__fini(cognata_sdk_ros2__msg__WheelMsg * msg)
{
  if (!msg) {
    return;
  }
  // relative_position
  geometry_msgs__msg__Vector3__fini(&msg->relative_position);
  // steering_angle
  // rotate_angle
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

cognata_sdk_ros2__msg__WheelMsg *
cognata_sdk_ros2__msg__WheelMsg__create()
{
  cognata_sdk_ros2__msg__WheelMsg * msg = (cognata_sdk_ros2__msg__WheelMsg *)malloc(sizeof(cognata_sdk_ros2__msg__WheelMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__WheelMsg));
  bool success = cognata_sdk_ros2__msg__WheelMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__WheelMsg__destroy(cognata_sdk_ros2__msg__WheelMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__WheelMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__WheelMsg__Sequence__init(cognata_sdk_ros2__msg__WheelMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__WheelMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__WheelMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__WheelMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__WheelMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__WheelMsg__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__WheelMsg__Sequence__fini(cognata_sdk_ros2__msg__WheelMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__WheelMsg__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__WheelMsg__Sequence *
cognata_sdk_ros2__msg__WheelMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__WheelMsg__Sequence * array = (cognata_sdk_ros2__msg__WheelMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__WheelMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__WheelMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__WheelMsg__Sequence__destroy(cognata_sdk_ros2__msg__WheelMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__WheelMsg__Sequence__fini(array);
  }
  free(array);
}
