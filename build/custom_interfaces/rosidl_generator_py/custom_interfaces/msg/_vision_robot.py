# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/VisionRobot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionRobot(type):
    """Metaclass of message 'VisionRobot'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_interfaces.msg.VisionRobot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vision_robot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vision_robot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vision_robot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vision_robot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vision_robot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionRobot(metaclass=Metaclass_VisionRobot):
    """Message class 'VisionRobot'."""

    __slots__ = [
        '_detected',
        '_left',
        '_center',
        '_right',
        '_far',
        '_med',
        '_close',
    ]

    _fields_and_field_types = {
        'detected': 'boolean',
        'left': 'uint8',
        'center': 'uint8',
        'right': 'uint8',
        'far': 'uint8',
        'med': 'uint8',
        'close': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected = kwargs.get('detected', bool())
        self.left = kwargs.get('left', int())
        self.center = kwargs.get('center', int())
        self.right = kwargs.get('right', int())
        self.far = kwargs.get('far', int())
        self.med = kwargs.get('med', int())
        self.close = kwargs.get('close', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.detected != other.detected:
            return False
        if self.left != other.left:
            return False
        if self.center != other.center:
            return False
        if self.right != other.right:
            return False
        if self.far != other.far:
            return False
        if self.med != other.med:
            return False
        if self.close != other.close:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def detected(self):
        """Message field 'detected'."""
        return self._detected

    @detected.setter
    def detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'detected' field must be of type 'bool'"
        self._detected = value

    @builtins.property
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left' field must be an unsigned integer in [0, 255]"
        self._left = value

    @builtins.property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'center' field must be an unsigned integer in [0, 255]"
        self._center = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right' field must be an unsigned integer in [0, 255]"
        self._right = value

    @builtins.property
    def far(self):
        """Message field 'far'."""
        return self._far

    @far.setter
    def far(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'far' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'far' field must be an unsigned integer in [0, 255]"
        self._far = value

    @builtins.property
    def med(self):
        """Message field 'med'."""
        return self._med

    @med.setter
    def med(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'med' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'med' field must be an unsigned integer in [0, 255]"
        self._med = value

    @builtins.property
    def close(self):
        """Message field 'close'."""
        return self._close

    @close.setter
    def close(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'close' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'close' field must be an unsigned integer in [0, 255]"
        self._close = value
