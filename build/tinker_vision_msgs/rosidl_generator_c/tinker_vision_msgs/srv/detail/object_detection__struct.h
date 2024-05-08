// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:srv/ObjectDetection.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_H_
#define TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ObjectDetection in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__srv__ObjectDetection_Request
{
  rosidl_runtime_c__String mode;
} tinker_vision_msgs__srv__ObjectDetection_Request;

// Struct for a sequence of tinker_vision_msgs__srv__ObjectDetection_Request.
typedef struct tinker_vision_msgs__srv__ObjectDetection_Request__Sequence
{
  tinker_vision_msgs__srv__ObjectDetection_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__srv__ObjectDetection_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "tinker_vision_msgs/msg/detail/object__struct.h"

/// Struct defined in srv/ObjectDetection in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__srv__ObjectDetection_Response
{
  std_msgs__msg__Header header;
  int32_t status;
  int32_t person_id;
  tinker_vision_msgs__msg__Object__Sequence objects;
} tinker_vision_msgs__srv__ObjectDetection_Response;

// Struct for a sequence of tinker_vision_msgs__srv__ObjectDetection_Response.
typedef struct tinker_vision_msgs__srv__ObjectDetection_Response__Sequence
{
  tinker_vision_msgs__srv__ObjectDetection_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__srv__ObjectDetection_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__OBJECT_DETECTION__STRUCT_H_
