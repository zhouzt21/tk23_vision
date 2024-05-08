// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tinker_vision_msgs:msg/Face.idl
// generated code does not contain a copyright notice
#include "tinker_vision_msgs/msg/detail/face__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `box`
#include "tinker_vision_msgs/msg/detail/bounding_box__functions.h"
// Member `centroid`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `clothes`
// Member `hair`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

bool
tinker_vision_msgs__msg__Face__init(tinker_vision_msgs__msg__Face * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // box
  if (!tinker_vision_msgs__msg__BoundingBox__init(&msg->box)) {
    tinker_vision_msgs__msg__Face__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    tinker_vision_msgs__msg__Face__fini(msg);
    return false;
  }
  // age
  // gender
  // clothes
  if (!rosidl_runtime_c__String__init(&msg->clothes)) {
    tinker_vision_msgs__msg__Face__fini(msg);
    return false;
  }
  // hair
  if (!rosidl_runtime_c__String__init(&msg->hair)) {
    tinker_vision_msgs__msg__Face__fini(msg);
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__Sequence__init(&msg->info, 0)) {
    tinker_vision_msgs__msg__Face__fini(msg);
    return false;
  }
  return true;
}

void
tinker_vision_msgs__msg__Face__fini(tinker_vision_msgs__msg__Face * msg)
{
  if (!msg) {
    return;
  }
  // id
  // box
  tinker_vision_msgs__msg__BoundingBox__fini(&msg->box);
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
  // age
  // gender
  // clothes
  rosidl_runtime_c__String__fini(&msg->clothes);
  // hair
  rosidl_runtime_c__String__fini(&msg->hair);
  // info
  rosidl_runtime_c__String__Sequence__fini(&msg->info);
}

bool
tinker_vision_msgs__msg__Face__are_equal(const tinker_vision_msgs__msg__Face * lhs, const tinker_vision_msgs__msg__Face * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // box
  if (!tinker_vision_msgs__msg__BoundingBox__are_equal(
      &(lhs->box), &(rhs->box)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // gender
  if (lhs->gender != rhs->gender) {
    return false;
  }
  // clothes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->clothes), &(rhs->clothes)))
  {
    return false;
  }
  // hair
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hair), &(rhs->hair)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  return true;
}

bool
tinker_vision_msgs__msg__Face__copy(
  const tinker_vision_msgs__msg__Face * input,
  tinker_vision_msgs__msg__Face * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // box
  if (!tinker_vision_msgs__msg__BoundingBox__copy(
      &(input->box), &(output->box)))
  {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // age
  output->age = input->age;
  // gender
  output->gender = input->gender;
  // clothes
  if (!rosidl_runtime_c__String__copy(
      &(input->clothes), &(output->clothes)))
  {
    return false;
  }
  // hair
  if (!rosidl_runtime_c__String__copy(
      &(input->hair), &(output->hair)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  return true;
}

tinker_vision_msgs__msg__Face *
tinker_vision_msgs__msg__Face__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Face * msg = (tinker_vision_msgs__msg__Face *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Face), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_vision_msgs__msg__Face));
  bool success = tinker_vision_msgs__msg__Face__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_vision_msgs__msg__Face__destroy(tinker_vision_msgs__msg__Face * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_vision_msgs__msg__Face__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_vision_msgs__msg__Face__Sequence__init(tinker_vision_msgs__msg__Face__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Face * data = NULL;

  if (size) {
    data = (tinker_vision_msgs__msg__Face *)allocator.zero_allocate(size, sizeof(tinker_vision_msgs__msg__Face), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_vision_msgs__msg__Face__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_vision_msgs__msg__Face__fini(&data[i - 1]);
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
tinker_vision_msgs__msg__Face__Sequence__fini(tinker_vision_msgs__msg__Face__Sequence * array)
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
      tinker_vision_msgs__msg__Face__fini(&array->data[i]);
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

tinker_vision_msgs__msg__Face__Sequence *
tinker_vision_msgs__msg__Face__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_vision_msgs__msg__Face__Sequence * array = (tinker_vision_msgs__msg__Face__Sequence *)allocator.allocate(sizeof(tinker_vision_msgs__msg__Face__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_vision_msgs__msg__Face__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_vision_msgs__msg__Face__Sequence__destroy(tinker_vision_msgs__msg__Face__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_vision_msgs__msg__Face__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_vision_msgs__msg__Face__Sequence__are_equal(const tinker_vision_msgs__msg__Face__Sequence * lhs, const tinker_vision_msgs__msg__Face__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_vision_msgs__msg__Face__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_vision_msgs__msg__Face__Sequence__copy(
  const tinker_vision_msgs__msg__Face__Sequence * input,
  tinker_vision_msgs__msg__Face__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_vision_msgs__msg__Face);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_vision_msgs__msg__Face * data =
      (tinker_vision_msgs__msg__Face *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_vision_msgs__msg__Face__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_vision_msgs__msg__Face__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_vision_msgs__msg__Face__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
