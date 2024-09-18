// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vision in the package custom_interfaces.
/**
  * Messages
 */
typedef struct custom_interfaces__msg__Vision
{
  bool detected;
  bool left;
  bool center;
  bool right;
  bool center_right;
  bool far;
  bool med;
  bool close;
} custom_interfaces__msg__Vision;

// Struct for a sequence of custom_interfaces__msg__Vision.
typedef struct custom_interfaces__msg__Vision__Sequence
{
  custom_interfaces__msg__Vision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__Vision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_H_
