// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tinker_vision_msgs:msg/Objects.idl
// generated code does not contain a copyright notice
#include "tinker_vision_msgs/msg/detail/objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "tinker_vision_msgs/msg/detail/object__functions.h"

bool
tinker_vision_msgs__msg__Objects__init(tinker_vision_msgs__msg__Objects * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tinker_vision_msgs__msg__Objects__fini(msg);
    return false;
  }
  // status
  // objects
  if (!tinker_vision_msgs__msg__Object__Sequence__init(&msg->objects, 0)) {
    tinker_vision_msgs__msg__Objects__fini(msg);
    return false;
  }
  return true;
}

void
tinker_vision_msgs__msg__Objects__fini(tinker_vision_msgs__msg__Objects * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  // objects
  tinker_vision_msgs__msg__Object__Sequence__fini(&msg->objects);
}

bool
tinker_vision_msgs__msg__Objects__are_equal(const tinker_vision_msgs__msg__Objects * lhs, const tinker_vision_msgs__msg__Objects * rhs)
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
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // objects
  if (!tinker_vision_msgs__msg__Object__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
tinker_vision_msgs__msg__Objects__copy(
  const tinker_vision_msgs__msg__Objects * input,
  tinker_vision_msgs__msg__Objects * output)
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
  // status
  output->status = input->status;
  // objects
  if (!tinker_vision_msgs__msg__Object__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

tinker_vision_msgs__msg__Objects *
tinker_vision_msgs__msg__Objects__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Objects * msg = (tinker_vision_msgs__msg__Objects *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Objects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_vision_msgs__msg__Objects));
  bool success = tinker_vision_msgs__msg__Objects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_vision_msgs__msg__Objects__destroy(tinker_vision_msgs__msg__Objects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_vision_msgs__msg__Objects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_vision_msgs__msg__Objects__Sequence__init(tinker_vision_msgs__msg__Objects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Objects * data = NULL;

  if (size) {
    data = (tinker_vision_msgs__msg__Objects *)allocator.zero_allocate(size, sizeof(tinker_vision_msgs__msg__Objects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_vision_msgs__msg__Objects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_vision_msgs__msg__Objects__fini(&data[i - 1]);
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
tinker_vision_msgs__msg__Objects__Sequence__fini(tinker_vision_msgs__msg__Objects__Sequence * array)
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
      tinker_vision_msgs__msg__Objects__fini(&array->data[i]);
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

tinker_vision_msgs__msg__Objects__Sequence *
tinker_vision_msgs__msg__Objects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Objects__Sequence * array = (tinker_vision_msgs__msg__Objects__Sequence *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Objects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_vision_msgs__msg__Objects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_vision_msgs__msg__Objects__Sequence__destroy(tinker_vision_msgs__msg__Objects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_vision_msgs__msg__Objects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_vision_msgs__msg__Objects__Sequence__are_equal(const tinker_vision_msgs__msg__Objects__Sequence * lhs, const tinker_vision_msgs__msg__Objects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_vision_msgs__msg__Objects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_vision_msgs__msg__Objects__Sequence__copy(
  const tinker_vision_msgs__msg__Objects__Sequence * input,
  tinker_vision_msgs__msg__Objects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_vision_msgs__msg__Objects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_vision_msgs__msg__Objects * data =
      (tinker_vision_msgs__msg__Objects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_vision_msgs__msg__Objects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_vision_msgs__msg__Objects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_vision_msgs__msg__Objects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
