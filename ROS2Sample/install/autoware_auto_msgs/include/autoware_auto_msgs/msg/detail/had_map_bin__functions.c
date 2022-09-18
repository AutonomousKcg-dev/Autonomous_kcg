// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/HADMapBin.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/had_map_bin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `format_version`
// Member `map_version`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_msgs__msg__HADMapBin__init(autoware_auto_msgs__msg__HADMapBin * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_auto_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  // map_format
  // format_version
  if (!rosidl_runtime_c__String__init(&msg->format_version)) {
    autoware_auto_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->format_version, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  // map_version
  if (!rosidl_runtime_c__String__init(&msg->map_version)) {
    autoware_auto_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->map_version, "");
    if (!success) {
      goto abort_init_1;
    }
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    autoware_auto_msgs__msg__HADMapBin__fini(msg);
    return false;
  }
  return true;
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->format_version);
abort_init_0:
  return false;
}

void
autoware_auto_msgs__msg__HADMapBin__fini(autoware_auto_msgs__msg__HADMapBin * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // map_format
  // format_version
  rosidl_runtime_c__String__fini(&msg->format_version);
  // map_version
  rosidl_runtime_c__String__fini(&msg->map_version);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

autoware_auto_msgs__msg__HADMapBin *
autoware_auto_msgs__msg__HADMapBin__create()
{
  autoware_auto_msgs__msg__HADMapBin * msg = (autoware_auto_msgs__msg__HADMapBin *)malloc(sizeof(autoware_auto_msgs__msg__HADMapBin));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__HADMapBin));
  bool success = autoware_auto_msgs__msg__HADMapBin__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__HADMapBin__destroy(autoware_auto_msgs__msg__HADMapBin * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__HADMapBin__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__HADMapBin__Sequence__init(autoware_auto_msgs__msg__HADMapBin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__HADMapBin * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__HADMapBin *)calloc(size, sizeof(autoware_auto_msgs__msg__HADMapBin));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__HADMapBin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__HADMapBin__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__HADMapBin__Sequence__fini(autoware_auto_msgs__msg__HADMapBin__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__HADMapBin__fini(&array->data[i]);
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

autoware_auto_msgs__msg__HADMapBin__Sequence *
autoware_auto_msgs__msg__HADMapBin__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__HADMapBin__Sequence * array = (autoware_auto_msgs__msg__HADMapBin__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__HADMapBin__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__HADMapBin__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__HADMapBin__Sequence__destroy(autoware_auto_msgs__msg__HADMapBin__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__HADMapBin__Sequence__fini(array);
  }
  free(array);
}
