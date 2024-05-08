// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tinker_vision_msgs:msg/FaceResult.idl
// generated code does not contain a copyright notice
#include "tinker_vision_msgs/msg/detail/face_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `faces`
#include "tinker_vision_msgs/msg/detail/face__functions.h"
// Member `fail_info`
#include "rosidl_runtime_c/string_functions.h"

bool
tinker_vision_msgs__msg__FaceResult__init(tinker_vision_msgs__msg__FaceResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tinker_vision_msgs__msg__FaceResult__fini(msg);
    return false;
  }
  // faces
  if (!tinker_vision_msgs__msg__Face__Sequence__init(&msg->faces, 0)) {
    tinker_vision_msgs__msg__FaceResult__fini(msg);
    return false;
  }
  // success
  // fail_info
  if (!rosidl_runtime_c__String__init(&msg->fail_info)) {
    tinker_vision_msgs__msg__FaceResult__fini(msg);
    return false;
  }
  return true;
}

void
tinker_vision_msgs__msg__FaceResult__fini(tinker_vision_msgs__msg__FaceResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // faces
  tinker_vision_msgs__msg__Face__Sequence__fini(&msg->faces);
  // success
  // fail_info
  rosidl_runtime_c__String__fini(&msg->fail_info);
}

bool
tinker_vision_msgs__msg__FaceResult__are_equal(const tinker_vision_msgs__msg__FaceResult * lhs, const tinker_vision_msgs__msg__FaceResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // faces
  if (!tinker_vision_msgs__msg__Face__Sequence__are_equal(
      &(lhs->faces), &(rhs->faces)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // fail_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fail_info), &(rhs->fail_info)))
  {
    return false;
  }
  return true;
}

bool
tinker_vision_msgs__msg__FaceResult__copy(
  const tinker_vision_msgs__msg__FaceResult * input,
  tinker_vision_msgs__msg__FaceResult * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // faces
  if (!tinker_vision_msgs__msg__Face__Sequence__copy(
      &(input->faces), &(output->faces)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // fail_info
  if (!rosidl_runtime_c__String__copy(
      &(input->fail_info), &(output->fail_info)))
  {
    return false;
  }
  return true;
}

tinker_vision_msgs__msg__FaceResult *
tinker_vision_msgs__msg__FaceResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__FaceResult * msg = (tinker_vision_msgs__msg__FaceResult *)allocator.allocate(sizeof(tinker_vision_msgs__msg__FaceResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_vision_msgs__msg__FaceResult));
  bool success = tinker_vision_msgs__msg__FaceResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_vision_msgs__msg__FaceResult__destroy(tinker_vision_msgs__msg__FaceResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_vision_msgs__msg__FaceResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_vision_msgs__msg__FaceResult__Sequence__init(tinker_vision_msgs__msg__FaceResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__FaceResult * data = NULL;

  if (size) {
    data = (tinker_vision_msgs__msg__FaceResult *)allocator.zero_allocate(size, sizeof(tinker_vision_msgs__msg__FaceResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_vision_msgs__msg__FaceResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_vision_msgs__msg__FaceResult__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tinker_vision_msgs__msg__FaceResult__Sequence__fini(tinker_vision_msgs__msg__FaceResult__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tinker_vision_msgs__msg__FaceResult__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tinker_vision_msgs__msg__FaceResult__Sequence *
tinker_vision_msgs__msg__FaceResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__FaceResult__Sequence * array = (tinker_vision_msgs__msg__FaceResult__Sequence *)allocator.allocate(sizeof(tinker_vision_msgs__msg__FaceResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_vision_msgs__msg__FaceResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_vision_msgs__msg__FaceResult__Sequence__destroy(tinker_vision_msgs__msg__FaceResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_vision_msgs__msg__FaceResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_vision_msgs__msg__FaceResult__Sequence__are_equal(const tinker_vision_msgs__msg__FaceResult__Sequence * lhs, const tinker_vision_msgs__msg__FaceResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_vision_msgs__msg__FaceResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_vision_msgs__msg__FaceResult__Sequence__copy(
  const tinker_vision_msgs__msg__FaceResult__Sequence * input,
  tinker_vision_msgs__msg__FaceResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_vision_msgs__msg__FaceResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_vision_msgs__msg__FaceResult * data =
      (tinker_vision_msgs__msg__FaceResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_vision_msgs__msg__FaceResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_vision_msgs__msg__FaceResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_vision_msgs__msg__FaceResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
