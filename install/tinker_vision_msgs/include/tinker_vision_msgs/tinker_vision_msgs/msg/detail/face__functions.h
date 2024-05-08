// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice

#ifndef TINKER_VISION_MSGS__MSG__DETAIL__FACE__FUNCTIONS_H_
#define TINKER_VISION_MSGS__MSG__DETAIL__FACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tinker_vision_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tinker_vision_msgs/msg/detail/face__struct.h"

/// Initialize msg/Face message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tinker_vision_msgs__msg__Face
 * )) before or use
 * tinker_vision_msgs__msg__Face__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__init(tinker_vision_msgs__msg__Face * msg);

/// Finalize msg/Face message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
void
tinker_vision_msgs__msg__Face__fini(tinker_vision_msgs__msg__Face * msg);

/// Create msg/Face message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tinker_vision_msgs__msg__Face__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
tinker_vision_msgs__msg__Face *
tinker_vision_msgs__msg__Face__create();

/// Destroy msg/Face message.
/**
 * It calls
 * tinker_vision_msgs__msg__Face__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
void
tinker_vision_msgs__msg__Face__destroy(tinker_vision_msgs__msg__Face * msg);

/// Check for msg/Face message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__are_equal(const tinker_vision_msgs__msg__Face * lhs, const tinker_vision_msgs__msg__Face * rhs);

/// Copy a msg/Face message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__copy(
  const tinker_vision_msgs__msg__Face * input,
  tinker_vision_msgs__msg__Face * output);

/// Initialize array of msg/Face messages.
/**
 * It allocates the memory for the number of elements and calls
 * tinker_vision_msgs__msg__Face__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__Sequence__init(tinker_vision_msgs__msg__Face__Sequence * array, size_t size);

/// Finalize array of msg/Face messages.
/**
 * It calls
 * tinker_vision_msgs__msg__Face__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
void
tinker_vision_msgs__msg__Face__Sequence__fini(tinker_vision_msgs__msg__Face__Sequence * array);

/// Create array of msg/Face messages.
/**
 * It allocates the memory for the array and calls
 * tinker_vision_msgs__msg__Face__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
tinker_vision_msgs__msg__Face__Sequence *
tinker_vision_msgs__msg__Face__Sequence__create(size_t size);

/// Destroy array of msg/Face messages.
/**
 * It calls
 * tinker_vision_msgs__msg__Face__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
void
tinker_vision_msgs__msg__Face__Sequence__destroy(tinker_vision_msgs__msg__Face__Sequence * array);

/// Check for msg/Face message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__Sequence__are_equal(const tinker_vision_msgs__msg__Face__Sequence * lhs, const tinker_vision_msgs__msg__Face__Sequence * rhs);

/// Copy an array of msg/Face messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tinker_vision_msgs
bool
tinker_vision_msgs__msg__Face__Sequence__copy(
  const tinker_vision_msgs__msg__Face__Sequence * input,
  tinker_vision_msgs__msg__Face__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TINKER_VISION_MSGS__MSG__DETAIL__FACE__FUNCTIONS_H_
