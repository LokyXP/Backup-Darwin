// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/VisionRobot.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__VisionRobot __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__VisionRobot __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionRobot_
{
  using Type = VisionRobot_<ContainerAllocator>;

  explicit VisionRobot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->left = 0;
      this->center = 0;
      this->right = 0;
      this->far = 0;
      this->med = 0;
      this->close = 0;
    }
  }

  explicit VisionRobot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->left = 0;
      this->center = 0;
      this->right = 0;
      this->far = 0;
      this->med = 0;
      this->close = 0;
    }
  }

  // field types and members
  using _detected_type =
    bool;
  _detected_type detected;
  using _left_type =
    uint8_t;
  _left_type left;
  using _center_type =
    uint8_t;
  _center_type center;
  using _right_type =
    uint8_t;
  _right_type right;
  using _far_type =
    uint8_t;
  _far_type far;
  using _med_type =
    uint8_t;
  _med_type med;
  using _close_type =
    uint8_t;
  _close_type close;

  // setters for named parameter idiom
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__left(
    const uint8_t & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__center(
    const uint8_t & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__right(
    const uint8_t & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__far(
    const uint8_t & _arg)
  {
    this->far = _arg;
    return *this;
  }
  Type & set__med(
    const uint8_t & _arg)
  {
    this->med = _arg;
    return *this;
  }
  Type & set__close(
    const uint8_t & _arg)
  {
    this->close = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::VisionRobot_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::VisionRobot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::VisionRobot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::VisionRobot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__VisionRobot
    std::shared_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__VisionRobot
    std::shared_ptr<custom_interfaces::msg::VisionRobot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionRobot_ & other) const
  {
    if (this->detected != other.detected) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    if (this->far != other.far) {
      return false;
    }
    if (this->med != other.med) {
      return false;
    }
    if (this->close != other.close) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionRobot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionRobot_

// alias to use template instance with default allocator
using VisionRobot =
  custom_interfaces::msg::VisionRobot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION_ROBOT__STRUCT_HPP_
