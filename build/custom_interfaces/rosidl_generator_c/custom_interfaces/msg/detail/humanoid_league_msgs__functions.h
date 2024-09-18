// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces:msg/HumanoidLeagueMsgs.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__HUMANOID_LEAGUE_MSGS__FUNCTIONS_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__HUMANOID_LEAGUE_MSGS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces/msg/detail/humanoid_league_msgs__struct.h"

/// Initialize msg/HumanoidLeagueMsgs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces__msg__HumanoidLeagueMsgs
 * )) before or use
 * custom_interfaces__msg__HumanoidLeagueMsgs__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__init(custom_interfaces__msg__HumanoidLeagueMsgs * msg);

/// Finalize msg/HumanoidLeagueMsgs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__HumanoidLeagueMsgs__fini(custom_interfaces__msg__HumanoidLeagueMsgs * msg);

/// Create msg/HumanoidLeagueMsgs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__HumanoidLeagueMsgs *
custom_interfaces__msg__HumanoidLeagueMsgs__create();

/// Destroy msg/HumanoidLeagueMsgs message.
/**
 * It calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__HumanoidLeagueMsgs__destroy(custom_interfaces__msg__HumanoidLeagueMsgs * msg);

/// Check for msg/HumanoidLeagueMsgs message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__are_equal(const custom_interfaces__msg__HumanoidLeagueMsgs * lhs, const custom_interfaces__msg__HumanoidLeagueMsgs * rhs);

/// Copy a msg/HumanoidLeagueMsgs message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__copy(
  const custom_interfaces__msg__HumanoidLeagueMsgs * input,
  custom_interfaces__msg__HumanoidLeagueMsgs * output);

/// Initialize array of msg/HumanoidLeagueMsgs messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__init(custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * array, size_t size);

/// Finalize array of msg/HumanoidLeagueMsgs messages.
/**
 * It calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__fini(custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * array);

/// Create array of msg/HumanoidLeagueMsgs messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence *
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__create(size_t size);

/// Destroy array of msg/HumanoidLeagueMsgs messages.
/**
 * It calls
 * custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__destroy(custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * array);

/// Check for msg/HumanoidLeagueMsgs message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__are_equal(const custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * lhs, const custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * rhs);

/// Copy an array of msg/HumanoidLeagueMsgs messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__HumanoidLeagueMsgs__Sequence__copy(
  const custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * input,
  custom_interfaces__msg__HumanoidLeagueMsgs__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__HUMANOID_LEAGUE_MSGS__FUNCTIONS_H_
