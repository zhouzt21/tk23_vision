// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoundingBox in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__msg__BoundingBox
{
  int32_t xmin;
  int32_t ymin;
  int32_t xmax;
  int32_t ymax;
} tinker_vision_msgs__msg__BoundingBox;

// Struct for a sequence of tinker_vision_msgs__msg__BoundingBox.
typedef struct tinker_vision_msgs__msg__BoundingBox__Sequence
{
  tinker_vision_msgs__msg__BoundingBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__msg__BoundingBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_H_
