// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:action/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_
#define AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sound_request'
#include "audio_common_msgs/msg/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_Goal
{
  audio_common_msgs__msg__SoundRequest sound_request;
} audio_common_msgs__action__SoundRequest_Goal;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_Goal.
typedef struct audio_common_msgs__action__SoundRequest_Goal__Sequence
{
  audio_common_msgs__action__SoundRequest_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_Result
{
  bool playing;
  builtin_interfaces__msg__Duration stamp;
} audio_common_msgs__action__SoundRequest_Result;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_Result.
typedef struct audio_common_msgs__action__SoundRequest_Result__Sequence
{
  audio_common_msgs__action__SoundRequest_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_Feedback
{
  bool playing;
  builtin_interfaces__msg__Duration stamp;
} audio_common_msgs__action__SoundRequest_Feedback;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_Feedback.
typedef struct audio_common_msgs__action__SoundRequest_Feedback__Sequence
{
  audio_common_msgs__action__SoundRequest_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "audio_common_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  audio_common_msgs__action__SoundRequest_Goal goal;
} audio_common_msgs__action__SoundRequest_SendGoal_Request;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_SendGoal_Request.
typedef struct audio_common_msgs__action__SoundRequest_SendGoal_Request__Sequence
{
  audio_common_msgs__action__SoundRequest_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} audio_common_msgs__action__SoundRequest_SendGoal_Response;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_SendGoal_Response.
typedef struct audio_common_msgs__action__SoundRequest_SendGoal_Response__Sequence
{
  audio_common_msgs__action__SoundRequest_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} audio_common_msgs__action__SoundRequest_GetResult_Request;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_GetResult_Request.
typedef struct audio_common_msgs__action__SoundRequest_GetResult_Request__Sequence
{
  audio_common_msgs__action__SoundRequest_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "audio_common_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_GetResult_Response
{
  int8_t status;
  audio_common_msgs__action__SoundRequest_Result result;
} audio_common_msgs__action__SoundRequest_GetResult_Response;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_GetResult_Response.
typedef struct audio_common_msgs__action__SoundRequest_GetResult_Response__Sequence
{
  audio_common_msgs__action__SoundRequest_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "audio_common_msgs/action/detail/sound_request__struct.h"

/// Struct defined in action/SoundRequest in the package audio_common_msgs.
typedef struct audio_common_msgs__action__SoundRequest_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  audio_common_msgs__action__SoundRequest_Feedback feedback;
} audio_common_msgs__action__SoundRequest_FeedbackMessage;

// Struct for a sequence of audio_common_msgs__action__SoundRequest_FeedbackMessage.
typedef struct audio_common_msgs__action__SoundRequest_FeedbackMessage__Sequence
{
  audio_common_msgs__action__SoundRequest_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__action__SoundRequest_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__ACTION__DETAIL__SOUND_REQUEST__STRUCT_H_
