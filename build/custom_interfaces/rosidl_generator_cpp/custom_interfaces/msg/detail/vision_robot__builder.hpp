// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/VisionRobot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/msg/detail/vision_robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_VisionRobot_close
{
public:
  explicit Init_VisionRobot_close(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::msg::VisionRobot close(::custom_interfaces::msg::VisionRobot::_close_type arg)
  {
    msg_.close = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_med
{
public:
  explicit Init_VisionRobot_med(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  Init_VisionRobot_close med(::custom_interfaces::msg::VisionRobot::_med_type arg)
  {
    msg_.med = std::move(arg);
    return Init_VisionRobot_close(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_far
{
public:
  explicit Init_VisionRobot_far(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  Init_VisionRobot_med far(::custom_interfaces::msg::VisionRobot::_far_type arg)
  {
    msg_.far = std::move(arg);
    return Init_VisionRobot_med(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_right
{
public:
  explicit Init_VisionRobot_right(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  Init_VisionRobot_far right(::custom_interfaces::msg::VisionRobot::_right_type arg)
  {
    msg_.right = std::move(arg);
    return Init_VisionRobot_far(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_center
{
public:
  explicit Init_VisionRobot_center(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  Init_VisionRobot_right center(::custom_interfaces::msg::VisionRobot::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_VisionRobot_right(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_left
{
public:
  explicit Init_VisionRobot_left(::custom_interfaces::msg::VisionRobot & msg)
  : msg_(msg)
  {}
  Init_VisionRobot_center left(::custom_interfaces::msg::VisionRobot::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_VisionRobot_center(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

class Init_VisionRobot_detected
{
public:
  Init_VisionRobot_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionRobot_left detected(::custom_interfaces::msg::VisionRobot::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_VisionRobot_left(msg_);
  }

private:
  ::custom_interfaces::msg::VisionRobot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::VisionRobot>()
{
  return custom_interfaces::msg::builder::Init_VisionRobot_detected();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__BUILDER_HPP_
