// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/diagnostic_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data_stamp`
// Member `computation_start`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
autoware_auto_msgs__msg__DiagnosticHeader__init(autoware_auto_msgs__msg__DiagnosticHeader * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    autoware_auto_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // data_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->data_stamp)) {
    autoware_auto_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // computation_start
  if (!builtin_interfaces__msg__Time__init(&msg->computation_start)) {
    autoware_auto_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->runtime)) {
    autoware_auto_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // iterations
  return true;
}

void
autoware_auto_msgs__msg__DiagnosticHeader__fini(autoware_auto_msgs__msg__DiagnosticHeader * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // data_stamp
  builtin_interfaces__msg__Time__fini(&msg->data_stamp);
  // computation_start
  builtin_interfaces__msg__Time__fini(&msg->computation_start);
  // runtime
  builtin_interfaces__msg__Duration__fini(&msg->runtime);
  // iterations
}

autoware_auto_msgs__msg__DiagnosticHeader *
autoware_auto_msgs__msg__DiagnosticHeader__create()
{
  autoware_auto_msgs__msg__DiagnosticHeader * msg = (autoware_auto_msgs__msg__DiagnosticHeader *)malloc(sizeof(autoware_auto_msgs__msg__DiagnosticHeader));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__DiagnosticHeader));
  bool success = autoware_auto_msgs__msg__DiagnosticHeader__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__DiagnosticHeader__destroy(autoware_auto_msgs__msg__DiagnosticHeader * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__DiagnosticHeader__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__DiagnosticHeader__Sequence__init(autoware_auto_msgs__msg__DiagnosticHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__DiagnosticHeader * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__DiagnosticHeader *)calloc(size, sizeof(autoware_auto_msgs__msg__DiagnosticHeader));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__DiagnosticHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__DiagnosticHeader__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__DiagnosticHeader__Sequence__fini(autoware_auto_msgs__msg__DiagnosticHeader__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__DiagnosticHeader__fini(&array->data[i]);
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

autoware_auto_msgs__msg__DiagnosticHeader__Sequence *
autoware_auto_msgs__msg__DiagnosticHeader__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__DiagnosticHeader__Sequence * array = (autoware_auto_msgs__msg__DiagnosticHeader__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__DiagnosticHeader__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__DiagnosticHeader__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__DiagnosticHeader__Sequence__destroy(autoware_auto_msgs__msg__DiagnosticHeader__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__DiagnosticHeader__Sequence__fini(array);
  }
  free(array);
}
