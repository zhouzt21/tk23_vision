// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'box'
#include "tinker_vision_msgs/msg/detail/bounding_box__struct.h"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'clothes'
// Member 'hair'
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Face in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__msg__Face
{
  int32_t id;
  tinker_vision_msgs__msg__BoundingBox box;
  geometry_msgs__msg__Point centroid;
  int32_t age;
  int32_t gender;
  rosidl_runtime_c__String clothes;
  rosidl_runtime_c__String hair;
  rosidl_runtime_c__String__Sequence info;
} tinker_vision_msgs__msg__Face;

// Struct for a sequence of tinker_vision_msgs__msg__Face.
typedef struct tinker_vision_msgs__msg__Face__Sequence
{
  tinker_vision_msgs__msg__Face * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__msg__Face__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE__STRUCT_H_
