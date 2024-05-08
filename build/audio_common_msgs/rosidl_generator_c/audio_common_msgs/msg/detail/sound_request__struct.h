// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from audio_common_msgs:msg/SoundRequest.idl
// generated code does not contain a copyright notice

#ifndef AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_H_
#define AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BACKINGUP'.
/**
  * Sounds
 */
enum
{
  audio_common_msgs__msg__SoundRequest__BACKINGUP = 1
};

/// Constant 'NEEDS_UNPLUGGING'.
enum
{
  audio_common_msgs__msg__SoundRequest__NEEDS_UNPLUGGING = 2
};

/// Constant 'NEEDS_PLUGGING'.
enum
{
  audio_common_msgs__msg__SoundRequest__NEEDS_PLUGGING = 3
};

/// Constant 'NEEDS_UNPLUGGING_BADLY'.
enum
{
  audio_common_msgs__msg__SoundRequest__NEEDS_UNPLUGGING_BADLY = 4
};

/// Constant 'NEEDS_PLUGGING_BADLY'.
enum
{
  audio_common_msgs__msg__SoundRequest__NEEDS_PLUGGING_BADLY = 5
};

/// Constant 'ALL'.
/**
  * Sound identifiers that have special meaning
  * Only legal with PLAY_STOP
 */
enum
{
  audio_common_msgs__msg__SoundRequest__ALL = -1
};

/// Constant 'PLAY_FILE'.
enum
{
  audio_common_msgs__msg__SoundRequest__PLAY_FILE = -2
};

/// Constant 'SAY'.
enum
{
  audio_common_msgs__msg__SoundRequest__SAY = -3
};

/// Constant 'PLAY_STOP'.
/**
  * Commands
  * Stop this sound from playing
 */
enum
{
  audio_common_msgs__msg__SoundRequest__PLAY_STOP = 0
};

/// Constant 'PLAY_ONCE'.
/**
  * Play the sound once
 */
enum
{
  audio_common_msgs__msg__SoundRequest__PLAY_ONCE = 1
};

/// Constant 'PLAY_START'.
/**
  * Play the sound in a loop until a stop request occurs
 */
enum
{
  audio_common_msgs__msg__SoundRequest__PLAY_START = 2
};

// Include directives for member types
// Member 'arg'
// Member 'arg2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SoundRequest in the package audio_common_msgs.
/**
  * IMPORTANT: You should never have to generate this message yourself.
  * Use the sound_play::SoundClient C++ helper or the
  * sound_play.libsoundplay.SoundClient Python helper.
 */
typedef struct audio_common_msgs__msg__SoundRequest
{
  /// Selects which sound to play (see above)
  int8_t sound;
  /// Indicates what to do with the sound
  int8_t command;
  /// Volume at which to play the sound, with 0 as mute and 1.0 as 100%.
  float volume;
  /// file name or text to say
  rosidl_runtime_c__String arg;
  /// other arguments
  rosidl_runtime_c__String arg2;
} audio_common_msgs__msg__SoundRequest;

// Struct for a sequence of audio_common_msgs__msg__SoundRequest.
typedef struct audio_common_msgs__msg__SoundRequest__Sequence
{
  audio_common_msgs__msg__SoundRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} audio_common_msgs__msg__SoundRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUDIO_COMMON_MSGS__MSG__DETAIL__SOUND_REQUEST__STRUCT_H_
