// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__FUNCTIONS_H_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tracked_object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tracked_object_msgs/msg/detail/object_types__struct.h"

/// Initialize msg/ObjectTypes message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tracked_object_msgs__msg__ObjectTypes
 * )) before or use
 * tracked_object_msgs__msg__ObjectTypes__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
bool
tracked_object_msgs__msg__ObjectTypes__init(tracked_object_msgs__msg__ObjectTypes * msg);

/// Finalize msg/ObjectTypes message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
void
tracked_object_msgs__msg__ObjectTypes__fini(tracked_object_msgs__msg__ObjectTypes * msg);

/// Create msg/ObjectTypes message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tracked_object_msgs__msg__ObjectTypes__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
tracked_object_msgs__msg__ObjectTypes *
tracked_object_msgs__msg__ObjectTypes__create();

/// Destroy msg/ObjectTypes message.
/**
 * It calls
 * tracked_object_msgs__msg__ObjectTypes__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
void
tracked_object_msgs__msg__ObjectTypes__destroy(tracked_object_msgs__msg__ObjectTypes * msg);


/// Initialize array of msg/ObjectTypes messages.
/**
 * It allocates the memory for the number of elements and calls
 * tracked_object_msgs__msg__ObjectTypes__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
bool
tracked_object_msgs__msg__ObjectTypes__Sequence__init(tracked_object_msgs__msg__ObjectTypes__Sequence * array, size_t size);

/// Finalize array of msg/ObjectTypes messages.
/**
 * It calls
 * tracked_object_msgs__msg__ObjectTypes__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
void
tracked_object_msgs__msg__ObjectTypes__Sequence__fini(tracked_object_msgs__msg__ObjectTypes__Sequence * array);

/// Create array of msg/ObjectTypes messages.
/**
 * It allocates the memory for the array and calls
 * tracked_object_msgs__msg__ObjectTypes__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
tracked_object_msgs__msg__ObjectTypes__Sequence *
tracked_object_msgs__msg__ObjectTypes__Sequence__create(size_t size);

/// Destroy array of msg/ObjectTypes messages.
/**
 * It calls
 * tracked_object_msgs__msg__ObjectTypes__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tracked_object_msgs
void
tracked_object_msgs__msg__ObjectTypes__Sequence__destroy(tracked_object_msgs__msg__ObjectTypes__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__FUNCTIONS_H_
