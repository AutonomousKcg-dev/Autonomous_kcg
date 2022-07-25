// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_debug_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice
#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `dim`
#include "autoware_auto_debug_msgs/msg/detail/multi_array_dimension__functions.h"

bool
autoware_auto_debug_msgs__msg__MultiArrayLayout__init(autoware_auto_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (!msg) {
    return false;
  }
  // dim
  if (!autoware_auto_debug_msgs__msg__MultiArrayDimension__Sequence__init(&msg->dim, 0)) {
    autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(msg);
    return false;
  }
  // data_offset
  return true;
}

void
autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(autoware_auto_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (!msg) {
    return;
  }
  // dim
  autoware_auto_debug_msgs__msg__MultiArrayDimension__Sequence__fini(&msg->dim);
  // data_offset
}

autoware_auto_debug_msgs__msg__MultiArrayLayout *
autoware_auto_debug_msgs__msg__MultiArrayLayout__create()
{
  autoware_auto_debug_msgs__msg__MultiArrayLayout * msg = (autoware_auto_debug_msgs__msg__MultiArrayLayout *)malloc(sizeof(autoware_auto_debug_msgs__msg__MultiArrayLayout));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_debug_msgs__msg__MultiArrayLayout));
  bool success = autoware_auto_debug_msgs__msg__MultiArrayLayout__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_debug_msgs__msg__MultiArrayLayout__destroy(autoware_auto_debug_msgs__msg__MultiArrayLayout * msg)
{
  if (msg) {
    autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__init(autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_debug_msgs__msg__MultiArrayLayout * data = NULL;
  if (size) {
    data = (autoware_auto_debug_msgs__msg__MultiArrayLayout *)calloc(size, sizeof(autoware_auto_debug_msgs__msg__MultiArrayLayout));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_debug_msgs__msg__MultiArrayLayout__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(&data[i - 1]);
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
autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__fini(autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(&array->data[i]);
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

autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence *
autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__create(size_t size)
{
  autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence * array = (autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence *)malloc(sizeof(autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__destroy(autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence * array)
{
  if (array) {
    autoware_auto_debug_msgs__msg__MultiArrayLayout__Sequence__fini(array);
  }
  free(array);
}
