// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from additional_msgs:msg/Friction.idl
// generated code does not contain a copyright notice

#ifndef ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__FUNCTIONS_H_
#define ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "additional_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "additional_msgs/msg/detail/friction__struct.h"

/// Initialize msg/Friction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * additional_msgs__msg__Friction
 * )) before or use
 * additional_msgs__msg__Friction__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
bool
additional_msgs__msg__Friction__init(additional_msgs__msg__Friction * msg);

/// Finalize msg/Friction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
void
additional_msgs__msg__Friction__fini(additional_msgs__msg__Friction * msg);

/// Create msg/Friction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * additional_msgs__msg__Friction__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
additional_msgs__msg__Friction *
additional_msgs__msg__Friction__create();

/// Destroy msg/Friction message.
/**
 * It calls
 * additional_msgs__msg__Friction__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
void
additional_msgs__msg__Friction__destroy(additional_msgs__msg__Friction * msg);


/// Initialize array of msg/Friction messages.
/**
 * It allocates the memory for the number of elements and calls
 * additional_msgs__msg__Friction__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
bool
additional_msgs__msg__Friction__Sequence__init(additional_msgs__msg__Friction__Sequence * array, size_t size);

/// Finalize array of msg/Friction messages.
/**
 * It calls
 * additional_msgs__msg__Friction__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
void
additional_msgs__msg__Friction__Sequence__fini(additional_msgs__msg__Friction__Sequence * array);

/// Create array of msg/Friction messages.
/**
 * It allocates the memory for the array and calls
 * additional_msgs__msg__Friction__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
additional_msgs__msg__Friction__Sequence *
additional_msgs__msg__Friction__Sequence__create(size_t size);

/// Destroy array of msg/Friction messages.
/**
 * It calls
 * additional_msgs__msg__Friction__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_additional_msgs
void
additional_msgs__msg__Friction__Sequence__destroy(additional_msgs__msg__Friction__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ADDITIONAL_MSGS__MSG__DETAIL__FRICTION__FUNCTIONS_H_