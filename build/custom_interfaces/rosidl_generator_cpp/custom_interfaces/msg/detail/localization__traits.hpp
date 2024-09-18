// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces:msg/Localization.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces/msg/detail/localization__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Localization & msg,
  std::ostream & out)
{
  out << "{";
  // member: xpos
  {
    out << "xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.xpos, out);
    out << ", ";
  }

  // member: ypos
  {
    out << "ypos: ";
    rosidl_generator_traits::value_to_yaml(msg.ypos, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << ", ";
  }

  // member: standard_deviation
  {
    out << "standard_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_deviation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Localization & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xpos: ";
    rosidl_generator_traits::value_to_yaml(msg.xpos, out);
    out << "\n";
  }

  // member: ypos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ypos: ";
    rosidl_generator_traits::value_to_yaml(msg.ypos, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }

  // member: standard_deviation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standard_deviation: ";
    rosidl_generator_traits::value_to_yaml(msg.standard_deviation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Localization & msg, bool use_flow_style = false)
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
  const custom_interfaces::msg::Localization & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces::msg::Localization & msg)
{
  return custom_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces::msg::Localization>()
{
  return "custom_interfaces::msg::Localization";
}

template<>
inline const char * name<custom_interfaces::msg::Localization>()
{
  return "custom_interfaces/msg/Localization";
}

template<>
struct has_fixed_size<custom_interfaces::msg::Localization>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_interfaces::msg::Localization>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_interfaces::msg::Localization>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__LOCALIZATION__TRAITS_HPP_
