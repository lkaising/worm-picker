// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motoros2_interfaces:srv/ReadGroupIO.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__READ_GROUP_IO__STRUCT_H_
#define MOTOROS2_INTERFACES__SRV__DETAIL__READ_GROUP_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReadGroupIO in the package motoros2_interfaces.
typedef struct motoros2_interfaces__srv__ReadGroupIO_Request
{
  /// Read (and return) the current value of the Group IO element at 'address'.
  ///
  /// Addresses are plain, base-10 integers, as used and displayed by the controller
  /// (on the teach pendant for instance).
  ///
  /// There are no restrictions as to which group IO elements can be read, but they
  /// have to exist on the controller and be configured correctly.
  ///
  /// NOTE: many programming languages will parse literals starting with '0' as
  ///       octal numbers. Do not add leading zeros to group addresses to avoid
  ///       specifying the wrong address to read.
  ///
  /// Refer also the Yaskawa Motoman documentation on IO addressing and
  /// configuration.
  uint32_t address;
} motoros2_interfaces__srv__ReadGroupIO_Request;

// Struct for a sequence of motoros2_interfaces__srv__ReadGroupIO_Request.
typedef struct motoros2_interfaces__srv__ReadGroupIO_Request__Sequence
{
  motoros2_interfaces__srv__ReadGroupIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motoros2_interfaces__srv__ReadGroupIO_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReadGroupIO in the package motoros2_interfaces.
typedef struct motoros2_interfaces__srv__ReadGroupIO_Response
{
  uint32_t result_code;
  rosidl_runtime_c__String message;
  bool success;
  uint8_t value;
} motoros2_interfaces__srv__ReadGroupIO_Response;

// Struct for a sequence of motoros2_interfaces__srv__ReadGroupIO_Response.
typedef struct motoros2_interfaces__srv__ReadGroupIO_Response__Sequence
{
  motoros2_interfaces__srv__ReadGroupIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motoros2_interfaces__srv__ReadGroupIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__READ_GROUP_IO__STRUCT_H_
