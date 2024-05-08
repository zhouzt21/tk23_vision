// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tinker_arm_msgs:srv/URControlService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tinker_arm_msgs/srv/detail/ur_control_service__rosidl_typesupport_introspection_c.h"
#include "tinker_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tinker_arm_msgs/srv/detail/ur_control_service__functions.h"
#include "tinker_arm_msgs/srv/detail/ur_control_service__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_arm_msgs__srv__URControlService_Request__init(message_memory);
}

void tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_fini_function(void * message_memory)
{
  tinker_arm_msgs__srv__URControlService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_member_array[1] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_arm_msgs__srv__URControlService_Request, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_members = {
  "tinker_arm_msgs__srv",  // message namespace
  "URControlService_Request",  // message name
  1,  // number of fields
  sizeof(tinker_arm_msgs__srv__URControlService_Request),
  tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_member_array,  // message members
  tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_type_support_handle = {
  0,
  &tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Request)() {
  tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_type_support_handle.typesupport_identifier) {
    tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_arm_msgs__srv__URControlService_Request__rosidl_typesupport_introspection_c__URControlService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tinker_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__functions.h"
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_arm_msgs__srv__URControlService_Response__init(message_memory);
}

void tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_fini_function(void * message_memory)
{
  tinker_arm_msgs__srv__URControlService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_arm_msgs__srv__URControlService_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_members = {
  "tinker_arm_msgs__srv",  // message namespace
  "URControlService_Response",  // message name
  1,  // number of fields
  sizeof(tinker_arm_msgs__srv__URControlService_Response),
  tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_member_array,  // message members
  tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_type_support_handle = {
  0,
  &tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Response)() {
  if (!tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_type_support_handle.typesupport_identifier) {
    tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_arm_msgs__srv__URControlService_Response__rosidl_typesupport_introspection_c__URControlService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tinker_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tinker_arm_msgs/srv/detail/ur_control_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_members = {
  "tinker_arm_msgs__srv",  // service namespace
  "URControlService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_Request_message_type_support_handle,
  NULL  // response message
  // tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_Response_message_type_support_handle
};

static rosidl_service_type_support_t tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_type_support_handle = {
  0,
  &tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_arm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService)() {
  if (!tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_type_support_handle.typesupport_identifier) {
    tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_arm_msgs, srv, URControlService_Response)()->data;
  }

  return &tinker_arm_msgs__srv__detail__ur_control_service__rosidl_typesupport_introspection_c__URControlService_service_type_support_handle;
}
