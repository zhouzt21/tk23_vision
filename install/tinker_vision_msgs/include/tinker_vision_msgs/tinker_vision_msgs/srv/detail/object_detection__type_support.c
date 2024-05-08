// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tinker_vision_msgs:srv/ObjectDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tinker_vision_msgs/srv/detail/object_detection__rosidl_typesupport_introspection_c.h"
#include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tinker_vision_msgs/srv/detail/object_detection__functions.h"
#include "tinker_vision_msgs/srv/detail/object_detection__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__srv__ObjectDetection_Request__init(message_memory);
}

void tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_fini_function(void * message_memory)
{
  tinker_vision_msgs__srv__ObjectDetection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_member_array[1] = {
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__ObjectDetection_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_members = {
  "tinker_vision_msgs__srv",  // message namespace
  "ObjectDetection_Request",  // message name
  1,  // number of fields
  sizeof(tinker_vision_msgs__srv__ObjectDetection_Request),
  tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_member_array,  // message members
  tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Request)() {
  if (!tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__srv__ObjectDetection_Request__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tinker_vision_msgs/srv/detail/object_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/object_detection__functions.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/object_detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "tinker_vision_msgs/msg/object.h"
// Member `objects`
#include "tinker_vision_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__srv__ObjectDetection_Response__init(message_memory);
}

void tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_fini_function(void * message_memory)
{
  tinker_vision_msgs__srv__ObjectDetection_Response__fini(message_memory);
}

size_t tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__size_function__ObjectDetection_Response__objects(
  const void * untyped_member)
{
  const tinker_vision_msgs__msg__Object__Sequence * member =
    (const tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection_Response__objects(
  const void * untyped_member, size_t index)
{
  const tinker_vision_msgs__msg__Object__Sequence * member =
    (const tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection_Response__objects(
  void * untyped_member, size_t index)
{
  tinker_vision_msgs__msg__Object__Sequence * member =
    (tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection_Response__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tinker_vision_msgs__msg__Object * item =
    ((const tinker_vision_msgs__msg__Object *)
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection_Response__objects(untyped_member, index));
  tinker_vision_msgs__msg__Object * value =
    (tinker_vision_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__assign_function__ObjectDetection_Response__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tinker_vision_msgs__msg__Object * item =
    ((tinker_vision_msgs__msg__Object *)
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection_Response__objects(untyped_member, index));
  const tinker_vision_msgs__msg__Object * value =
    (const tinker_vision_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__resize_function__ObjectDetection_Response__objects(
  void * untyped_member, size_t size)
{
  tinker_vision_msgs__msg__Object__Sequence * member =
    (tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  tinker_vision_msgs__msg__Object__Sequence__fini(member);
  return tinker_vision_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__ObjectDetection_Response, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__ObjectDetection_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "person_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__ObjectDetection_Response, person_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__srv__ObjectDetection_Response, objects),  // bytes offset in struct
    NULL,  // default value
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__size_function__ObjectDetection_Response__objects,  // size() function pointer
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_const_function__ObjectDetection_Response__objects,  // get_const(index) function pointer
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__get_function__ObjectDetection_Response__objects,  // get(index) function pointer
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__fetch_function__ObjectDetection_Response__objects,  // fetch(index, &value) function pointer
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__assign_function__ObjectDetection_Response__objects,  // assign(index, value) function pointer
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__resize_function__ObjectDetection_Response__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_members = {
  "tinker_vision_msgs__srv",  // message namespace
  "ObjectDetection_Response",  // message name
  4,  // number of fields
  sizeof(tinker_vision_msgs__srv__ObjectDetection_Response),
  tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_member_array,  // message members
  tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Response)() {
  tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, msg, Object)();
  if (!tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__srv__ObjectDetection_Response__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tinker_vision_msgs/srv/detail/object_detection__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_members = {
  "tinker_vision_msgs__srv",  // service namespace
  "ObjectDetection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_Request_message_type_support_handle,
  NULL  // response message
  // tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_Response_message_type_support_handle
};

static rosidl_service_type_support_t tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_type_support_handle = {
  0,
  &tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection)() {
  if (!tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, srv, ObjectDetection_Response)()->data;
  }

  return &tinker_vision_msgs__srv__detail__object_detection__rosidl_typesupport_introspection_c__ObjectDetection_service_type_support_handle;
}
