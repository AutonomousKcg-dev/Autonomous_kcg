// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__FUNCTIONS_H_
#define AUTOWARE_AUTO_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_msgs/action/detail/plan_trajectory__struct.h"

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_Goal
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Goal__init(autoware_auto_msgs__action__PlanTrajectory_Goal * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Goal__fini(autoware_auto_msgs__action__PlanTrajectory_Goal * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Goal *
autoware_auto_msgs__action__PlanTrajectory_Goal__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Goal__destroy(autoware_auto_msgs__action__PlanTrajectory_Goal * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Goal__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_Result
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Result__init(autoware_auto_msgs__action__PlanTrajectory_Result * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Result__fini(autoware_auto_msgs__action__PlanTrajectory_Result * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Result *
autoware_auto_msgs__action__PlanTrajectory_Result__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Result__destroy(autoware_auto_msgs__action__PlanTrajectory_Result * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Result__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Result__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_Feedback
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Feedback__init(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Feedback__fini(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Feedback *
autoware_auto_msgs__action__PlanTrajectory_Feedback__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Feedback__destroy(autoware_auto_msgs__action__PlanTrajectory_Feedback * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence *
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_Feedback__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Request__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence *
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_SendGoal_Response__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Request__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence *
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_GetResult_Response__Sequence * array);

/// Initialize action/PlanTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage
 * )) before or use
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg);

/// Finalize action/PlanTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg);

/// Create action/PlanTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage *
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__create();

/// Destroy action/PlanTrajectory message.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__destroy(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage * msg);


/// Initialize array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
bool
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/PlanTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence *
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/PlanTrajectory messages.
/**
 * It calls
 * autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_msgs
void
autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence__destroy(autoware_auto_msgs__action__PlanTrajectory_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__FUNCTIONS_H_
