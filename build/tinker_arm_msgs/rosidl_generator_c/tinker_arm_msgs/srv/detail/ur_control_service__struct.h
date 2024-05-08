// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_arm_msgs:srv/URControlService.idl
// generated code does not contain a copyright notice

#ifndef TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_H_
#define TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/URControlService in the package tinker_arm_msgs.
typedef struct tinker_arm_msgs__srv__URControlService_Request
{
  geometry_msgs__msg__Pose target_pose;
} tinker_arm_msgs__srv__URControlService_Request;

// Struct for a sequence of tinker_arm_msgs__srv__URControlService_Request.
typedef struct tinker_arm_msgs__srv__URControlService_Request__Sequence
{
  tinker_arm_msgs__srv__URControlService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_arm_msgs__srv__URControlService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/URControlService in the package tinker_arm_msgs.
typedef struct tinker_arm_msgs__srv__URControlService_Response
{
  bool success;
} tinker_arm_msgs__srv__URControlService_Response;

// Struct for a sequence of tinker_arm_msgs__srv__URControlService_Response.
typedef struct tinker_arm_msgs__srv__URControlService_Response__Sequence
{
  tinker_arm_msgs__srv__URControlService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_arm_msgs__srv__URControlService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_ARM_MSGS__SRV__DETAIL__UR_CONTROL_SERVICE__STRUCT_H_
