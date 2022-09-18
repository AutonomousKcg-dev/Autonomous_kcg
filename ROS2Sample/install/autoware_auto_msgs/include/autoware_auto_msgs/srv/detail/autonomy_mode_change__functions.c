// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/srv/detail/autonomy_mode_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
autoware_auto_msgs__srv__AutonomyModeChange_Request__init(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Request__fini(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

autoware_auto_msgs__srv__AutonomyModeChange_Request *
autoware_auto_msgs__srv__AutonomyModeChange_Request__create()
{
  autoware_auto_msgs__srv__AutonomyModeChange_Request * msg = (autoware_auto_msgs__srv__AutonomyModeChange_Request *)malloc(sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Request));
  bool success = autoware_auto_msgs__srv__AutonomyModeChange_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Request__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg)
{
  if (msg) {
    autoware_auto_msgs__srv__AutonomyModeChange_Request__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__init(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__srv__AutonomyModeChange_Request * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__srv__AutonomyModeChange_Request *)calloc(size, sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__srv__AutonomyModeChange_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__srv__AutonomyModeChange_Request__fini(&data[i - 1]);
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
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__fini(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__srv__AutonomyModeChange_Request__fini(&array->data[i]);
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

autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence *
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__create(size_t size)
{
  autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array = (autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence *)malloc(sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `empty`
#include "std_msgs/msg/detail/empty__functions.h"

bool
autoware_auto_msgs__srv__AutonomyModeChange_Response__init(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg)
{
  if (!msg) {
    return false;
  }
  // empty
  if (!std_msgs__msg__Empty__init(&msg->empty)) {
    autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg)
{
  if (!msg) {
    return;
  }
  // empty
  std_msgs__msg__Empty__fini(&msg->empty);
}

autoware_auto_msgs__srv__AutonomyModeChange_Response *
autoware_auto_msgs__srv__AutonomyModeChange_Response__create()
{
  autoware_auto_msgs__srv__AutonomyModeChange_Response * msg = (autoware_auto_msgs__srv__AutonomyModeChange_Response *)malloc(sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Response));
  bool success = autoware_auto_msgs__srv__AutonomyModeChange_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Response__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg)
{
  if (msg) {
    autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__init(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__srv__AutonomyModeChange_Response * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__srv__AutonomyModeChange_Response *)calloc(size, sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__srv__AutonomyModeChange_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(&data[i - 1]);
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
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__fini(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(&array->data[i]);
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

autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence *
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__create(size_t size)
{
  autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array = (autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence *)malloc(sizeof(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__fini(array);
  }
  free(array);
}
