// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tinker_arm_msgs:srv/Robotiq.idl
// generated code does not contain a copyright notice
#include "tinker_arm_msgs/srv/detail/robotiq__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
tinker_arm_msgs__srv__Robotiq_Request__init(tinker_arm_msgs__srv__Robotiq_Request * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  return true;
}

void
tinker_arm_msgs__srv__Robotiq_Request__fini(tinker_arm_msgs__srv__Robotiq_Request * msg)
{
  if (!msg) {
    return;
  }
  // distance
}

bool
tinker_arm_msgs__srv__Robotiq_Request__are_equal(const tinker_arm_msgs__srv__Robotiq_Request * lhs, const tinker_arm_msgs__srv__Robotiq_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  return true;
}

bool
tinker_arm_msgs__srv__Robotiq_Request__copy(
  const tinker_arm_msgs__srv__Robotiq_Request * input,
  tinker_arm_msgs__srv__Robotiq_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  return true;
}

tinker_arm_msgs__srv__Robotiq_Request *
tinker_arm_msgs__srv__Robotiq_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Request * msg = (tinker_arm_msgs__srv__Robotiq_Request *)allocator.allocate(sizeof(tinker_arm_msgs__srv__Robotiq_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_arm_msgs__srv__Robotiq_Request));
  bool success = tinker_arm_msgs__srv__Robotiq_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_arm_msgs__srv__Robotiq_Request__destroy(tinker_arm_msgs__srv__Robotiq_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_arm_msgs__srv__Robotiq_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_arm_msgs__srv__Robotiq_Request__Sequence__init(tinker_arm_msgs__srv__Robotiq_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Request * data = NULL;

  if (size) {
    data = (tinker_arm_msgs__srv__Robotiq_Request *)allocator.zero_allocate(size, sizeof(tinker_arm_msgs__srv__Robotiq_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_arm_msgs__srv__Robotiq_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_arm_msgs__srv__Robotiq_Request__fini(&data[i - 1]);
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
tinker_arm_msgs__srv__Robotiq_Request__Sequence__fini(tinker_arm_msgs__srv__Robotiq_Request__Sequence * array)
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
      tinker_arm_msgs__srv__Robotiq_Request__fini(&array->data[i]);
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

tinker_arm_msgs__srv__Robotiq_Request__Sequence *
tinker_arm_msgs__srv__Robotiq_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Request__Sequence * array = (tinker_arm_msgs__srv__Robotiq_Request__Sequence *)allocator.allocate(sizeof(tinker_arm_msgs__srv__Robotiq_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_arm_msgs__srv__Robotiq_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_arm_msgs__srv__Robotiq_Request__Sequence__destroy(tinker_arm_msgs__srv__Robotiq_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_arm_msgs__srv__Robotiq_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_arm_msgs__srv__Robotiq_Request__Sequence__are_equal(const tinker_arm_msgs__srv__Robotiq_Request__Sequence * lhs, const tinker_arm_msgs__srv__Robotiq_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_arm_msgs__srv__Robotiq_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_arm_msgs__srv__Robotiq_Request__Sequence__copy(
  const tinker_arm_msgs__srv__Robotiq_Request__Sequence * input,
  tinker_arm_msgs__srv__Robotiq_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_arm_msgs__srv__Robotiq_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_arm_msgs__srv__Robotiq_Request * data =
      (tinker_arm_msgs__srv__Robotiq_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_arm_msgs__srv__Robotiq_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_arm_msgs__srv__Robotiq_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_arm_msgs__srv__Robotiq_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tinker_arm_msgs__srv__Robotiq_Response__init(tinker_arm_msgs__srv__Robotiq_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
tinker_arm_msgs__srv__Robotiq_Response__fini(tinker_arm_msgs__srv__Robotiq_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
tinker_arm_msgs__srv__Robotiq_Response__are_equal(const tinker_arm_msgs__srv__Robotiq_Response * lhs, const tinker_arm_msgs__srv__Robotiq_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
tinker_arm_msgs__srv__Robotiq_Response__copy(
  const tinker_arm_msgs__srv__Robotiq_Response * input,
  tinker_arm_msgs__srv__Robotiq_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

tinker_arm_msgs__srv__Robotiq_Response *
tinker_arm_msgs__srv__Robotiq_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Response * msg = (tinker_arm_msgs__srv__Robotiq_Response *)allocator.allocate(sizeof(tinker_arm_msgs__srv__Robotiq_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tinker_arm_msgs__srv__Robotiq_Response));
  bool success = tinker_arm_msgs__srv__Robotiq_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tinker_arm_msgs__srv__Robotiq_Response__destroy(tinker_arm_msgs__srv__Robotiq_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tinker_arm_msgs__srv__Robotiq_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tinker_arm_msgs__srv__Robotiq_Response__Sequence__init(tinker_arm_msgs__srv__Robotiq_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Response * data = NULL;

  if (size) {
    data = (tinker_arm_msgs__srv__Robotiq_Response *)allocator.zero_allocate(size, sizeof(tinker_arm_msgs__srv__Robotiq_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tinker_arm_msgs__srv__Robotiq_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tinker_arm_msgs__srv__Robotiq_Response__fini(&data[i - 1]);
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
tinker_arm_msgs__srv__Robotiq_Response__Sequence__fini(tinker_arm_msgs__srv__Robotiq_Response__Sequence * array)
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
      tinker_arm_msgs__srv__Robotiq_Response__fini(&array->data[i]);
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

tinker_arm_msgs__srv__Robotiq_Response__Sequence *
tinker_arm_msgs__srv__Robotiq_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tinker_arm_msgs__srv__Robotiq_Response__Sequence * array = (tinker_arm_msgs__srv__Robotiq_Response__Sequence *)allocator.allocate(sizeof(tinker_arm_msgs__srv__Robotiq_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tinker_arm_msgs__srv__Robotiq_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tinker_arm_msgs__srv__Robotiq_Response__Sequence__destroy(tinker_arm_msgs__srv__Robotiq_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tinker_arm_msgs__srv__Robotiq_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tinker_arm_msgs__srv__Robotiq_Response__Sequence__are_equal(const tinker_arm_msgs__srv__Robotiq_Response__Sequence * lhs, const tinker_arm_msgs__srv__Robotiq_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tinker_arm_msgs__srv__Robotiq_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tinker_arm_msgs__srv__Robotiq_Response__Sequence__copy(
  const tinker_arm_msgs__srv__Robotiq_Response__Sequence * input,
  tinker_arm_msgs__srv__Robotiq_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tinker_arm_msgs__srv__Robotiq_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tinker_arm_msgs__srv__Robotiq_Response * data =
      (tinker_arm_msgs__srv__Robotiq_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tinker_arm_msgs__srv__Robotiq_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tinker_arm_msgs__srv__Robotiq_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tinker_arm_msgs__srv__Robotiq_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
