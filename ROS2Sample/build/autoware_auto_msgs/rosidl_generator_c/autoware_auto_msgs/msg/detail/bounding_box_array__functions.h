// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__FUNCTIONS_H_
#define AUTOWARE_AUTO_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_msgs/msg/detail/bounding_box_array__struct.h"

/// Initialize msg/BoundingBoxArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__msg__BoundingBoxArray
 * )) before or use
 * autoware_auto_msgs__msg__BoundingBoxArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__msg__BoundingBoxArray__init(autoware_auto_msgs__msg__BoundingBoxArray * msg);

/// Finalize msg/BoundingBoxArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__BoundingBoxArray__fini(autoware_auto_msgs__msg__BoundingBoxArray * msg);

/// Create msg/BoundingBoxArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__msg__BoundingBoxArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__msg__BoundingBoxArray *
autoware_auto_msgs__msg__BoundingBoxArray__create();

/// Destroy msg/BoundingBoxArray message.
/**
 * It calls
 * autoware_auto_msgs__msg__BoundingBoxArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__BoundingBoxArray__destroy(autoware_auto_msgs__msg__BoundingBoxArray * msg);


/// Initialize array of msg/BoundingBoxArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__msg__BoundingBoxArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__init(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBoxArray messages.
/**
 * It calls
 * autoware_auto_msgs__msg__BoundingBoxArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__fini(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array);

/// Create array of msg/BoundingBoxArray messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__msg__BoundingBoxArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__msg__BoundingBoxArray__Sequence *
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBoxArray messages.
/**
 * It calls
 * autoware_auto_msgs__msg__BoundingBoxArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__msg__BoundingBoxArray__Sequence__destroy(autoware_auto_msgs__msg__BoundingBoxArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__FUNCTIONS_H_
