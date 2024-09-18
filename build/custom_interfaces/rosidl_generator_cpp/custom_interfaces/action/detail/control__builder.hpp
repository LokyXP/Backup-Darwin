// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:action/Control.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_
#define CUSTOM_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/action/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Goal_action_number
{
public:
  Init_Control_Goal_action_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Control_Goal action_number(::custom_interfaces::action::Control_Goal::_action_number_type arg)
  {
    msg_.action_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_Goal>()
{
  return custom_interfaces::action::builder::Init_Control_Goal_action_number();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Result_finished
{
public:
  Init_Control_Result_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Control_Result finished(::custom_interfaces::action::Control_Result::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_Result>()
{
  return custom_interfaces::action::builder::Init_Control_Result_finished();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_Feedback_movements_remaining
{
public:
  Init_Control_Feedback_movements_remaining()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Control_Feedback movements_remaining(::custom_interfaces::action::Control_Feedback::_movements_remaining_type arg)
  {
    msg_.movements_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_Feedback>()
{
  return custom_interfaces::action::builder::Init_Control_Feedback_movements_remaining();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Request_goal
{
public:
  explicit Init_Control_SendGoal_Request_goal(::custom_interfaces::action::Control_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Control_SendGoal_Request goal(::custom_interfaces::action::Control_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_SendGoal_Request msg_;
};

class Init_Control_SendGoal_Request_goal_id
{
public:
  Init_Control_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Request_goal goal_id(::custom_interfaces::action::Control_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces::action::Control_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_SendGoal_Request>()
{
  return custom_interfaces::action::builder::Init_Control_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_SendGoal_Response_stamp
{
public:
  explicit Init_Control_SendGoal_Response_stamp(::custom_interfaces::action::Control_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Control_SendGoal_Response stamp(::custom_interfaces::action::Control_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_SendGoal_Response msg_;
};

class Init_Control_SendGoal_Response_accepted
{
public:
  Init_Control_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_SendGoal_Response_stamp accepted(::custom_interfaces::action::Control_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Control_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces::action::Control_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_SendGoal_Response>()
{
  return custom_interfaces::action::builder::Init_Control_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Request_goal_id
{
public:
  Init_Control_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::action::Control_GetResult_Request goal_id(::custom_interfaces::action::Control_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_GetResult_Request>()
{
  return custom_interfaces::action::builder::Init_Control_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_GetResult_Response_result
{
public:
  explicit Init_Control_GetResult_Response_result(::custom_interfaces::action::Control_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Control_GetResult_Response result(::custom_interfaces::action::Control_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_GetResult_Response msg_;
};

class Init_Control_GetResult_Response_status
{
public:
  Init_Control_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_GetResult_Response_result status(::custom_interfaces::action::Control_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Control_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces::action::Control_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_GetResult_Response>()
{
  return custom_interfaces::action::builder::Init_Control_GetResult_Response_status();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace action
{

namespace builder
{

class Init_Control_FeedbackMessage_feedback
{
public:
  explicit Init_Control_FeedbackMessage_feedback(::custom_interfaces::action::Control_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::action::Control_FeedbackMessage feedback(::custom_interfaces::action::Control_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::action::Control_FeedbackMessage msg_;
};

class Init_Control_FeedbackMessage_goal_id
{
public:
  Init_Control_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_FeedbackMessage_feedback goal_id(::custom_interfaces::action::Control_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Control_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces::action::Control_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::action::Control_FeedbackMessage>()
{
  return custom_interfaces::action::builder::Init_Control_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__ACTION__DETAIL__CONTROL__BUILDER_HPP_
