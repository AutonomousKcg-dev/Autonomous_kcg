// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/Float32MultiArrayDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/float32_multi_array_diagnostic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `diag_header`
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__functions.h"
// Member `diag_array`
#include "std_msgs/msg/detail/float32_multi_array__functions.h"

bool
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg)
{
  if (!msg) {
    return false;
  }
  // diag_header
  if (!autoware_auto_system_msgs__msg__DiagnosticHeader__init(&msg->diag_header)) {
    autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(msg);
    return false;
  }
  // diag_array
  if (!std_msgs__msg__Float32MultiArray__init(&msg->diag_array)) {
    autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg)
{
  if (!msg) {
    return;
  }
  // diag_header
  autoware_auto_system_msgs__msg__DiagnosticHeader__fini(&msg->diag_header);
  // diag_array
  std_msgs__msg__Float32MultiArray__fini(&msg->diag_array);
}

autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic *
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__create()
{
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg = (autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic *)malloc(sizeof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic));
  bool success = autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__destroy(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * msg)
{
  if (msg) {
    autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__init(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic * data = NULL;
  if (size) {
    data = (autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic *)calloc(size, sizeof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__fini(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence *
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__create(size_t size)
{
  autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array = (autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence *)malloc(sizeof(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__destroy(autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence * array)
{
  if (array) {
    autoware_auto_system_msgs__msg__Float32MultiArrayDiagnostic__Sequence__fini(array);
  }
  free(array);
}
