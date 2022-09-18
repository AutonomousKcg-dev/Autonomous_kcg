// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__FUNCTIONS_H_
#define AUTOWARE_AUTO_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_msgs/srv/detail/autonomy_mode_change__struct.h"

/// Initialize srv/AutonomyModeChange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__srv__AutonomyModeChange_Request
 * )) before or use
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__srv__AutonomyModeChange_Request__init(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg);

/// Finalize srv/AutonomyModeChange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Request__fini(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg);

/// Create srv/AutonomyModeChange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__srv__AutonomyModeChange_Request *
autoware_auto_msgs__srv__AutonomyModeChange_Request__create();

/// Destroy srv/AutonomyModeChange message.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Request__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Request * msg);


/// Initialize array of srv/AutonomyModeChange messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__init(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array, size_t size);

/// Finalize array of srv/AutonomyModeChange messages.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__fini(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array);

/// Create array of srv/AutonomyModeChange messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence *
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__create(size_t size);

/// Destroy array of srv/AutonomyModeChange messages.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Request__Sequence * array);

/// Initialize srv/AutonomyModeChange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__srv__AutonomyModeChange_Response
 * )) before or use
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__srv__AutonomyModeChange_Response__init(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg);

/// Finalize srv/AutonomyModeChange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Response__fini(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg);

/// Create srv/AutonomyModeChange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__srv__AutonomyModeChange_Response *
autoware_auto_msgs__srv__AutonomyModeChange_Response__create();

/// Destroy srv/AutonomyModeChange message.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Response__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Response * msg);


/// Initialize array of srv/AutonomyModeChange messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__init(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array, size_t size);

/// Finalize array of srv/AutonomyModeChange messages.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__fini(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array);

/// Create array of srv/AutonomyModeChange messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence *
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__create(size_t size);

/// Destroy array of srv/AutonomyModeChange messages.
/**
 * It calls
 * autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence__destroy(autoware_auto_msgs__srv__AutonomyModeChange_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__FUNCTIONS_H_
