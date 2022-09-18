// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `centroid`
// Member `size`
// Member `corners`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `orientation`
#include "autoware_auto_msgs/msg/detail/quaternion32__functions.h"

bool
autoware_auto_msgs__msg__BoundingBox__init(autoware_auto_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point32__init(&msg->centroid)) {
    autoware_auto_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__init(&msg->size)) {
    autoware_auto_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // orientation
  if (!autoware_auto_msgs__msg__Quaternion32__init(&msg->orientation)) {
    autoware_auto_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // velocity
  msg->velocity = 0.0f;
  // heading
  msg->heading = 0.0f;
  // heading_rate
  msg->heading_rate = 0.0f;
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point32__init(&msg->corners[i])) {
      autoware_auto_msgs__msg__BoundingBox__fini(msg);
      return false;
    }
  }
  // variance
  // value
  // vehicle_label
  msg->vehicle_label = 0;
  // signal_label
  msg->signal_label = 0;
  // class_likelihood
  return true;
}

void
autoware_auto_msgs__msg__BoundingBox__fini(autoware_auto_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // centroid
  geometry_msgs__msg__Point32__fini(&msg->centroid);
  // size
  geometry_msgs__msg__Point32__fini(&msg->size);
  // orientation
  autoware_auto_msgs__msg__Quaternion32__fini(&msg->orientation);
  // velocity
  // heading
  // heading_rate
  // corners
  for (size_t i = 0; i < 4; ++i) {
    geometry_msgs__msg__Point32__fini(&msg->corners[i]);
  }
  // variance
  // value
  // vehicle_label
  // signal_label
  // class_likelihood
}

autoware_auto_msgs__msg__BoundingBox *
autoware_auto_msgs__msg__BoundingBox__create()
{
  autoware_auto_msgs__msg__BoundingBox * msg = (autoware_auto_msgs__msg__BoundingBox *)malloc(sizeof(autoware_auto_msgs__msg__BoundingBox));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__msg__BoundingBox));
  bool success = autoware_auto_msgs__msg__BoundingBox__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__msg__BoundingBox__destroy(autoware_auto_msgs__msg__BoundingBox * msg)
{
  if (msg) {
    autoware_auto_msgs__msg__BoundingBox__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__msg__BoundingBox__Sequence__init(autoware_auto_msgs__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__msg__BoundingBox * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__msg__BoundingBox *)calloc(size, sizeof(autoware_auto_msgs__msg__BoundingBox));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__msg__BoundingBox__fini(&data[i - 1]);
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
autoware_auto_msgs__msg__BoundingBox__Sequence__fini(autoware_auto_msgs__msg__BoundingBox__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__msg__BoundingBox__fini(&array->data[i]);
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

autoware_auto_msgs__msg__BoundingBox__Sequence *
autoware_auto_msgs__msg__BoundingBox__Sequence__create(size_t size)
{
  autoware_auto_msgs__msg__BoundingBox__Sequence * array = (autoware_auto_msgs__msg__BoundingBox__Sequence *)malloc(sizeof(autoware_auto_msgs__msg__BoundingBox__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__msg__BoundingBox__Sequence__destroy(autoware_auto_msgs__msg__BoundingBox__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__msg__BoundingBox__Sequence__fini(array);
  }
  free(array);
}
