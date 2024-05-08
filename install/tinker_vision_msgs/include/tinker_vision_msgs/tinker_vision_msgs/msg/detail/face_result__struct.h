// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:msg/FaceResult.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_H_

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
// Member 'faces'
#include "tinker_vision_msgs/msg/detail/face__struct.h"
// Member 'fail_info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FaceResult in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__msg__FaceResult
{
  std_msgs__msg__Header header;
  tinker_vision_msgs__msg__Face__Sequence faces;
  bool success;
  rosidl_runtime_c__String fail_info;
} tinker_vision_msgs__msg__FaceResult;

// Struct for a sequence of tinker_vision_msgs__msg__FaceResult.
typedef struct tinker_vision_msgs__msg__FaceResult__Sequence
{
  tinker_vision_msgs__msg__FaceResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__msg__FaceResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE_RESULT__STRUCT_H_
