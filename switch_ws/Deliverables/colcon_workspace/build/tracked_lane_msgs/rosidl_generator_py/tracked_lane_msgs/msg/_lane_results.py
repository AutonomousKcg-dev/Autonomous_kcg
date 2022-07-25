# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracked_lane_msgs:msg/LaneResults.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneResults(type):
    """Metaclass of message 'LaneResults'."""

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
                'tracked_lane_msgs.msg.LaneResults')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_results
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_results
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_results
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_results
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_results

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from tracked_lane_msgs.msg import Lane
            if Lane.__class__._TYPE_SUPPORT is None:
                Lane.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneResults(metaclass=Metaclass_LaneResults):
    """Message class 'LaneResults'."""

    __slots__ = [
        '_header',
        '_adjacent_left',
        '_num_adjacent_left',
        '_adjacent_right',
        '_num_adjacent_right',
        '_ego_lane',
        '_road_boundary',
        '_total_number_of_lanes',
        '_algo_description',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'adjacent_left': 'sequence<tracked_lane_msgs/Lane>',
        'num_adjacent_left': 'uint32',
        'adjacent_right': 'sequence<tracked_lane_msgs/Lane>',
        'num_adjacent_right': 'uint32',
        'ego_lane': 'tracked_lane_msgs/Lane',
        'road_boundary': 'tracked_lane_msgs/Lane',
        'total_number_of_lanes': 'int32',
        'algo_description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Lane')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Lane')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Lane'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tracked_lane_msgs', 'msg'], 'Lane'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.adjacent_left = kwargs.get('adjacent_left', [])
        self.num_adjacent_left = kwargs.get('num_adjacent_left', int())
        self.adjacent_right = kwargs.get('adjacent_right', [])
        self.num_adjacent_right = kwargs.get('num_adjacent_right', int())
        from tracked_lane_msgs.msg import Lane
        self.ego_lane = kwargs.get('ego_lane', Lane())
        from tracked_lane_msgs.msg import Lane
        self.road_boundary = kwargs.get('road_boundary', Lane())
        self.total_number_of_lanes = kwargs.get('total_number_of_lanes', int())
        self.algo_description = kwargs.get('algo_description', str())

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
        if self.header != other.header:
            return False
        if self.adjacent_left != other.adjacent_left:
            return False
        if self.num_adjacent_left != other.num_adjacent_left:
            return False
        if self.adjacent_right != other.adjacent_right:
            return False
        if self.num_adjacent_right != other.num_adjacent_right:
            return False
        if self.ego_lane != other.ego_lane:
            return False
        if self.road_boundary != other.road_boundary:
            return False
        if self.total_number_of_lanes != other.total_number_of_lanes:
            return False
        if self.algo_description != other.algo_description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def adjacent_left(self):
        """Message field 'adjacent_left'."""
        return self._adjacent_left

    @adjacent_left.setter
    def adjacent_left(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Lane
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Lane) for v in value) and
                 True), \
                "The 'adjacent_left' field must be a set or sequence and each value of type 'Lane'"
        self._adjacent_left = value

    @property
    def num_adjacent_left(self):
        """Message field 'num_adjacent_left'."""
        return self._num_adjacent_left

    @num_adjacent_left.setter
    def num_adjacent_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_adjacent_left' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_adjacent_left' field must be an unsigned integer in [0, 4294967295]"
        self._num_adjacent_left = value

    @property
    def adjacent_right(self):
        """Message field 'adjacent_right'."""
        return self._adjacent_right

    @adjacent_right.setter
    def adjacent_right(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Lane
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Lane) for v in value) and
                 True), \
                "The 'adjacent_right' field must be a set or sequence and each value of type 'Lane'"
        self._adjacent_right = value

    @property
    def num_adjacent_right(self):
        """Message field 'num_adjacent_right'."""
        return self._num_adjacent_right

    @num_adjacent_right.setter
    def num_adjacent_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_adjacent_right' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_adjacent_right' field must be an unsigned integer in [0, 4294967295]"
        self._num_adjacent_right = value

    @property
    def ego_lane(self):
        """Message field 'ego_lane'."""
        return self._ego_lane

    @ego_lane.setter
    def ego_lane(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Lane
            assert \
                isinstance(value, Lane), \
                "The 'ego_lane' field must be a sub message of type 'Lane'"
        self._ego_lane = value

    @property
    def road_boundary(self):
        """Message field 'road_boundary'."""
        return self._road_boundary

    @road_boundary.setter
    def road_boundary(self, value):
        if __debug__:
            from tracked_lane_msgs.msg import Lane
            assert \
                isinstance(value, Lane), \
                "The 'road_boundary' field must be a sub message of type 'Lane'"
        self._road_boundary = value

    @property
    def total_number_of_lanes(self):
        """Message field 'total_number_of_lanes'."""
        return self._total_number_of_lanes

    @total_number_of_lanes.setter
    def total_number_of_lanes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_number_of_lanes' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_number_of_lanes' field must be an integer in [-2147483648, 2147483647]"
        self._total_number_of_lanes = value

    @property
    def algo_description(self):
        """Message field 'algo_description'."""
        return self._algo_description

    @algo_description.setter
    def algo_description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'algo_description' field must be of type 'str'"
        self._algo_description = value
