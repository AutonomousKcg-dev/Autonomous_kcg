// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from additional_msgs:msg/CanPacket.idl
// generated code does not contain a copyright notice
#include "additional_msgs/msg/detail/can_packet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
additional_msgs__msg__CanPacket__init(additional_msgs__msg__CanPacket * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    additional_msgs__msg__CanPacket__fini(msg);
    return false;
  }
  // count
  msg->count = 0ul;
  // id
  // len
  // dat
  // flag
  // time
  return true;
}

void
additional_msgs__msg__CanPacket__fini(additional_msgs__msg__CanPacket * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // count
  // id
  // len
  // dat
  // flag
  // time
}

additional_msgs__msg__CanPacket *
additional_msgs__msg__CanPacket__create()
{
  additional_msgs__msg__CanPacket * msg = (additional_msgs__msg__CanPacket *)malloc(sizeof(additional_msgs__msg__CanPacket));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(additional_msgs__msg__CanPacket));
  bool success = additional_msgs__msg__CanPacket__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
additional_msgs__msg__CanPacket__destroy(additional_msgs__msg__CanPacket * msg)
{
  if (msg) {
    additional_msgs__msg__CanPacket__fini(msg);
  }
  free(msg);
}


bool
additional_msgs__msg__CanPacket__Sequence__init(additional_msgs__msg__CanPacket__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  additional_msgs__msg__CanPacket * data = NULL;
  if (size) {
    data = (additional_msgs__msg__CanPacket *)calloc(size, sizeof(additional_msgs__msg__CanPacket));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = additional_msgs__msg__CanPacket__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        additional_msgs__msg__CanPacket__fini(&data[i - 1]);
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
additional_msgs__msg__CanPacket__Sequence__fini(additional_msgs__msg__CanPacket__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      additional_msgs__msg__CanPacket__fini(&array->data[i]);
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

additional_msgs__msg__CanPacket__Sequence *
additional_msgs__msg__CanPacket__Sequence__create(size_t size)
{
  additional_msgs__msg__CanPacket__Sequence * array = (additional_msgs__msg__CanPacket__Sequence *)malloc(sizeof(additional_msgs__msg__CanPacket__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = additional_msgs__msg__CanPacket__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
additional_msgs__msg__CanPacket__Sequence__destroy(additional_msgs__msg__CanPacket__Sequence * array)
{
  if (array) {
    additional_msgs__msg__CanPacket__Sequence__fini(array);
  }
  free(array);
}
