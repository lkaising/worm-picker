// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motoros2_interfaces:srv/WriteSingleIO.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__FUNCTIONS_H_
#define MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motoros2_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "motoros2_interfaces/srv/detail/write_single_io__struct.h"

/// Initialize srv/WriteSingleIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motoros2_interfaces__srv__WriteSingleIO_Request
 * )) before or use
 * motoros2_interfaces__srv__WriteSingleIO_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__init(motoros2_interfaces__srv__WriteSingleIO_Request * msg);

/// Finalize srv/WriteSingleIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Request__fini(motoros2_interfaces__srv__WriteSingleIO_Request * msg);

/// Create srv/WriteSingleIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
motoros2_interfaces__srv__WriteSingleIO_Request *
motoros2_interfaces__srv__WriteSingleIO_Request__create();

/// Destroy srv/WriteSingleIO message.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Request__destroy(motoros2_interfaces__srv__WriteSingleIO_Request * msg);

/// Check for srv/WriteSingleIO message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__are_equal(const motoros2_interfaces__srv__WriteSingleIO_Request * lhs, const motoros2_interfaces__srv__WriteSingleIO_Request * rhs);

/// Copy a srv/WriteSingleIO message.
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
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__copy(
  const motoros2_interfaces__srv__WriteSingleIO_Request * input,
  motoros2_interfaces__srv__WriteSingleIO_Request * output);

/// Initialize array of srv/WriteSingleIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__init(motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * array, size_t size);

/// Finalize array of srv/WriteSingleIO messages.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__fini(motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * array);

/// Create array of srv/WriteSingleIO messages.
/**
 * It allocates the memory for the array and calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence *
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__create(size_t size);

/// Destroy array of srv/WriteSingleIO messages.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__destroy(motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * array);

/// Check for srv/WriteSingleIO message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__are_equal(const motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * lhs, const motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * rhs);

/// Copy an array of srv/WriteSingleIO messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Request__Sequence__copy(
  const motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * input,
  motoros2_interfaces__srv__WriteSingleIO_Request__Sequence * output);

/// Initialize srv/WriteSingleIO message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motoros2_interfaces__srv__WriteSingleIO_Response
 * )) before or use
 * motoros2_interfaces__srv__WriteSingleIO_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__init(motoros2_interfaces__srv__WriteSingleIO_Response * msg);

/// Finalize srv/WriteSingleIO message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Response__fini(motoros2_interfaces__srv__WriteSingleIO_Response * msg);

/// Create srv/WriteSingleIO message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
motoros2_interfaces__srv__WriteSingleIO_Response *
motoros2_interfaces__srv__WriteSingleIO_Response__create();

/// Destroy srv/WriteSingleIO message.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Response__destroy(motoros2_interfaces__srv__WriteSingleIO_Response * msg);

/// Check for srv/WriteSingleIO message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__are_equal(const motoros2_interfaces__srv__WriteSingleIO_Response * lhs, const motoros2_interfaces__srv__WriteSingleIO_Response * rhs);

/// Copy a srv/WriteSingleIO message.
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
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__copy(
  const motoros2_interfaces__srv__WriteSingleIO_Response * input,
  motoros2_interfaces__srv__WriteSingleIO_Response * output);

/// Initialize array of srv/WriteSingleIO messages.
/**
 * It allocates the memory for the number of elements and calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__init(motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * array, size_t size);

/// Finalize array of srv/WriteSingleIO messages.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__fini(motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * array);

/// Create array of srv/WriteSingleIO messages.
/**
 * It allocates the memory for the array and calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence *
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__create(size_t size);

/// Destroy array of srv/WriteSingleIO messages.
/**
 * It calls
 * motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
void
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__destroy(motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * array);

/// Check for srv/WriteSingleIO message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__are_equal(const motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * lhs, const motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * rhs);

/// Copy an array of srv/WriteSingleIO messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motoros2_interfaces
bool
motoros2_interfaces__srv__WriteSingleIO_Response__Sequence__copy(
  const motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * input,
  motoros2_interfaces__srv__WriteSingleIO_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__WRITE_SINGLE_IO__FUNCTIONS_H_
