// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION'.
enum
{
  custom_interfaces__msg__JointState__POSITION = 0
};

/// Constant 'VELOCITY'.
enum
{
  custom_interfaces__msg__JointState__VELOCITY = 1
};

/// Constant 'TORQUE'.
enum
{
  custom_interfaces__msg__JointState__TORQUE = 2
};

// Include directives for member types
// Member 'id'
// Member 'info'
// Member 'type'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointState in the package custom_interfaces.
/**
  * Types
 */
typedef struct custom_interfaces__msg__JointState
{
  /// Messages
  rosidl_runtime_c__int32__Sequence id;
  rosidl_runtime_c__int32__Sequence info;
  rosidl_runtime_c__uint8__Sequence type;
} custom_interfaces__msg__JointState;

// Struct for a sequence of custom_interfaces__msg__JointState.
typedef struct custom_interfaces__msg__JointState__Sequence
{
  custom_interfaces__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_
