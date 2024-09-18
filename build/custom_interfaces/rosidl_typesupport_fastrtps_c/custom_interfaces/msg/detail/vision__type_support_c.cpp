// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/vision__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_interfaces/msg/detail/vision__struct.h"
#include "custom_interfaces/msg/detail/vision__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Vision__ros_msg_type = custom_interfaces__msg__Vision;

static bool _Vision__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Vision__ros_msg_type * ros_message = static_cast<const _Vision__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    cdr << (ros_message->detected ? true : false);
  }

  // Field name: left
  {
    cdr << (ros_message->left ? true : false);
  }

  // Field name: center
  {
    cdr << (ros_message->center ? true : false);
  }

  // Field name: right
  {
    cdr << (ros_message->right ? true : false);
  }

  // Field name: center_right
  {
    cdr << (ros_message->center_right ? true : false);
  }

  // Field name: far
  {
    cdr << (ros_message->far ? true : false);
  }

  // Field name: med
  {
    cdr << (ros_message->med ? true : false);
  }

  // Field name: close
  {
    cdr << (ros_message->close ? true : false);
  }

  return true;
}

static bool _Vision__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Vision__ros_msg_type * ros_message = static_cast<_Vision__ros_msg_type *>(untyped_ros_message);
  // Field name: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detected = tmp ? true : false;
  }

  // Field name: left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left = tmp ? true : false;
  }

  // Field name: center
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->center = tmp ? true : false;
  }

  // Field name: right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right = tmp ? true : false;
  }

  // Field name: center_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->center_right = tmp ? true : false;
  }

  // Field name: far
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->far = tmp ? true : false;
  }

  // Field name: med
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->med = tmp ? true : false;
  }

  // Field name: close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->close = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t get_serialized_size_custom_interfaces__msg__Vision(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Vision__ros_msg_type * ros_message = static_cast<const _Vision__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detected
  {
    size_t item_size = sizeof(ros_message->detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left
  {
    size_t item_size = sizeof(ros_message->left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center
  {
    size_t item_size = sizeof(ros_message->center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right
  {
    size_t item_size = sizeof(ros_message->right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_right
  {
    size_t item_size = sizeof(ros_message->center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name far
  {
    size_t item_size = sizeof(ros_message->far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name med
  {
    size_t item_size = sizeof(ros_message->med);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name close
  {
    size_t item_size = sizeof(ros_message->close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Vision__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_interfaces__msg__Vision(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_interfaces
size_t max_serialized_size_custom_interfaces__msg__Vision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: center_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: med
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: close
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_interfaces__msg__Vision;
    is_plain =
      (
      offsetof(DataType, close) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Vision__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_interfaces__msg__Vision(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Vision = {
  "custom_interfaces::msg",
  "Vision",
  _Vision__cdr_serialize,
  _Vision__cdr_deserialize,
  _Vision__get_serialized_size,
  _Vision__max_serialized_size
};

static rosidl_message_type_support_t _Vision__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Vision,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_interfaces, msg, Vision)() {
  return &_Vision__type_support;
}

#if defined(__cplusplus)
}
#endif
