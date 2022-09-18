// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/map_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `primitive_type`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_auto_msgs__msg__MapPrimitive__init(autoware_auto_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // primitive_type
  if (!rosidl_runtime_c__String__init(&msg->primitive_type)) {
    autoware_auto_msgs__msg__MapPrimitive__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->primitive_type, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
autoware_auto_msgs__msg__MapPrimitive__fini(autoware_auto_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // id
  // primitive_type
  rosidl_runtime_c__String__fini(&msg->primitive_type);
}

autoware_auto_msgs__msg__MapPrimitive *
autoware_auto_msgs__msg__MapPrimitive__create()
{
  autoware_auto_msgs__msg__MapPrimitive * msg = (autoware_auto_msgs__msg__MapPrimitive *)malloc(sizeof(autoware_auto_msgs__msg__MapPrimitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__MapPrimitive));
  bool success = autoware_auto_msgs__msg__MapPrimitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__MapPrimitive__destroy(autoware_auto_msgs__msg__MapPrimitive * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__MapPrimitive__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__MapPrimitive__Sequence__init(autoware_auto_msgs__msg__MapPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__MapPrimitive * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__MapPrimitive *)calloc(size, sizeof(autoware_auto_msgs__msg__MapPrimitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__MapPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__MapPrimitive__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__MapPrimitive__Sequence__fini(autoware_auto_msgs__msg__MapPrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__MapPrimitive__fini(&array->data[i]);
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

autoware_auto_msgs__msg__MapPrimitive__Sequence *
autoware_auto_msgs__msg__MapPrimitive__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__MapPrimitive__Sequence * array = (autoware_auto_msgs__msg__MapPrimitive__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__MapPrimitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__MapPrimitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__MapPrimitive__Sequence__destroy(autoware_auto_msgs__msg__MapPrimitive__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__MapPrimitive__Sequence__fini(array);
  }
  free(array);
}
