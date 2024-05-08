// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tinker_vision_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tinker_vision_msgs/msg/detail/objects__rosidl_typesupport_introspection_c.h"
#include "tinker_vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tinker_vision_msgs/msg/detail/objects__functions.h"
#include "tinker_vision_msgs/msg/detail/objects__struct.h"


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

void tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tinker_vision_msgs__msg__Objects__init(message_memory);
}

void tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_fini_function(void * message_memory)
{
  tinker_vision_msgs__msg__Objects__fini(message_memory);
}

size_t tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__size_function__Objects__objects(
  const void * untyped_member)
{
  const tinker_vision_msgs__msg__Object__Sequence * member =
    (const tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects(
  const void * untyped_member, size_t index)
{
  const tinker_vision_msgs__msg__Object__Sequence * member =
    (const tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects(
  void * untyped_member, size_t index)
{
  tinker_vision_msgs__msg__Object__Sequence * member =
    (tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__fetch_function__Objects__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tinker_vision_msgs__msg__Object * item =
    ((const tinker_vision_msgs__msg__Object *)
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects(untyped_member, index));
  tinker_vision_msgs__msg__Object * value =
    (tinker_vision_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__assign_function__Objects__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tinker_vision_msgs__msg__Object * item =
    ((tinker_vision_msgs__msg__Object *)
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects(untyped_member, index));
  const tinker_vision_msgs__msg__Object * value =
    (const tinker_vision_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__resize_function__Objects__objects(
  void * untyped_member, size_t size)
{
  tinker_vision_msgs__msg__Object__Sequence * member =
    (tinker_vision_msgs__msg__Object__Sequence *)(untyped_member);
  tinker_vision_msgs__msg__Object__Sequence__fini(member);
  return tinker_vision_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tinker_vision_msgs__msg__Objects, header),  // bytes offset in struct
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
    offsetof(tinker_vision_msgs__msg__Objects, status),  // bytes offset in struct
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
    offsetof(tinker_vision_msgs__msg__Objects, objects),  // bytes offset in struct
    NULL,  // default value
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__size_function__Objects__objects,  // size() function pointer
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_const_function__Objects__objects,  // get_const(index) function pointer
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__get_function__Objects__objects,  // get(index) function pointer
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__fetch_function__Objects__objects,  // fetch(index, &value) function pointer
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__assign_function__Objects__objects,  // assign(index, value) function pointer
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__resize_function__Objects__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_members = {
  "tinker_vision_msgs__msg",  // message namespace
  "Objects",  // message name
  3,  // number of fields
  sizeof(tinker_vision_msgs__msg__Objects),
  tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array,  // message members
  tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_init_function,  // function to initialize message memory (memory has to be allocated)
  tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle = {
  0,
  &tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tinker_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, msg, Objects)() {
  tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tinker_vision_msgs, msg, Object)();
  if (!tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier) {
    tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tinker_vision_msgs__msg__Objects__rosidl_typesupport_introspection_c__Objects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
