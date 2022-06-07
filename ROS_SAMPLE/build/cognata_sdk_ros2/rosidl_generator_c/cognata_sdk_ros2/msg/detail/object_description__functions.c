// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cognata_sdk_ros2:msg/ObjectDescription.idl
// generated code does not contain a copyright notice
#include "cognata_sdk_ros2/msg/detail/object_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `object_id`
// Member `roi_type`
// Member `roi_subtype`
// Member `sensor_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `motion`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `bounding_box`
#include "cognata_sdk_ros2/msg/detail/bounding_box_msg__functions.h"

bool
cognata_sdk_ros2__msg__ObjectDescription__init(cognata_sdk_ros2__msg__ObjectDescription * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // roi_type
  if (!rosidl_runtime_c__String__init(&msg->roi_type)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // roi_subtype
  if (!rosidl_runtime_c__String__init(&msg->roi_subtype)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // motion
  if (!geometry_msgs__msg__Twist__init(&msg->motion)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // bounding_box
  if (!cognata_sdk_ros2__msg__BoundingBoxMsg__init(&msg->bounding_box)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  // sensor_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sensor_ids, 0)) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
    return false;
  }
  return true;
}

void
cognata_sdk_ros2__msg__ObjectDescription__fini(cognata_sdk_ros2__msg__ObjectDescription * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
  // roi_type
  rosidl_runtime_c__String__fini(&msg->roi_type);
  // roi_subtype
  rosidl_runtime_c__String__fini(&msg->roi_subtype);
  // motion
  geometry_msgs__msg__Twist__fini(&msg->motion);
  // bounding_box
  cognata_sdk_ros2__msg__BoundingBoxMsg__fini(&msg->bounding_box);
  // sensor_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->sensor_ids);
}

cognata_sdk_ros2__msg__ObjectDescription *
cognata_sdk_ros2__msg__ObjectDescription__create()
{
  cognata_sdk_ros2__msg__ObjectDescription * msg = (cognata_sdk_ros2__msg__ObjectDescription *)malloc(sizeof(cognata_sdk_ros2__msg__ObjectDescription));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cognata_sdk_ros2__msg__ObjectDescription));
  bool success = cognata_sdk_ros2__msg__ObjectDescription__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cognata_sdk_ros2__msg__ObjectDescription__destroy(cognata_sdk_ros2__msg__ObjectDescription * msg)
{
  if (msg) {
    cognata_sdk_ros2__msg__ObjectDescription__fini(msg);
  }
  free(msg);
}


bool
cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(cognata_sdk_ros2__msg__ObjectDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cognata_sdk_ros2__msg__ObjectDescription * data = NULL;
  if (size) {
    data = (cognata_sdk_ros2__msg__ObjectDescription *)calloc(size, sizeof(cognata_sdk_ros2__msg__ObjectDescription));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cognata_sdk_ros2__msg__ObjectDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cognata_sdk_ros2__msg__ObjectDescription__fini(&data[i - 1]);
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
cognata_sdk_ros2__msg__ObjectDescription__Sequence__fini(cognata_sdk_ros2__msg__ObjectDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cognata_sdk_ros2__msg__ObjectDescription__fini(&array->data[i]);
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

cognata_sdk_ros2__msg__ObjectDescription__Sequence *
cognata_sdk_ros2__msg__ObjectDescription__Sequence__create(size_t size)
{
  cognata_sdk_ros2__msg__ObjectDescription__Sequence * array = (cognata_sdk_ros2__msg__ObjectDescription__Sequence *)malloc(sizeof(cognata_sdk_ros2__msg__ObjectDescription__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cognata_sdk_ros2__msg__ObjectDescription__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cognata_sdk_ros2__msg__ObjectDescription__Sequence__destroy(cognata_sdk_ros2__msg__ObjectDescription__Sequence * array)
{
  if (array) {
    cognata_sdk_ros2__msg__ObjectDescription__Sequence__fini(array);
  }
  free(array);
}
