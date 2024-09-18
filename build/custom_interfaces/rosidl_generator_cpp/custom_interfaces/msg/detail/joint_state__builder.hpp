// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointState_type
{
public:
  explicit Init_JointState_type(::custom_interfaces::msg::JointState & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::JointState type(::custom_interfaces::msg::JointState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::JointState msg_;
};

class Init_JointState_info
{
public:
  explicit Init_JointState_info(::custom_interfaces::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_type info(::custom_interfaces::msg::JointState::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_JointState_type(msg_);
  }

private:
  ::custom_interfaces::msg::JointState msg_;
};

class Init_JointState_id
{
public:
  Init_JointState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_info id(::custom_interfaces::msg::JointState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_JointState_info(msg_);
  }

private:
  ::custom_interfaces::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::JointState>()
{
  return custom_interfaces::msg::builder::Init_JointState_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
