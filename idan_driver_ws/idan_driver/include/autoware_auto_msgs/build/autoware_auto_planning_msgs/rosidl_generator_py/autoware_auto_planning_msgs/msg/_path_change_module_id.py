# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_planning_msgs:msg/PathChangeModuleId.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathChangeModuleId(type):
    """Metaclass of message 'PathChangeModuleId'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'AVOIDANCE': 1,
        'LANE_CHANGE': 2,
        'FORCE_LANE_CHANGE': 3,
        'PULL_OVER': 4,
        'PULL_OUT': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_planning_msgs.msg.PathChangeModuleId')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_change_module_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_change_module_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_change_module_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_change_module_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_change_module_id

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'AVOIDANCE': cls.__constants['AVOIDANCE'],
            'LANE_CHANGE': cls.__constants['LANE_CHANGE'],
            'FORCE_LANE_CHANGE': cls.__constants['FORCE_LANE_CHANGE'],
            'PULL_OVER': cls.__constants['PULL_OVER'],
            'PULL_OUT': cls.__constants['PULL_OUT'],
            'TYPE__DEFAULT': 0,
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_PathChangeModuleId.__constants['NONE']

    @property
    def AVOIDANCE(self):
        """Message constant 'AVOIDANCE'."""
        return Metaclass_PathChangeModuleId.__constants['AVOIDANCE']

    @property
    def LANE_CHANGE(self):
        """Message constant 'LANE_CHANGE'."""
        return Metaclass_PathChangeModuleId.__constants['LANE_CHANGE']

    @property
    def FORCE_LANE_CHANGE(self):
        """Message constant 'FORCE_LANE_CHANGE'."""
        return Metaclass_PathChangeModuleId.__constants['FORCE_LANE_CHANGE']

    @property
    def PULL_OVER(self):
        """Message constant 'PULL_OVER'."""
        return Metaclass_PathChangeModuleId.__constants['PULL_OVER']

    @property
    def PULL_OUT(self):
        """Message constant 'PULL_OUT'."""
        return Metaclass_PathChangeModuleId.__constants['PULL_OUT']

    @property
    def TYPE__DEFAULT(cls):
        """Return default value for message field 'type'."""
        return 0


class PathChangeModuleId(metaclass=Metaclass_PathChangeModuleId):
    """
    Message class 'PathChangeModuleId'.

    Constants:
      NONE
      AVOIDANCE
      LANE_CHANGE
      FORCE_LANE_CHANGE
      PULL_OVER
      PULL_OUT
    """

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get(
            'type', PathChangeModuleId.TYPE__DEFAULT)

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
