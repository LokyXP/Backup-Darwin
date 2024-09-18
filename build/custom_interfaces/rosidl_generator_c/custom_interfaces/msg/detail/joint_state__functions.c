// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `info`
// Member `type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_interfaces__msg__JointState__init(custom_interfaces__msg__JointState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->id, 0)) {
    custom_interfaces__msg__JointState__fini(msg);
    return false;
  }
  // info
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->info, 0)) {
    custom_interfaces__msg__JointState__fini(msg);
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->type, 0)) {
    custom_interfaces__msg__JointState__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces__msg__JointState__fini(custom_interfaces__msg__JointState * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__int32__Sequence__fini(&msg->id);
  // info
  rosidl_runtime_c__int32__Sequence__fini(&msg->info);
  // type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->type);
}

bool
custom_interfaces__msg__JointState__are_equal(const custom_interfaces__msg__JointState * lhs, const custom_interfaces__msg__JointState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__JointState__copy(
  const custom_interfaces__msg__JointState * input,
  custom_interfaces__msg__JointState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // info
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

custom_interfaces__msg__JointState *
custom_interfaces__msg__JointState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__JointState * msg = (custom_interfaces__msg__JointState *)allocator.allocate(sizeof(custom_interfaces__msg__JointState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__JointState));
  bool success = custom_interfaces__msg__JointState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__JointState__destroy(custom_interfaces__msg__JointState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__JointState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__JointState__Sequence__init(custom_interfaces__msg__JointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__JointState * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__JointState *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__JointState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__JointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__JointState__fini(&data[i - 1]);
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
custom_interfaces__msg__JointState__Sequence__fini(custom_interfaces__msg__JointState__Sequence * array)
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
      custom_interfaces__msg__JointState__fini(&array->data[i]);
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

custom_interfaces__msg__JointState__Sequence *
custom_interfaces__msg__JointState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__JointState__Sequence * array = (custom_interfaces__msg__JointState__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__JointState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__JointState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__JointState__Sequence__destroy(custom_interfaces__msg__JointState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__JointState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__JointState__Sequence__are_equal(const custom_interfaces__msg__JointState__Sequence * lhs, const custom_interfaces__msg__JointState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__JointState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__JointState__Sequence__copy(
  const custom_interfaces__msg__JointState__Sequence * input,
  custom_interfaces__msg__JointState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__JointState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_interfaces__msg__JointState * data =
      (custom_interfaces__msg__JointState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__JointState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__JointState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_interfaces__msg__JointState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
