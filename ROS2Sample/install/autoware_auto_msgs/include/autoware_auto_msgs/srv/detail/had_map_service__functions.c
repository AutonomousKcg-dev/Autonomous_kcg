// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:srv/HADMapService.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/srv/detail/had_map_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `requested_primitives`
// Member `geom_upper_bound`
// Member `geom_lower_bound`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
autoware_auto_msgs__srv__HADMapService_Request__init(autoware_auto_msgs__srv__HADMapService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // requested_primitives
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->requested_primitives, 0)) {
    autoware_auto_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  // geom_upper_bound
  if (!rosidl_runtime_c__double__Sequence__init(&msg->geom_upper_bound, 0)) {
    autoware_auto_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  // geom_lower_bound
  if (!rosidl_runtime_c__double__Sequence__init(&msg->geom_lower_bound, 0)) {
    autoware_auto_msgs__srv__HADMapService_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__srv__HADMapService_Request__fini(autoware_auto_msgs__srv__HADMapService_Request * msg)
{
  if (!msg) {
    return;
  }
  // requested_primitives
  rosidl_runtime_c__uint8__Sequence__fini(&msg->requested_primitives);
  // geom_upper_bound
  rosidl_runtime_c__double__Sequence__fini(&msg->geom_upper_bound);
  // geom_lower_bound
  rosidl_runtime_c__double__Sequence__fini(&msg->geom_lower_bound);
}

autoware_auto_msgs__srv__HADMapService_Request *
autoware_auto_msgs__srv__HADMapService_Request__create()
{
  autoware_auto_msgs__srv__HADMapService_Request * msg = (autoware_auto_msgs__srv__HADMapService_Request *)malloc(sizeof(autoware_auto_msgs__srv__HADMapService_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__srv__HADMapService_Request));
  bool success = autoware_auto_msgs__srv__HADMapService_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__srv__HADMapService_Request__destroy(autoware_auto_msgs__srv__HADMapService_Request * msg)
{
  if (msg) {
    autoware_auto_msgs__srv__HADMapService_Request__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__srv__HADMapService_Request__Sequence__init(autoware_auto_msgs__srv__HADMapService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__srv__HADMapService_Request * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__srv__HADMapService_Request *)calloc(size, sizeof(autoware_auto_msgs__srv__HADMapService_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__srv__HADMapService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__srv__HADMapService_Request__fini(&data[i - 1]);
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
autoware_auto_msgs__srv__HADMapService_Request__Sequence__fini(autoware_auto_msgs__srv__HADMapService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__srv__HADMapService_Request__fini(&array->data[i]);
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

autoware_auto_msgs__srv__HADMapService_Request__Sequence *
autoware_auto_msgs__srv__HADMapService_Request__Sequence__create(size_t size)
{
  autoware_auto_msgs__srv__HADMapService_Request__Sequence * array = (autoware_auto_msgs__srv__HADMapService_Request__Sequence *)malloc(sizeof(autoware_auto_msgs__srv__HADMapService_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__srv__HADMapService_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__srv__HADMapService_Request__Sequence__destroy(autoware_auto_msgs__srv__HADMapService_Request__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__srv__HADMapService_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `map`
#include "autoware_auto_msgs/msg/detail/had_map_bin__functions.h"

bool
autoware_auto_msgs__srv__HADMapService_Response__init(autoware_auto_msgs__srv__HADMapService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!autoware_auto_msgs__msg__HADMapBin__init(&msg->map)) {
    autoware_auto_msgs__srv__HADMapService_Response__fini(msg);
    return false;
  }
  // answer
  return true;
}

void
autoware_auto_msgs__srv__HADMapService_Response__fini(autoware_auto_msgs__srv__HADMapService_Response * msg)
{
  if (!msg) {
    return;
  }
  // map
  autoware_auto_msgs__msg__HADMapBin__fini(&msg->map);
  // answer
}

autoware_auto_msgs__srv__HADMapService_Response *
autoware_auto_msgs__srv__HADMapService_Response__create()
{
  autoware_auto_msgs__srv__HADMapService_Response * msg = (autoware_auto_msgs__srv__HADMapService_Response *)malloc(sizeof(autoware_auto_msgs__srv__HADMapService_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__srv__HADMapService_Response));
  bool success = autoware_auto_msgs__srv__HADMapService_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__srv__HADMapService_Response__destroy(autoware_auto_msgs__srv__HADMapService_Response * msg)
{
  if (msg) {
    autoware_auto_msgs__srv__HADMapService_Response__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__srv__HADMapService_Response__Sequence__init(autoware_auto_msgs__srv__HADMapService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__srv__HADMapService_Response * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__srv__HADMapService_Response *)calloc(size, sizeof(autoware_auto_msgs__srv__HADMapService_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__srv__HADMapService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__srv__HADMapService_Response__fini(&data[i - 1]);
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
autoware_auto_msgs__srv__HADMapService_Response__Sequence__fini(autoware_auto_msgs__srv__HADMapService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__srv__HADMapService_Response__fini(&array->data[i]);
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

autoware_auto_msgs__srv__HADMapService_Response__Sequence *
autoware_auto_msgs__srv__HADMapService_Response__Sequence__create(size_t size)
{
  autoware_auto_msgs__srv__HADMapService_Response__Sequence * array = (autoware_auto_msgs__srv__HADMapService_Response__Sequence *)malloc(sizeof(autoware_auto_msgs__srv__HADMapService_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__srv__HADMapService_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__srv__HADMapService_Response__Sequence__destroy(autoware_auto_msgs__srv__HADMapService_Response__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__srv__HADMapService_Response__Sequence__fini(array);
  }
  free(array);
}
