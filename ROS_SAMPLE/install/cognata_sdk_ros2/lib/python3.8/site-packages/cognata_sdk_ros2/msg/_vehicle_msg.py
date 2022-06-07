# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/VehicleMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleMsg(type):
    """Metaclass of message 'VehicleMsg'."""

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
            module = import_type_support('cognata_sdk_ros2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cognata_sdk_ros2.msg.VehicleMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_msg

            from cognata_sdk_ros2.msg import ObjectDescription
            if ObjectDescription.__class__._TYPE_SUPPORT is None:
                ObjectDescription.__class__.__import_type_support__()

            from cognata_sdk_ros2.msg import WheelMsg
            if WheelMsg.__class__._TYPE_SUPPORT is None:
                WheelMsg.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleMsg(metaclass=Metaclass_VehicleMsg):
    """Message class 'VehicleMsg'."""

    __slots__ = [
        '_header',
        '_description',
        '_vehicle_type',
        '_vehicle_role',
        '_navigation_segment',
        '_lane_id',
        '_lanes_from_left',
        '_head_light_state',
        '_brake_light_state',
        '_reverse_light_state',
        '_signal_state',
        '_signal_light',
        '_wheels',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'description': 'cognata_sdk_ros2/ObjectDescription',
        'vehicle_type': 'string',
        'vehicle_role': 'string',
        'navigation_segment': 'string',
        'lane_id': 'string',
        'lanes_from_left': 'string',
        'head_light_state': 'boolean',
        'brake_light_state': 'boolean',
        'reverse_light_state': 'boolean',
        'signal_state': 'string',
        'signal_light': 'string',
        'wheels': 'sequence<cognata_sdk_ros2/WheelMsg>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'ObjectDescription'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'WheelMsg')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from cognata_sdk_ros2.msg import ObjectDescription
        self.description = kwargs.get('description', ObjectDescription())
        self.vehicle_type = kwargs.get('vehicle_type', str())
        self.vehicle_role = kwargs.get('vehicle_role', str())
        self.navigation_segment = kwargs.get('navigation_segment', str())
        self.lane_id = kwargs.get('lane_id', str())
        self.lanes_from_left = kwargs.get('lanes_from_left', str())
        self.head_light_state = kwargs.get('head_light_state', bool())
        self.brake_light_state = kwargs.get('brake_light_state', bool())
        self.reverse_light_state = kwargs.get('reverse_light_state', bool())
        self.signal_state = kwargs.get('signal_state', str())
        self.signal_light = kwargs.get('signal_light', str())
        self.wheels = kwargs.get('wheels', [])

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
        if self.description != other.description:
            return False
        if self.vehicle_type != other.vehicle_type:
            return False
        if self.vehicle_role != other.vehicle_role:
            return False
        if self.navigation_segment != other.navigation_segment:
            return False
        if self.lane_id != other.lane_id:
            return False
        if self.lanes_from_left != other.lanes_from_left:
            return False
        if self.head_light_state != other.head_light_state:
            return False
        if self.brake_light_state != other.brake_light_state:
            return False
        if self.reverse_light_state != other.reverse_light_state:
            return False
        if self.signal_state != other.signal_state:
            return False
        if self.signal_light != other.signal_light:
            return False
        if self.wheels != other.wheels:
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
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import ObjectDescription
            assert \
                isinstance(value, ObjectDescription), \
                "The 'description' field must be a sub message of type 'ObjectDescription'"
        self._description = value

    @property
    def vehicle_type(self):
        """Message field 'vehicle_type'."""
        return self._vehicle_type

    @vehicle_type.setter
    def vehicle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_type' field must be of type 'str'"
        self._vehicle_type = value

    @property
    def vehicle_role(self):
        """Message field 'vehicle_role'."""
        return self._vehicle_role

    @vehicle_role.setter
    def vehicle_role(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'vehicle_role' field must be of type 'str'"
        self._vehicle_role = value

    @property
    def navigation_segment(self):
        """Message field 'navigation_segment'."""
        return self._navigation_segment

    @navigation_segment.setter
    def navigation_segment(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'navigation_segment' field must be of type 'str'"
        self._navigation_segment = value

    @property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_id' field must be of type 'str'"
        self._lane_id = value

    @property
    def lanes_from_left(self):
        """Message field 'lanes_from_left'."""
        return self._lanes_from_left

    @lanes_from_left.setter
    def lanes_from_left(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lanes_from_left' field must be of type 'str'"
        self._lanes_from_left = value

    @property
    def head_light_state(self):
        """Message field 'head_light_state'."""
        return self._head_light_state

    @head_light_state.setter
    def head_light_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'head_light_state' field must be of type 'bool'"
        self._head_light_state = value

    @property
    def brake_light_state(self):
        """Message field 'brake_light_state'."""
        return self._brake_light_state

    @brake_light_state.setter
    def brake_light_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'brake_light_state' field must be of type 'bool'"
        self._brake_light_state = value

    @property
    def reverse_light_state(self):
        """Message field 'reverse_light_state'."""
        return self._reverse_light_state

    @reverse_light_state.setter
    def reverse_light_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reverse_light_state' field must be of type 'bool'"
        self._reverse_light_state = value

    @property
    def signal_state(self):
        """Message field 'signal_state'."""
        return self._signal_state

    @signal_state.setter
    def signal_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'signal_state' field must be of type 'str'"
        self._signal_state = value

    @property
    def signal_light(self):
        """Message field 'signal_light'."""
        return self._signal_light

    @signal_light.setter
    def signal_light(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'signal_light' field must be of type 'str'"
        self._signal_light = value

    @property
    def wheels(self):
        """Message field 'wheels'."""
        return self._wheels

    @wheels.setter
    def wheels(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import WheelMsg
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
                 all(isinstance(v, WheelMsg) for v in value) and
                 True), \
                "The 'wheels' field must be a set or sequence and each value of type 'WheelMsg'"
        self._wheels = value
