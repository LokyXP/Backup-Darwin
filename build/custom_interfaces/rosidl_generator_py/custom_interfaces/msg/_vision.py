# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/Vision.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Vision(type):
    """Metaclass of message 'Vision'."""

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
                'custom_interfaces.msg.Vision')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vision
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vision
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vision
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vision
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vision

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DETECTED__DEFAULT': False,
            'LEFT__DEFAULT': False,
            'CENTER__DEFAULT': False,
            'RIGHT__DEFAULT': False,
            'CENTER_RIGHT__DEFAULT': False,
            'FAR__DEFAULT': False,
            'MED__DEFAULT': False,
            'CLOSE__DEFAULT': False,
        }

    @property
    def DETECTED__DEFAULT(cls):
        """Return default value for message field 'detected'."""
        return False

    @property
    def LEFT__DEFAULT(cls):
        """Return default value for message field 'left'."""
        return False

    @property
    def CENTER__DEFAULT(cls):
        """Return default value for message field 'center'."""
        return False

    @property
    def RIGHT__DEFAULT(cls):
        """Return default value for message field 'right'."""
        return False

    @property
    def CENTER_RIGHT__DEFAULT(cls):
        """Return default value for message field 'center_right'."""
        return False

    @property
    def FAR__DEFAULT(cls):
        """Return default value for message field 'far'."""
        return False

    @property
    def MED__DEFAULT(cls):
        """Return default value for message field 'med'."""
        return False

    @property
    def CLOSE__DEFAULT(cls):
        """Return default value for message field 'close'."""
        return False


class Vision(metaclass=Metaclass_Vision):
    """Message class 'Vision'."""

    __slots__ = [
        '_detected',
        '_left',
        '_center',
        '_right',
        '_center_right',
        '_far',
        '_med',
        '_close',
    ]

    _fields_and_field_types = {
        'detected': 'boolean',
        'left': 'boolean',
        'center': 'boolean',
        'right': 'boolean',
        'center_right': 'boolean',
        'far': 'boolean',
        'med': 'boolean',
        'close': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.detected = kwargs.get(
            'detected', Vision.DETECTED__DEFAULT)
        self.left = kwargs.get(
            'left', Vision.LEFT__DEFAULT)
        self.center = kwargs.get(
            'center', Vision.CENTER__DEFAULT)
        self.right = kwargs.get(
            'right', Vision.RIGHT__DEFAULT)
        self.center_right = kwargs.get(
            'center_right', Vision.CENTER_RIGHT__DEFAULT)
        self.far = kwargs.get(
            'far', Vision.FAR__DEFAULT)
        self.med = kwargs.get(
            'med', Vision.MED__DEFAULT)
        self.close = kwargs.get(
            'close', Vision.CLOSE__DEFAULT)

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
        if self.center_right != other.center_right:
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
                isinstance(value, bool), \
                "The 'left' field must be of type 'bool'"
        self._left = value

    @builtins.property
    def center(self):
        """Message field 'center'."""
        return self._center

    @center.setter
    def center(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'center' field must be of type 'bool'"
        self._center = value

    @builtins.property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right' field must be of type 'bool'"
        self._right = value

    @builtins.property
    def center_right(self):
        """Message field 'center_right'."""
        return self._center_right

    @center_right.setter
    def center_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'center_right' field must be of type 'bool'"
        self._center_right = value

    @builtins.property
    def far(self):
        """Message field 'far'."""
        return self._far

    @far.setter
    def far(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'far' field must be of type 'bool'"
        self._far = value

    @builtins.property
    def med(self):
        """Message field 'med'."""
        return self._med

    @med.setter
    def med(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'med' field must be of type 'bool'"
        self._med = value

    @builtins.property
    def close(self):
        """Message field 'close'."""
        return self._close

    @close.setter
    def close(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'close' field must be of type 'bool'"
        self._close = value
