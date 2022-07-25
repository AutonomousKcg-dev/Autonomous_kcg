// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/PredictedObject.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/predicted_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `classification`
#include "autoware_auto_perception_msgs/msg/detail/object_classification__functions.h"
// Member `kinematics`
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__functions.h"
// Member `shape`
#include "autoware_auto_perception_msgs/msg/detail/shape__functions.h"

bool
autoware_auto_perception_msgs__msg__PredictedObject__init(autoware_auto_perception_msgs__msg__PredictedObject * msg)
{
  if (!msg) {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    autoware_auto_perception_msgs__msg__PredictedObject__fini(msg);
    return false;
  }
  // object_id
  // existence_probability
  // classification
  if (!autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__init(&msg->classification, 0)) {
    autoware_auto_perception_msgs__msg__PredictedObject__fini(msg);
    return false;
  }
  // kinematics
  if (!autoware_auto_perception_msgs__msg__PredictedObjectKinematics__init(&msg->kinematics)) {
    autoware_auto_perception_msgs__msg__PredictedObject__fini(msg);
    return false;
  }
  // shape
  if (!autoware_auto_perception_msgs__msg__Shape__Sequence__init(&msg->shape, 0)) {
    autoware_auto_perception_msgs__msg__PredictedObject__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__PredictedObject__fini(autoware_auto_perception_msgs__msg__PredictedObject * msg)
{
  if (!msg) {
    return;
  }
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // object_id
  // existence_probability
  // classification
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence__fini(&msg->classification);
  // kinematics
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics__fini(&msg->kinematics);
  // shape
  autoware_auto_perception_msgs__msg__Shape__Sequence__fini(&msg->shape);
}

autoware_auto_perception_msgs__msg__PredictedObject *
autoware_auto_perception_msgs__msg__PredictedObject__create()
{
  autoware_auto_perception_msgs__msg__PredictedObject * msg = (autoware_auto_perception_msgs__msg__PredictedObject *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__PredictedObject));
  bool success = autoware_auto_perception_msgs__msg__PredictedObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__PredictedObject__destroy(autoware_auto_perception_msgs__msg__PredictedObject * msg)
{
  if (msg) {
    autoware_auto_perception_msgs__msg__PredictedObject__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_perception_msgs__msg__PredictedObject__Sequence__init(autoware_auto_perception_msgs__msg__PredictedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_perception_msgs__msg__PredictedObject * data = NULL;
  if (size) {
    data = (autoware_auto_perception_msgs__msg__PredictedObject *)calloc(size, sizeof(autoware_auto_perception_msgs__msg__PredictedObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__PredictedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__PredictedObject__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__PredictedObject__Sequence__fini(autoware_auto_perception_msgs__msg__PredictedObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_perception_msgs__msg__PredictedObject__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__PredictedObject__Sequence *
autoware_auto_perception_msgs__msg__PredictedObject__Sequence__create(size_t size)
{
  autoware_auto_perception_msgs__msg__PredictedObject__Sequence * array = (autoware_auto_perception_msgs__msg__PredictedObject__Sequence *)malloc(sizeof(autoware_auto_perception_msgs__msg__PredictedObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__PredictedObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__PredictedObject__Sequence__destroy(autoware_auto_perception_msgs__msg__PredictedObject__Sequence * array)
{
  if (array) {
    autoware_auto_perception_msgs__msg__PredictedObject__Sequence__fini(array);
  }
  free(array);
}
