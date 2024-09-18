// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/Vision.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__Vision __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__Vision __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vision_
{
  using Type = Vision_<ContainerAllocator>;

  explicit Vision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->detected = false;
      this->left = false;
      this->center = false;
      this->right = false;
      this->center_right = false;
      this->far = false;
      this->med = false;
      this->close = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->detected = false;
      this->left = false;
      this->center = false;
      this->right = false;
      this->center_right = false;
      this->far = false;
      this->med = false;
      this->close = false;
    }
  }

  explicit Vision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->detected = false;
      this->left = false;
      this->center = false;
      this->right = false;
      this->center_right = false;
      this->far = false;
      this->med = false;
      this->close = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->detected = false;
      this->left = false;
      this->center = false;
      this->right = false;
      this->center_right = false;
      this->far = false;
      this->med = false;
      this->close = false;
    }
  }

  // field types and members
  using _detected_type =
    bool;
  _detected_type detected;
  using _left_type =
    bool;
  _left_type left;
  using _center_type =
    bool;
  _center_type center;
  using _right_type =
    bool;
  _right_type right;
  using _center_right_type =
    bool;
  _center_right_type center_right;
  using _far_type =
    bool;
  _far_type far;
  using _med_type =
    bool;
  _med_type med;
  using _close_type =
    bool;
  _close_type close;

  // setters for named parameter idiom
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__left(
    const bool & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__center(
    const bool & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__right(
    const bool & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__center_right(
    const bool & _arg)
  {
    this->center_right = _arg;
    return *this;
  }
  Type & set__far(
    const bool & _arg)
  {
    this->far = _arg;
    return *this;
  }
  Type & set__med(
    const bool & _arg)
  {
    this->med = _arg;
    return *this;
  }
  Type & set__close(
    const bool & _arg)
  {
    this->close = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::Vision_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::Vision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::Vision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::Vision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Vision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Vision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::Vision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::Vision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::Vision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::Vision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__Vision
    std::shared_ptr<custom_interfaces::msg::Vision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__Vision
    std::shared_ptr<custom_interfaces::msg::Vision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vision_ & other) const
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
    if (this->center_right != other.center_right) {
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
  bool operator!=(const Vision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vision_

// alias to use template instance with default allocator
using Vision =
  custom_interfaces::msg::Vision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VISION__STRUCT_HPP_
