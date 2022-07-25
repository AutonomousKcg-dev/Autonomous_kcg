# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracked_lane_msgs:msg/Lane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Lane(type):
    """Metaclass of message 'Lane'."""

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
            module = import_type_support('tracked_lane_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tracked_lane_msgs.msg.Lane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane

            from tracked_lane_msgs.msg import Boundary
            if Boundary.__class__._TYPE_SUPPORT is None:
                Boundary.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Lane(metaclass=Metaclass_Lane):
    """Message class 'Lane'."""

    __slots__ = [
        '_left_boundary',
        '_right_boundary',
    ]

    _fields_and_field_types = {
        'left_boundary': 'tracked_lane_msgs/Boundary',
        'right_boundary': 'tracked_lane_msgs/Boundary',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Boundary'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Boundary'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from tracked_lane_msgs.msg import Boundary
        self.left_boundary = kwargs.get('left_boundary', Boundary())
        from tracked_lane_msgs.msg import Boundary
        self.right_boundary = kwargs.get('right_boundary', Boundary())

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
        if self.left_boundary != other.left_boundary:
            return False
        if self.right_boundary != other.right_boundary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def left_boundary(self):
        """Message field 'left_boundary'."""
        return self._left_boundary

    @left_boundary.setter
    def left_boundary(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Boundary
            assert \
                isinstance(value, Boundary), \
                "The 'left_boundary' field must be a sub message of type 'Boundary'"
        self._left_boundary = value

    @property
    def right_boundary(self):
        """Message field 'right_boundary'."""
        return self._right_boundary

    @right_boundary.setter
    def right_boundary(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Boundary
            assert \
                isinstance(value, Boundary), \
                "The 'right_boundary' field must be a sub message of type 'Boundary'"
        self._right_boundary = value
