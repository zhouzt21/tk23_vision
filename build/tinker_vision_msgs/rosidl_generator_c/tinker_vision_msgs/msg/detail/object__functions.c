// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tinker_vision_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "tinker_vision_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cls`
#include "rosidl_runtime_c/string_functions.h"
// Member `centroid`
// Member `left_up`
// Member `right_down`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tinker_vision_msgs__msg__Object__init(tinker_vision_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // conf
  // id
  // cls
  if (!rosidl_runtime_c__String__init(&msg->cls)) {
    tinker_vision_msgs__msg__Object__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    tinker_vision_msgs__msg__Object__fini(msg);
    return false;
  }
  // intersect
  // left_up
  if (!geometry_msgs__msg__Point__init(&msg->left_up)) {
    tinker_vision_msgs__msg__Object__fini(msg);
    return false;
  }
  // right_down
  if (!geometry_msgs__msg__Point__init(&msg->right_down)) {
    tinker_vision_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
tinker_vision_msgs__msg__Object__fini(tinker_vision_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // conf
  // id
  // cls
  rosidl_runtime_c__String__fini(&msg->cls);
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
  // intersect
  // left_up
  geometry_msgs__msg__Point__fini(&msg->left_up);
  // right_down
  geometry_msgs__msg__Point__fini(&msg->right_down);
}

bool
tinker_vision_msgs__msg__Object__are_equal(const tinker_vision_msgs__msg__Object * lhs, const tinker_vision_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // cls
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cls), &(rhs->cls)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // intersect
  if (lhs->intersect != rhs->intersect) {
    return false;
  }
  // left_up
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->left_up), &(rhs->left_up)))
  {
    return false;
  }
  // right_down
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->right_down), &(rhs->right_down)))
  {
    return false;
  }
  return true;
}

bool
tinker_vision_msgs__msg__Object__copy(
  const tinker_vision_msgs__msg__Object * input,
  tinker_vision_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // conf
  output->conf = input->conf;
  // id
  output->id = input->id;
  // cls
  if (!rosidl_runtime_c__String__copy(
      &(input->cls), &(output->cls)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // intersect
  output->intersect = input->intersect;
  // left_up
  if (!geometry_msgs__msg__Point__copy(
      &(input->left_up), &(output->left_up)))
  {
    return false;
  }
  // right_down
  if (!geometry_msgs__msg__Point__copy(
      &(input->right_down), &(output->right_down)))
  {
    return false;
  }
  return true;
}

tinker_vision_msgs__msg__Object *
tinker_vision_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Object * msg = (tinker_vision_msgs__msg__Object *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_vision_msgs__msg__Object));
  bool success = tinker_vision_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_vision_msgs__msg__Object__destroy(tinker_vision_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_vision_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_vision_msgs__msg__Object__Sequence__init(tinker_vision_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Object * data = NULL;

  if (size) {
    data = (tinker_vision_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(tinker_vision_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_vision_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_vision_msgs__msg__Object__fini(&data[i - 1]);
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
tinker_vision_msgs__msg__Object__Sequence__fini(tinker_vision_msgs__msg__Object__Sequence * array)
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
      tinker_vision_msgs__msg__Object__fini(&array->data[i]);
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

tinker_vision_msgs__msg__Object__Sequence *
tinker_vision_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Object__Sequence * array = (tinker_vision_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_vision_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_vision_msgs__msg__Object__Sequence__destroy(tinker_vision_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_vision_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_vision_msgs__msg__Object__Sequence__are_equal(const tinker_vision_msgs__msg__Object__Sequence * lhs, const tinker_vision_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_vision_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_vision_msgs__msg__Object__Sequence__copy(
  const tinker_vision_msgs__msg__Object__Sequence * input,
  tinker_vision_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_vision_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_vision_msgs__msg__Object * data =
      (tinker_vision_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_vision_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_vision_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_vision_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
