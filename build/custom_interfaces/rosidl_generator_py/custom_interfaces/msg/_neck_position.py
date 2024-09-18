# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_interfaces:msg/NeckPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NeckPosition(type):
    """Metaclass of message 'NeckPosition'."""

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
                'custom_interfaces.msg.NeckPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__neck_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__neck_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__neck_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__neck_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__neck_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSITION19__DEFAULT': 2048,
            'POSITION20__DEFAULT': 2048,
        }

    @property
    def POSITION19__DEFAULT(cls):
        """Return default value for message field 'position19'."""
        return 2048

    @property
    def POSITION20__DEFAULT(cls):
        """Return default value for message field 'position20'."""
        return 2048


class NeckPosition(metaclass=Metaclass_NeckPosition):
    """Message class 'NeckPosition'."""

    __slots__ = [
        '_position19',
        '_position20',
    ]

    _fields_and_field_types = {
        'position19': 'int32',
        'position20': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position19 = kwargs.get(
            'position19', NeckPosition.POSITION19__DEFAULT)
        self.position20 = kwargs.get(
            'position20', NeckPosition.POSITION20__DEFAULT)

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
        if self.position19 != other.position19:
            return False
        if self.position20 != other.position20:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position19(self):
        """Message field 'position19'."""
        return self._position19

    @position19.setter
    def position19(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position19' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position19' field must be an integer in [-2147483648, 2147483647]"
        self._position19 = value

    @builtins.property
    def position20(self):
        """Message field 'position20'."""
        return self._position20

    @position20.setter
    def position20(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'position20' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'position20' field must be an integer in [-2147483648, 2147483647]"
        self._position20 = value
