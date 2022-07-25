// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `polygon`
#include "geometry_msgs/msg/detail/polygon__functions.h"

bool
autoware_auto_perception_msgs__msg__Shape__init(autoware_auto_perception_msgs__msg__Shape * msg)
{
  if (!msg) {
    return false;
  }
  // polygon
  if (!geometry_msgs__msg__Polygon__init(&msg->polygon)) {
    autoware_auto_perception_msgs__msg__Shape__fini(msg);
    return false;
  }
  // height
  return true;
}

void
autoware_auto_perception_msgs__msg__Shape__fini(autoware_auto_perception_msgs__msg__Shape * msg)
{
  if (!msg) {
    return;
  }
  // polygon
  geometry_msgs__msg__Polygon__fini(&msg->polygon);
  // height
}

autoware_auto_perception_msgs__msg__Shape *
autoware_auto_perception_msgs__msg__Shape__create()
{
  autoware_auto_perception_msgs__msg__Shape * msg = (autoware_auto_perception_msgs__msg__Shape *)malloc(sizeof(autoware_auto_perception_msgs__msg__Shape));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__Shape));
  bool success = autoware_auto_perception_msgs__msg__Shape__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__Shape__destroy(autoware_auto_perception_msgs__msg__Shape * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__Shape__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__Shape__Sequence__init(autoware_auto_perception_msgs__msg__Shape__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__Shape * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__Shape *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__Shape));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__Shape__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__Shape__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__Shape__Sequence__fini(autoware_auto_perception_msgs__msg__Shape__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__Shape__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__Shape__Sequence *
autoware_auto_perception_msgs__msg__Shape__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__Shape__Sequence * array = (autoware_auto_perception_msgs__msg__Shape__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__Shape__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__Shape__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__Shape__Sequence__destroy(autoware_auto_perception_msgs__msg__Shape__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__Shape__Sequence__fini(array);
  }
  free(array);
}
