// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/bounding_box_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `boxes`
#include "autoware_auto_msgs/msg/detail/bounding_box__functions.h"

bool
autoware_auto_msgs__msg__BoundingBoxArray__init(autoware_auto_msgs__msg__BoundingBoxArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_msgs__msg__BoundingBoxArray__fini(msg);
    return false;
  }
  // boxes
  if (!autoware_auto_msgs__msg__BoundingBox__Sequence__init(&msg->boxes, 0)) {
    autoware_auto_msgs__msg__BoundingBoxArray__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__msg__BoundingBoxArray__fini(autoware_auto_msgs__msg__BoundingBoxArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // boxes
  autoware_auto_msgs__msg__BoundingBox__Sequence__fini(&msg->boxes);
}

autoware_auto_msgs__msg__BoundingBoxArray *
autoware_auto_msgs__msg__BoundingBoxArray__create()
{
  autoware_auto_msgs__msg__BoundingBoxArray * msg = (autoware_auto_msgs__msg__BoundingBoxArray *)malloc(sizeof(autoware_auto_msgs__msg__BoundingBoxArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__BoundingBoxArray));
  bool success = autoware_auto_msgs__msg__BoundingBoxArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__BoundingBoxArray__destroy(autoware_auto_msgs__msg__BoundingBoxArray * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__BoundingBoxArray__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__init(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__BoundingBoxArray * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__BoundingBoxArray *)calloc(size, sizeof(autoware_auto_msgs__msg__BoundingBoxArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__BoundingBoxArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__BoundingBoxArray__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__fini(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__BoundingBoxArray__fini(&array->data[i]);
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

autoware_auto_msgs__msg__BoundingBoxArray__Sequence *
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array = (autoware_auto_msgs__msg__BoundingBoxArray__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__BoundingBoxArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__BoundingBoxArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__destroy(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__BoundingBoxArray__Sequence__fini(array);
  }
  free(array);
}
