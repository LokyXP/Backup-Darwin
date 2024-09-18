// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/vision__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interfaces/msg/detail/vision__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_serialize(
  const custom_interfaces::msg::Vision & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detected
  cdr << (ros_message.detected ? true : false);
  // Member: left
  cdr << (ros_message.left ? true : false);
  // Member: center
  cdr << (ros_message.center ? true : false);
  // Member: right
  cdr << (ros_message.right ? true : false);
  // Member: center_right
  cdr << (ros_message.center_right ? true : false);
  // Member: far
  cdr << (ros_message.far ? true : false);
  // Member: med
  cdr << (ros_message.med ? true : false);
  // Member: close
  cdr << (ros_message.close ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interfaces::msg::Vision & ros_message)
{
  // Member: detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.detected = tmp ? true : false;
  }

  // Member: left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left = tmp ? true : false;
  }

  // Member: center
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.center = tmp ? true : false;
  }

  // Member: right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right = tmp ? true : false;
  }

  // Member: center_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.center_right = tmp ? true : false;
  }

  // Member: far
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.far = tmp ? true : false;
  }

  // Member: med
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.med = tmp ? true : false;
  }

  // Member: close
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.close = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
get_serialized_size(
  const custom_interfaces::msg::Vision & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detected
  {
    size_t item_size = sizeof(ros_message.detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left
  {
    size_t item_size = sizeof(ros_message.left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center
  {
    size_t item_size = sizeof(ros_message.center);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right
  {
    size_t item_size = sizeof(ros_message.right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: center_right
  {
    size_t item_size = sizeof(ros_message.center_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: far
  {
    size_t item_size = sizeof(ros_message.far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: med
  {
    size_t item_size = sizeof(ros_message.med);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: close
  {
    size_t item_size = sizeof(ros_message.close);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
max_serialized_size_Vision(
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


  // Member: detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: center
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: center_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: med
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: close
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
    using DataType = custom_interfaces::msg::Vision;
    is_plain =
      (
      offsetof(DataType, close) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Vision__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::Vision *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Vision__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interfaces::msg::Vision *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Vision__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::Vision *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Vision__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Vision(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Vision__callbacks = {
  "custom_interfaces::msg",
  "Vision",
  _Vision__cdr_serialize,
  _Vision__cdr_deserialize,
  _Vision__get_serialized_size,
  _Vision__max_serialized_size
};

static rosidl_message_type_support_t _Vision__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Vision__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::Vision>()
{
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_Vision__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, msg, Vision)() {
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_Vision__handle;
}

#ifdef __cplusplus
}
#endif
