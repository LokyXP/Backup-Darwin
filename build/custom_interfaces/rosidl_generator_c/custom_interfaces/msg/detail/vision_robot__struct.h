// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/VisionRobot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VisionRobot in the package custom_interfaces.
/**
  * Messages
 */
typedef struct custom_interfaces__msg__VisionRobot
{
  bool detected;
  uint8_t left;
  uint8_t center;
  uint8_t right;
  uint8_t far;
  uint8_t med;
  uint8_t close;
} custom_interfaces__msg__VisionRobot;

// Struct for a sequence of custom_interfaces__msg__VisionRobot.
typedef struct custom_interfaces__msg__VisionRobot__Sequence
{
  custom_interfaces__msg__VisionRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__VisionRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_H_
