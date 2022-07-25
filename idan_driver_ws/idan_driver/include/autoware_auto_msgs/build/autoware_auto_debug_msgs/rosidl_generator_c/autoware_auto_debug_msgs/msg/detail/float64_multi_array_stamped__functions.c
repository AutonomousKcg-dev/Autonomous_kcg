// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_debug_msgs:msg/Float64MultiArrayStamped.idl
// generated code does not contain a copyright notice
#include "autoware_auto_debug_msgs/msg/detail/float64_multi_array_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `layout`
#include "autoware_auto_debug_msgs/msg/detail/multi_array_layout__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__init(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(msg);
    return false;
  }
  // layout
  if (!autoware_auto_debug_msgs__msg__MultiArrayLayout__init(&msg->layout)) {
    autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__double__Sequence__init(&msg->data, 0)) {
    autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // layout
  autoware_auto_debug_msgs__msg__MultiArrayLayout__fini(&msg->layout);
  // data
  rosidl_runtime_c__double__Sequence__fini(&msg->data);
}

autoware_auto_debug_msgs__msg__Float64MultiArrayStamped *
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__create()
{
  autoware_auto_debug_msgs__msg__Float64MultiArrayStamped * msg = (autoware_auto_debug_msgs__msg__Float64MultiArrayStamped *)malloc(sizeof(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped));
  bool success = autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__destroy(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped * msg)
{
  if (msg) {
    autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__init(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_debug_msgs__msg__Float64MultiArrayStamped * data = NULL;
  if (size) {
    data = (autoware_auto_debug_msgs__msg__Float64MultiArrayStamped *)calloc(size, sizeof(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(&data[i - 1]);
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
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__fini(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__fini(&array->data[i]);
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

autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence *
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__create(size_t size)
{
  autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence * array = (autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence *)malloc(sizeof(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__destroy(autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence * array)
{
  if (array) {
    autoware_auto_debug_msgs__msg__Float64MultiArrayStamped__Sequence__fini(array);
  }
  free(array);
}
