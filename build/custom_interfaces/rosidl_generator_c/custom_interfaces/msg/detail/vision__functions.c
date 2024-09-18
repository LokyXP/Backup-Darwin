// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/vision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interfaces__msg__Vision__init(custom_interfaces__msg__Vision * msg)
{
  if (!msg) {
    return false;
  }
  // detected
  msg->detected = false;
  // left
  msg->left = false;
  // center
  msg->center = false;
  // right
  msg->right = false;
  // center_right
  msg->center_right = false;
  // far
  msg->far = false;
  // med
  msg->med = false;
  // close
  msg->close = false;
  return true;
}

void
custom_interfaces__msg__Vision__fini(custom_interfaces__msg__Vision * msg)
{
  if (!msg) {
    return;
  }
  // detected
  // left
  // center
  // right
  // center_right
  // far
  // med
  // close
}

bool
custom_interfaces__msg__Vision__are_equal(const custom_interfaces__msg__Vision * lhs, const custom_interfaces__msg__Vision * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected
  if (lhs->detected != rhs->detected) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // center
  if (lhs->center != rhs->center) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  // center_right
  if (lhs->center_right != rhs->center_right) {
    return false;
  }
  // far
  if (lhs->far != rhs->far) {
    return false;
  }
  // med
  if (lhs->med != rhs->med) {
    return false;
  }
  // close
  if (lhs->close != rhs->close) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__Vision__copy(
  const custom_interfaces__msg__Vision * input,
  custom_interfaces__msg__Vision * output)
{
  if (!input || !output) {
    return false;
  }
  // detected
  output->detected = input->detected;
  // left
  output->left = input->left;
  // center
  output->center = input->center;
  // right
  output->right = input->right;
  // center_right
  output->center_right = input->center_right;
  // far
  output->far = input->far;
  // med
  output->med = input->med;
  // close
  output->close = input->close;
  return true;
}

custom_interfaces__msg__Vision *
custom_interfaces__msg__Vision__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Vision * msg = (custom_interfaces__msg__Vision *)allocator.allocate(sizeof(custom_interfaces__msg__Vision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__Vision));
  bool success = custom_interfaces__msg__Vision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__Vision__destroy(custom_interfaces__msg__Vision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__Vision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__Vision__Sequence__init(custom_interfaces__msg__Vision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Vision * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__Vision *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__Vision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__Vision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__Vision__fini(&data[i - 1]);
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
custom_interfaces__msg__Vision__Sequence__fini(custom_interfaces__msg__Vision__Sequence * array)
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
      custom_interfaces__msg__Vision__fini(&array->data[i]);
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

custom_interfaces__msg__Vision__Sequence *
custom_interfaces__msg__Vision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__Vision__Sequence * array = (custom_interfaces__msg__Vision__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__Vision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__Vision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__Vision__Sequence__destroy(custom_interfaces__msg__Vision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__Vision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__Vision__Sequence__are_equal(const custom_interfaces__msg__Vision__Sequence * lhs, const custom_interfaces__msg__Vision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__Vision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__Vision__Sequence__copy(
  const custom_interfaces__msg__Vision__Sequence * input,
  custom_interfaces__msg__Vision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__Vision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__Vision * data =
      (custom_interfaces__msg__Vision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__Vision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__Vision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__Vision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
