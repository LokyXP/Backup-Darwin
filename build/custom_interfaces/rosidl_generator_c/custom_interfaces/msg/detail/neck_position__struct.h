// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/NeckPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NeckPosition in the package custom_interfaces.
/**
  * Neck motors position
 */
typedef struct custom_interfaces__msg__NeckPosition
{
  int32_t position19;
  int32_t position20;
} custom_interfaces__msg__NeckPosition;

// Struct for a sequence of custom_interfaces__msg__NeckPosition.
typedef struct custom_interfaces__msg__NeckPosition__Sequence
{
  custom_interfaces__msg__NeckPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__NeckPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__STRUCT_H_
