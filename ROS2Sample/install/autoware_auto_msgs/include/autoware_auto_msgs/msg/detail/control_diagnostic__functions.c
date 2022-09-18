// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/ControlDiagnostic.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/control_diagnostic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `diag_header`
#include "autoware_auto_msgs/msg/detail/diagnostic_header__functions.h"
// Member `trajectory_source`
// Member `pose_source`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_auto_msgs__msg__ControlDiagnostic__init(autoware_auto_msgs__msg__ControlDiagnostic * msg)
{
  if (!msg) {
    return false;
  }
  // diag_header
  if (!autoware_auto_msgs__msg__DiagnosticHeader__init(&msg->diag_header)) {
    autoware_auto_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // new_trajectory
  // trajectory_source
  if (!rosidl_runtime_c__String__init(&msg->trajectory_source)) {
    autoware_auto_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // pose_source
  if (!rosidl_runtime_c__String__init(&msg->pose_source)) {
    autoware_auto_msgs__msg__ControlDiagnostic__fini(msg);
    return false;
  }
  // lateral_error_m
  // longitudinal_error_m
  // velocity_error_mps
  // acceleration_error_mps2
  // yaw_error_rad
  // yaw_rate_error_rps
  return true;
}

void
autoware_auto_msgs__msg__ControlDiagnostic__fini(autoware_auto_msgs__msg__ControlDiagnostic * msg)
{
  if (!msg) {
    return;
  }
  // diag_header
  autoware_auto_msgs__msg__DiagnosticHeader__fini(&msg->diag_header);
  // new_trajectory
  // trajectory_source
  rosidl_runtime_c__String__fini(&msg->trajectory_source);
  // pose_source
  rosidl_runtime_c__String__fini(&msg->pose_source);
  // lateral_error_m
  // longitudinal_error_m
  // velocity_error_mps
  // acceleration_error_mps2
  // yaw_error_rad
  // yaw_rate_error_rps
}

autoware_auto_msgs__msg__ControlDiagnostic *
autoware_auto_msgs__msg__ControlDiagnostic__create()
{
  autoware_auto_msgs__msg__ControlDiagnostic * msg = (autoware_auto_msgs__msg__ControlDiagnostic *)malloc(sizeof(autoware_auto_msgs__msg__ControlDiagnostic));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__ControlDiagnostic));
  bool success = autoware_auto_msgs__msg__ControlDiagnostic__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__ControlDiagnostic__destroy(autoware_auto_msgs__msg__ControlDiagnostic * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__ControlDiagnostic__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__ControlDiagnostic__Sequence__init(autoware_auto_msgs__msg__ControlDiagnostic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__ControlDiagnostic * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__ControlDiagnostic *)calloc(size, sizeof(autoware_auto_msgs__msg__ControlDiagnostic));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__ControlDiagnostic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__ControlDiagnostic__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__ControlDiagnostic__Sequence__fini(autoware_auto_msgs__msg__ControlDiagnostic__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__ControlDiagnostic__fini(&array->data[i]);
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

autoware_auto_msgs__msg__ControlDiagnostic__Sequence *
autoware_auto_msgs__msg__ControlDiagnostic__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__ControlDiagnostic__Sequence * array = (autoware_auto_msgs__msg__ControlDiagnostic__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__ControlDiagnostic__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__ControlDiagnostic__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__ControlDiagnostic__Sequence__destroy(autoware_auto_msgs__msg__ControlDiagnostic__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__ControlDiagnostic__Sequence__fini(array);
  }
  free(array);
}
