// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motoros2_interfaces:srv/SelectMotionTool.idl
// generated code does not contain a copyright notice

#ifndef MOTOROS2_INTERFACES__SRV__DETAIL__SELECT_MOTION_TOOL__STRUCT_H_
#define MOTOROS2_INTERFACES__SRV__DETAIL__SELECT_MOTION_TOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SelectMotionTool in the package motoros2_interfaces.
typedef struct motoros2_interfaces__srv__SelectMotionTool_Request
{
  /// Change the active tool file used for motion on the controller.
  ///
  /// This changes the tool definition used for (Moto)ROS-controlled motions, not
  /// manual jogging.
  ///
  /// Make sure to read the following sections carefully to be aware
  /// of the behaviour of this service and of the Yaskawa controller after calling
  /// this service.
  ///
  /// ## FSU and PFL
  ///
  /// Tool switches through this service will be taken into account by the FSU and
  /// PFL safety systems if the controller has these options and they are enabled.
  ///
  /// Tool interference files, if associated with certain tool file definitions,
  /// will therefore also switch.
  ///
  /// ## Tool switch timing
  ///
  /// The active tool will be switched AFTER the controller has completed execution
  /// of the last trajectory segment that was sent to MotoROS BEFORE this service
  /// was called.
  ///
  /// The motion queue internal to MotoROS caches a number of segments in a FIFO.
  /// Only segments received AFTER this service was invoked will be executed with
  /// the new tool. Any segments received before a tool switch was invoked will use
  /// the old tool.
  ///
  /// To ensure motion will be executed using a certain tool, applications should
  /// check the 'in_motion' field (part of the RobotStatus message published on the
  /// 'robot_status' topic by the driver) and invoke the service when the robot has
  /// come to a stop (and the motion queue of MotoROS is empty). Any subsequent
  /// trajectories will use the new tool.
  ///
  /// ## Effect on trajectory execution
  ///
  /// As MotoROS currently only executes joint space trajectories, changing tool
  /// file with this service DOES NOT affect the execution of those trajectories.
  ///
  /// As noted earlier though, the active tool file definition will affect FSU and
  /// PFL behaviour, as the tool definition is used in calculation of dynamics and
  /// safety (see "FSU and PFL" above).
  ///
  /// To clarify: the TCP definition of the tool file is NOT taken into account when
  /// calculating manipulator motion based on incoming ROS JointTrajectoryAction
  /// goals (as JointTrajectory goals do not include any Cartesian poses, only
  /// absolute joint space coordinates for each axis).
  ///
  /// Instead, ROS applications should use different TF frames to define tool frames
  /// on the ROS side and plan their motions with the appropriate TF frame as the
  /// active tool.
  ///
  /// This service could then be used to notify the controller of other tool
  /// characteristics, such as weight, CoG and inertia by switching to a tool file
  /// configured with those parameters.
  ///
  /// ## Retrieving the active tool file
  ///
  /// MotoROS2 does not currently support retrieving the active tool file.
  ///
  /// For more information about tool file configuration, selection and use on
  /// Yaskawa controllers, refer to the relevant Yaskawa Motoman documentation.
  /// Numeric ID of the group the tool file is defined for.
  ///
  /// This MUST correspond to a group ID currently defined and active on the
  /// controller. The ROS service does not check whether the value specified here
  /// is legal. The MotoROS2 server will however check this, and will refuse to
  /// switch to an illegal value and will report this to the ROS driver.
  ///
  /// Callers will be notified of such failures by 'success' being set to 'false'
  /// and an appropriate error message being provided via the 'message' field of
  /// the service response.
  ///
  /// NOTE: this field is 0-based, with 0 corresponding to the first motion group,
  ///       1 the second, etc.
  ///
  /// legal-values: [0, total_nr_of_groups)
  /// required: yes (absence-causes-service-failure)
  /// default: no-default
  uint32_t group_number;
  /// Numeric ID of the tool file to switch to for the specified group.
  ///
  /// Identical to 'group_number', specification of illegal values will result
  /// in failure to invoke the MotoROS2 service, and an unsuccessful service result
  /// being returned.
  ///
  /// NOTE: this field is 0-based, with 0 corresponding to the first tool file,
  ///       1 the second, etc.
  ///
  /// legal-values: [0, 63]
  /// required: yes (absence-causes-service-failure)
  /// default: no-default
  uint32_t tool_number;
} motoros2_interfaces__srv__SelectMotionTool_Request;

// Struct for a sequence of motoros2_interfaces__srv__SelectMotionTool_Request.
typedef struct motoros2_interfaces__srv__SelectMotionTool_Request__Sequence
{
  motoros2_interfaces__srv__SelectMotionTool_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motoros2_interfaces__srv__SelectMotionTool_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result_code'
#include "motoros2_interfaces/msg/detail/selection_result_codes__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SelectMotionTool in the package motoros2_interfaces.
typedef struct motoros2_interfaces__srv__SelectMotionTool_Response
{
  /// Result of the service invocation. Values other than zero (0) signal failure.
  ///
  /// Refer to SelectionResultCodes.msg for defined values
  motoros2_interfaces__msg__SelectionResultCodes result_code;
  /// A human-readable error message, or an empty string if there was no error.
  rosidl_runtime_c__String message;
  /// true IFF invocation of the MotoROS service was successful.
  ///
  /// NOTE: this is independent of whether the ROS service invocation was
  ///       successful. In absence of any ROS middleware failures, a failed MotoROS
  ///       service invocation will result in 'success' here being set to 'false',
  ///       but a successful ROS service invocation.
  bool success;
} motoros2_interfaces__srv__SelectMotionTool_Response;

// Struct for a sequence of motoros2_interfaces__srv__SelectMotionTool_Response.
typedef struct motoros2_interfaces__srv__SelectMotionTool_Response__Sequence
{
  motoros2_interfaces__srv__SelectMotionTool_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motoros2_interfaces__srv__SelectMotionTool_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOROS2_INTERFACES__SRV__DETAIL__SELECT_MOTION_TOOL__STRUCT_H_
