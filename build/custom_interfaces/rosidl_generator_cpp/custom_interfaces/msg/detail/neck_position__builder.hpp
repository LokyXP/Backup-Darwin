// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/NeckPosition.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/neck_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_NeckPosition_position20
{
public:
  explicit Init_NeckPosition_position20(::custom_interfaces::msg::NeckPosition & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::NeckPosition position20(::custom_interfaces::msg::NeckPosition::_position20_type arg)
  {
    msg_.position20 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::NeckPosition msg_;
};

class Init_NeckPosition_position19
{
public:
  Init_NeckPosition_position19()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeckPosition_position20 position19(::custom_interfaces::msg::NeckPosition::_position19_type arg)
  {
    msg_.position19 = std::move(arg);
    return Init_NeckPosition_position20(msg_);
  }

private:
  ::custom_interfaces::msg::NeckPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::NeckPosition>()
{
  return custom_interfaces::msg::builder::Init_NeckPosition_position19();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__NECK_POSITION__BUILDER_HPP_
