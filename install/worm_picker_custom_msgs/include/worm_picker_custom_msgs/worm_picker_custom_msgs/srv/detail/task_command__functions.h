// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from worm_picker_custom_msgs:srv/TaskCommand.idl
// generated code does not contain a copyright notice

#ifndef WORM_PICKER_CUSTOM_MSGS__SRV__DETAIL__TASK_COMMAND__FUNCTIONS_H_
#define WORM_PICKER_CUSTOM_MSGS__SRV__DETAIL__TASK_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "worm_picker_custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "worm_picker_custom_msgs/srv/detail/task_command__struct.h"

/// Initialize srv/TaskCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * worm_picker_custom_msgs__srv__TaskCommand_Request
 * )) before or use
 * worm_picker_custom_msgs__srv__TaskCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__init(worm_picker_custom_msgs__srv__TaskCommand_Request * msg);

/// Finalize srv/TaskCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Request__fini(worm_picker_custom_msgs__srv__TaskCommand_Request * msg);

/// Create srv/TaskCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
worm_picker_custom_msgs__srv__TaskCommand_Request *
worm_picker_custom_msgs__srv__TaskCommand_Request__create();

/// Destroy srv/TaskCommand message.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Request__destroy(worm_picker_custom_msgs__srv__TaskCommand_Request * msg);

/// Check for srv/TaskCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__are_equal(const worm_picker_custom_msgs__srv__TaskCommand_Request * lhs, const worm_picker_custom_msgs__srv__TaskCommand_Request * rhs);

/// Copy a srv/TaskCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__copy(
  const worm_picker_custom_msgs__srv__TaskCommand_Request * input,
  worm_picker_custom_msgs__srv__TaskCommand_Request * output);

/// Initialize array of srv/TaskCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__init(worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/TaskCommand messages.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__fini(worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * array);

/// Create array of srv/TaskCommand messages.
/**
 * It allocates the memory for the array and calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence *
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/TaskCommand messages.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__destroy(worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * array);

/// Check for srv/TaskCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__are_equal(const worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * lhs, const worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * rhs);

/// Copy an array of srv/TaskCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence__copy(
  const worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * input,
  worm_picker_custom_msgs__srv__TaskCommand_Request__Sequence * output);

/// Initialize srv/TaskCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * worm_picker_custom_msgs__srv__TaskCommand_Response
 * )) before or use
 * worm_picker_custom_msgs__srv__TaskCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__init(worm_picker_custom_msgs__srv__TaskCommand_Response * msg);

/// Finalize srv/TaskCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Response__fini(worm_picker_custom_msgs__srv__TaskCommand_Response * msg);

/// Create srv/TaskCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
worm_picker_custom_msgs__srv__TaskCommand_Response *
worm_picker_custom_msgs__srv__TaskCommand_Response__create();

/// Destroy srv/TaskCommand message.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Response__destroy(worm_picker_custom_msgs__srv__TaskCommand_Response * msg);

/// Check for srv/TaskCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__are_equal(const worm_picker_custom_msgs__srv__TaskCommand_Response * lhs, const worm_picker_custom_msgs__srv__TaskCommand_Response * rhs);

/// Copy a srv/TaskCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__copy(
  const worm_picker_custom_msgs__srv__TaskCommand_Response * input,
  worm_picker_custom_msgs__srv__TaskCommand_Response * output);

/// Initialize array of srv/TaskCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__init(worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/TaskCommand messages.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__fini(worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * array);

/// Create array of srv/TaskCommand messages.
/**
 * It allocates the memory for the array and calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence *
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/TaskCommand messages.
/**
 * It calls
 * worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
void
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__destroy(worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * array);

/// Check for srv/TaskCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__are_equal(const worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * lhs, const worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * rhs);

/// Copy an array of srv/TaskCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_worm_picker_custom_msgs
bool
worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence__copy(
  const worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * input,
  worm_picker_custom_msgs__srv__TaskCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WORM_PICKER_CUSTOM_MSGS__SRV__DETAIL__TASK_COMMAND__FUNCTIONS_H_
