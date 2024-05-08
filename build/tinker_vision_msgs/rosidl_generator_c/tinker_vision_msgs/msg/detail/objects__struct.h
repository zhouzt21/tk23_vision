// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "tinker_vision_msgs/msg/detail/object__struct.h"

/// Struct defined in msg/Objects in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__msg__Objects
{
  std_msgs__msg__Header header;
  int32_t status;
  tinker_vision_msgs__msg__Object__Sequence objects;
} tinker_vision_msgs__msg__Objects;

// Struct for a sequence of tinker_vision_msgs__msg__Objects.
typedef struct tinker_vision_msgs__msg__Objects__Sequence
{
  tinker_vision_msgs__msg__Objects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__msg__Objects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECTS__STRUCT_H_
