// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/vision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vision_close
{
public:
  explicit Init_Vision_close(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::Vision close(::custom_interfaces::msg::Vision::_close_type arg)
  {
    msg_.close = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_med
{
public:
  explicit Init_Vision_med(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_close med(::custom_interfaces::msg::Vision::_med_type arg)
  {
    msg_.med = std::move(arg);
    return Init_Vision_close(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_far
{
public:
  explicit Init_Vision_far(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_med far(::custom_interfaces::msg::Vision::_far_type arg)
  {
    msg_.far = std::move(arg);
    return Init_Vision_med(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_center_right
{
public:
  explicit Init_Vision_center_right(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_far center_right(::custom_interfaces::msg::Vision::_center_right_type arg)
  {
    msg_.center_right = std::move(arg);
    return Init_Vision_far(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_right
{
public:
  explicit Init_Vision_right(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_center_right right(::custom_interfaces::msg::Vision::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_Vision_center_right(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_center
{
public:
  explicit Init_Vision_center(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_right center(::custom_interfaces::msg::Vision::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Vision_right(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_left
{
public:
  explicit Init_Vision_left(::custom_interfaces::msg::Vision & msg)
  : msg_(msg)
  {}
  Init_Vision_center left(::custom_interfaces::msg::Vision::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_Vision_center(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

class Init_Vision_detected
{
public:
  Init_Vision_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vision_left detected(::custom_interfaces::msg::Vision::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_Vision_left(msg_);
  }

private:
  ::custom_interfaces::msg::Vision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::Vision>()
{
  return custom_interfaces::msg::builder::Init_Vision_detected();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION__BUILDER_HPP_
