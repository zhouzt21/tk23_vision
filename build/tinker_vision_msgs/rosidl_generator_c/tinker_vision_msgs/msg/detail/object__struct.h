// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cls'
#include "rosidl_runtime_c/string.h"
// Member 'centroid'
// Member 'left_up'
// Member 'right_down'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Object in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__msg__Object
{
  float conf;
  int16_t id;
  rosidl_runtime_c__String cls;
  geometry_msgs__msg__Point centroid;
  bool intersect;
  geometry_msgs__msg__Point left_up;
  geometry_msgs__msg__Point right_down;
} tinker_vision_msgs__msg__Object;

// Struct for a sequence of tinker_vision_msgs__msg__Object.
typedef struct tinker_vision_msgs__msg__Object__Sequence
{
  tinker_vision_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
