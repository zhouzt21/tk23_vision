// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tinker_vision_msgs/msg/detail/face__rosidl_typesupport_introspection_c.h"
#include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tinker_vision_msgs/msg/detail/face__functions.h"
#include "tinker_vision_msgs/msg/detail/face__struct.h"


// Include directives for member types
// Member `box`
#include "tinker_vision_msgs/msg/bounding_box.h"
// Member `box`
#include "tinker_vision_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"
// Member `centroid`
#include "geometry_msgs/msg/point.h"
// Member `centroid`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `clothes`
// Member `hair`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__msg__Face__init(message_memory);
}

void tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_fini_function(void * message_memory)
{
  tinker_vision_msgs__msg__Face__fini(message_memory);
}

size_t tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__size_function__Face__info(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_const_function__Face__info(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_function__Face__info(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__fetch_function__Face__info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_const_function__Face__info(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__assign_function__Face__info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_function__Face__info(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__resize_function__Face__info(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_member_array[8] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, centroid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, gender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clothes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, clothes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hair",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, hair),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Face, info),  // bytes offset in struct
    NULL,  // default value
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__size_function__Face__info,  // size() function pointer
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_const_function__Face__info,  // get_const(index) function pointer
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__get_function__Face__info,  // get(index) function pointer
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__fetch_function__Face__info,  // fetch(index, &value) function pointer
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__assign_function__Face__info,  // assign(index, value) function pointer
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__resize_function__Face__info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_members = {
  "tinker_vision_msgs__msg",  // message namespace
  "Face",  // message name
  8,  // number of fields
  sizeof(tinker_vision_msgs__msg__Face),
  tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_member_array,  // message members
  tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_type_support_handle = {
  0,
  &tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, msg, Face)() {
  tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, msg, BoundingBox)();
  tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__msg__Face__rosidl_typesupport_introspection_c__Face_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
