// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/BoundingBoxMsg.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
cognata_sdk_ros2__msg__BoundingBoxMsg__init(cognata_sdk_ros2__msg__BoundingBoxMsg * msg)
{
  if (!msg) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__Transform__init(&msg->transform)) {
    cognata_sdk_ros2__msg__BoundingBoxMsg__fini(msg);
    return false;
  }
  // height
  // width
  // length
  return true;
}

void
cognata_sdk_ros2__msg__BoundingBoxMsg__fini(cognata_sdk_ros2__msg__BoundingBoxMsg * msg)
{
  if (!msg) {
    return;
  }
  // transform
  geometry_msgs__msg__Transform__fini(&msg->transform);
  // height
  // width
  // length
}

cognata_sdk_ros2__msg__BoundingBoxMsg *
cognata_sdk_ros2__msg__BoundingBoxMsg__create()
{
  cognata_sdk_ros2__msg__BoundingBoxMsg * msg = (cognata_sdk_ros2__msg__BoundingBoxMsg *)malloc(sizeof(cognata_sdk_ros2__msg__BoundingBoxMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__BoundingBoxMsg));
  bool success = cognata_sdk_ros2__msg__BoundingBoxMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__BoundingBoxMsg__destroy(cognata_sdk_ros2__msg__BoundingBoxMsg * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__BoundingBoxMsg__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__init(cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__BoundingBoxMsg * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__BoundingBoxMsg *)calloc(size, sizeof(cognata_sdk_ros2__msg__BoundingBoxMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__BoundingBoxMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__BoundingBoxMsg__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__fini(cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__BoundingBoxMsg__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence *
cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence * array = (cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__destroy(cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__BoundingBoxMsg__Sequence__fini(array);
  }
  free(array);
}
