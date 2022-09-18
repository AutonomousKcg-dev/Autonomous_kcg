// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice
#include "autoware_auto_msgs/action/detail/plan_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sub_route`
#include "autoware_auto_msgs/msg/detail/route__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_Goal__init(autoware_auto_msgs__action__PlanTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sub_route
  if (!autoware_auto_msgs__msg__Route__init(&msg->sub_route)) {
    autoware_auto_msgs__action__PlanTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_Goal__fini(autoware_auto_msgs__action__PlanTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sub_route
  autoware_auto_msgs__msg__Route__fini(&msg->sub_route);
}

autoware_auto_msgs__action__PlanTrajectory_Goal *
autoware_auto_msgs__action__PlanTrajectory_Goal__create()
{
  autoware_auto_msgs__action__PlanTrajectory_Goal * msg = (autoware_auto_msgs__action__PlanTrajectory_Goal *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_Goal));
  bool success = autoware_auto_msgs__action__PlanTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_Goal__destroy(autoware_auto_msgs__action__PlanTrajectory_Goal * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_Goal * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_Goal *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_Goal__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_Goal__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `trajectory`
#include "autoware_auto_msgs/msg/detail/trajectory__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_Result__init(autoware_auto_msgs__action__PlanTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // trajectory
  if (!autoware_auto_msgs__msg__Trajectory__init(&msg->trajectory)) {
    autoware_auto_msgs__action__PlanTrajectory_Result__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_Result__fini(autoware_auto_msgs__action__PlanTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  // trajectory
  autoware_auto_msgs__msg__Trajectory__fini(&msg->trajectory);
}

autoware_auto_msgs__action__PlanTrajectory_Result *
autoware_auto_msgs__action__PlanTrajectory_Result__create()
{
  autoware_auto_msgs__action__PlanTrajectory_Result * msg = (autoware_auto_msgs__action__PlanTrajectory_Result *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_Result));
  bool success = autoware_auto_msgs__action__PlanTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_Result__destroy(autoware_auto_msgs__action__PlanTrajectory_Result * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_Result * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_Result *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_Result__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_Result__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_Result__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_Result__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


bool
autoware_auto_msgs__action__PlanTrajectory_Feedback__init(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // unused_variable
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // unused_variable
}

autoware_auto_msgs__action__PlanTrajectory_Feedback *
autoware_auto_msgs__action__PlanTrajectory_Feedback__create()
{
  autoware_auto_msgs__action__PlanTrajectory_Feedback * msg = (autoware_auto_msgs__action__PlanTrajectory_Feedback *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_Feedback));
  bool success = autoware_auto_msgs__action__PlanTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_Feedback__destroy(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_Feedback * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_Feedback *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "autoware_auto_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!autoware_auto_msgs__action__PlanTrajectory_Goal__init(&msg->goal)) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  autoware_auto_msgs__action__PlanTrajectory_Goal__fini(&msg->goal);
}

autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__create()
{
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request));
  bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__create()
{
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response));
  bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

autoware_auto_msgs__action__PlanTrajectory_GetResult_Request *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__create()
{
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Request *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request));
  bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Request *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "autoware_auto_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!autoware_auto_msgs__action__PlanTrajectory_Result__init(&msg->result)) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  autoware_auto_msgs__action__PlanTrajectory_Result__fini(&msg->result);
}

autoware_auto_msgs__action__PlanTrajectory_GetResult_Response *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__create()
{
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Response *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response));
  bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Response *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "autoware_auto_msgs/action/detail/plan_trajectory__functions.h"

bool
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!autoware_auto_msgs__action__PlanTrajectory_Feedback__init(&msg->feedback)) {
    autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(&msg->feedback);
}

autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage *
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__create()
{
  autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg = (autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage));
  bool success = autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__destroy(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage *)calloc(size, sizeof(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(&array->data[i]);
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

autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence *
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array = (autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
