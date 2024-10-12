// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motoros2_interfaces:srv/StartPointQueueMode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motoros2_interfaces/srv/detail/start_point_queue_mode__rosidl_typesupport_introspection_c.h"
#include "motoros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motoros2_interfaces/srv/detail/start_point_queue_mode__functions.h"
#include "motoros2_interfaces/srv/detail/start_point_queue_mode__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motoros2_interfaces__srv__StartPointQueueMode_Request__init(message_memory);
}

void motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_fini_function(void * message_memory)
{
  motoros2_interfaces__srv__StartPointQueueMode_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motoros2_interfaces__srv__StartPointQueueMode_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_members = {
  "motoros2_interfaces__srv",  // message namespace
  "StartPointQueueMode_Request",  // message name
  1,  // number of fields
  sizeof(motoros2_interfaces__srv__StartPointQueueMode_Request),
  motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_member_array,  // message members
  motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_type_support_handle = {
  0,
  &motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motoros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Request)() {
  if (!motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_type_support_handle.typesupport_identifier) {
    motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motoros2_interfaces__srv__StartPointQueueMode_Request__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motoros2_interfaces/srv/detail/start_point_queue_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motoros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motoros2_interfaces/srv/detail/start_point_queue_mode__functions.h"
// already included above
// #include "motoros2_interfaces/srv/detail/start_point_queue_mode__struct.h"


// Include directives for member types
// Member `result_code`
#include "motoros2_interfaces/msg/motion_ready_enum.h"
// Member `result_code`
#include "motoros2_interfaces/msg/detail/motion_ready_enum__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motoros2_interfaces__srv__StartPointQueueMode_Response__init(message_memory);
}

void motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_fini_function(void * message_memory)
{
  motoros2_interfaces__srv__StartPointQueueMode_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motoros2_interfaces__srv__StartPointQueueMode_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motoros2_interfaces__srv__StartPointQueueMode_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_members = {
  "motoros2_interfaces__srv",  // message namespace
  "StartPointQueueMode_Response",  // message name
  2,  // number of fields
  sizeof(motoros2_interfaces__srv__StartPointQueueMode_Response),
  motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_member_array,  // message members
  motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_type_support_handle = {
  0,
  &motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motoros2_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Response)() {
  motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, msg, MotionReadyEnum)();
  if (!motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_type_support_handle.typesupport_identifier) {
    motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motoros2_interfaces__srv__StartPointQueueMode_Response__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motoros2_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "motoros2_interfaces/srv/detail/start_point_queue_mode__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_members = {
  "motoros2_interfaces__srv",  // service namespace
  "StartPointQueueMode",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_Request_message_type_support_handle,
  NULL  // response message
  // motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_Response_message_type_support_handle
};

static rosidl_service_type_support_t motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_type_support_handle = {
  0,
  &motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motoros2_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode)() {
  if (!motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_type_support_handle.typesupport_identifier) {
    motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motoros2_interfaces, srv, StartPointQueueMode_Response)()->data;
  }

  return &motoros2_interfaces__srv__detail__start_point_queue_mode__rosidl_typesupport_introspection_c__StartPointQueueMode_service_type_support_handle;
}
