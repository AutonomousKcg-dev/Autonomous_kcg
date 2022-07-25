# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/GPSAdditionalData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GPSAdditionalData(type):
    """Metaclass of message 'GPSAdditionalData'."""

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
                'cognata_sdk_ros2.msg.GPSAdditionalData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_additional_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_additional_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_additional_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_additional_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_additional_data

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class GPSAdditionalData(metaclass=Metaclass_GPSAdditionalData):
    """Message class 'GPSAdditionalData'."""

    __slots__ = [
        '_header',
        '_speed',
        '_lane_width',
        '_lane_offset',
        '_position',
        '_velocity_local_3d',
        '_angular_acceleration_local_3d',
        '_lane_number',
        '_navigation_segment',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'speed': 'float',
        'lane_width': 'float',
        'lane_offset': 'float',
        'position': 'geometry_msgs/Vector3',
        'velocity_local_3d': 'geometry_msgs/Vector3',
        'angular_acceleration_local_3d': 'geometry_msgs/Vector3',
        'lane_number': 'int32',
        'navigation_segment': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.speed = kwargs.get('speed', float())
        self.lane_width = kwargs.get('lane_width', float())
        self.lane_offset = kwargs.get('lane_offset', float())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        from geometry_msgs.msg import Vector3
        self.velocity_local_3d = kwargs.get('velocity_local_3d', Vector3())
        from geometry_msgs.msg import Vector3
        self.angular_acceleration_local_3d = kwargs.get('angular_acceleration_local_3d', Vector3())
        self.lane_number = kwargs.get('lane_number', int())
        self.navigation_segment = kwargs.get('navigation_segment', int())

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
        if self.speed != other.speed:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.lane_offset != other.lane_offset:
            return False
        if self.position != other.position:
            return False
        if self.velocity_local_3d != other.velocity_local_3d:
            return False
        if self.angular_acceleration_local_3d != other.angular_acceleration_local_3d:
            return False
        if self.lane_number != other.lane_number:
            return False
        if self.navigation_segment != other.navigation_segment:
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
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
        self._lane_width = value

    @property
    def lane_offset(self):
        """Message field 'lane_offset'."""
        return self._lane_offset

    @lane_offset.setter
    def lane_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_offset' field must be of type 'float'"
        self._lane_offset = value

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @property
    def velocity_local_3d(self):
        """Message field 'velocity_local_3d'."""
        return self._velocity_local_3d

    @velocity_local_3d.setter
    def velocity_local_3d(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity_local_3d' field must be a sub message of type 'Vector3'"
        self._velocity_local_3d = value

    @property
    def angular_acceleration_local_3d(self):
        """Message field 'angular_acceleration_local_3d'."""
        return self._angular_acceleration_local_3d

    @angular_acceleration_local_3d.setter
    def angular_acceleration_local_3d(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'angular_acceleration_local_3d' field must be a sub message of type 'Vector3'"
        self._angular_acceleration_local_3d = value

    @property
    def lane_number(self):
        """Message field 'lane_number'."""
        return self._lane_number

    @lane_number.setter
    def lane_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'lane_number' field must be an integer in [-2147483648, 2147483647]"
        self._lane_number = value

    @property
    def navigation_segment(self):
        """Message field 'navigation_segment'."""
        return self._navigation_segment

    @navigation_segment.setter
    def navigation_segment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'navigation_segment' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'navigation_segment' field must be an integer in [-2147483648, 2147483647]"
        self._navigation_segment = value
