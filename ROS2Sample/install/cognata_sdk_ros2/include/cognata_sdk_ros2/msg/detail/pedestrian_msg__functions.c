// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/PedestrianMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/pedestrian_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `description`
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"
// Member `pedestrian_velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
cognata_sdk_ros2__msg__PedestrianMsg__init(cognata_sdk_ros2__msg__PedestrianMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__PedestrianMsg__fini(msg);
    return false;
  }
  // description
  if (!cognata_sdk_ros2__msg__ObjectDescription__init(&msg->description)) {
    cognata_sdk_ros2__msg__PedestrianMsg__fini(msg);
    return false;
  }
  // pedestrian_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->pedestrian_velocity)) {
    cognata_sdk_ros2__msg__PedestrianMsg__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__PedestrianMsg__fini(cognata_sdk_ros2__msg__PedestrianMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // description
  cognata_sdk_ros2__msg__ObjectDescription__fini(&msg->description);
  // pedestrian_velocity
  geometry_msgs__msg__Vector3__fini(&msg->pedestrian_velocity);
}

cognata_sdk_ros2__msg__PedestrianMsg *
cognata_sdk_ros2__msg__PedestrianMsg__create()
{
  cognata_sdk_ros2__msg__PedestrianMsg * msg = (cognata_sdk_ros2__msg__PedestrianMsg *)malloc(sizeof(cognata_sdk_ros2__msg__PedestrianMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__PedestrianMsg));
  bool success = cognata_sdk_ros2__msg__PedestrianMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__PedestrianMsg__destroy(cognata_sdk_ros2__msg__PedestrianMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__PedestrianMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(cognata_sdk_ros2__msg__PedestrianMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__PedestrianMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__PedestrianMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__PedestrianMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__PedestrianMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__PedestrianMsg__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__PedestrianMsg__Sequence__fini(cognata_sdk_ros2__msg__PedestrianMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__PedestrianMsg__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__PedestrianMsg__Sequence *
cognata_sdk_ros2__msg__PedestrianMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__PedestrianMsg__Sequence * array = (cognata_sdk_ros2__msg__PedestrianMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__PedestrianMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__PedestrianMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__PedestrianMsg__Sequence__destroy(cognata_sdk_ros2__msg__PedestrianMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__PedestrianMsg__Sequence__fini(array);
  }
  free(array);
}
