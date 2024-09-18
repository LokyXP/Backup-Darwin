// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/VisionRobot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/vision_robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionRobot & msg,
  std::ostream & out)
{
  out << "{";
  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    rosidl_generator_traits::value_to_yaml(msg.center, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << ", ";
  }

  // member: far
  {
    out << "far: ";
    rosidl_generator_traits::value_to_yaml(msg.far, out);
    out << ", ";
  }

  // member: med
  {
    out << "med: ";
    rosidl_generator_traits::value_to_yaml(msg.med, out);
    out << ", ";
  }

  // member: close
  {
    out << "close: ";
    rosidl_generator_traits::value_to_yaml(msg.close, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center: ";
    rosidl_generator_traits::value_to_yaml(msg.center, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }

  // member: far
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "far: ";
    rosidl_generator_traits::value_to_yaml(msg.far, out);
    out << "\n";
  }

  // member: med
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "med: ";
    rosidl_generator_traits::value_to_yaml(msg.med, out);
    out << "\n";
  }

  // member: close
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close: ";
    rosidl_generator_traits::value_to_yaml(msg.close, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionRobot & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces::msg::VisionRobot & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::VisionRobot & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::VisionRobot>()
{
  return "custom_interfaces::msg::VisionRobot";
}

template<>
inline const char * name<custom_interfaces::msg::VisionRobot>()
{
  return "custom_interfaces/msg/VisionRobot";
}

template<>
struct has_fixed_size<custom_interfaces::msg::VisionRobot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::VisionRobot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::VisionRobot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__TRAITS_HPP_
