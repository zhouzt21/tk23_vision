// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tinker_vision_msgs:srv/FaceRegister.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_H_
#define TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FaceRegister in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__srv__FaceRegister_Request
{
  int32_t state;
} tinker_vision_msgs__srv__FaceRegister_Request;

// Struct for a sequence of tinker_vision_msgs__srv__FaceRegister_Request.
typedef struct tinker_vision_msgs__srv__FaceRegister_Request__Sequence
{
  tinker_vision_msgs__srv__FaceRegister_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__srv__FaceRegister_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'fail_info'
// Member 'info'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/FaceRegister in the package tinker_vision_msgs.
typedef struct tinker_vision_msgs__srv__FaceRegister_Response
{
  bool success;
  rosidl_runtime_c__String fail_info;
  rosidl_runtime_c__int32__Sequence id;
  rosidl_runtime_c__String info;
} tinker_vision_msgs__srv__FaceRegister_Response;

// Struct for a sequence of tinker_vision_msgs__srv__FaceRegister_Response.
typedef struct tinker_vision_msgs__srv__FaceRegister_Response__Sequence
{
  tinker_vision_msgs__srv__FaceRegister_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tinker_vision_msgs__srv__FaceRegister_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__SRV__DETAIL__FACE_REGISTER__STRUCT_H_
