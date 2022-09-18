# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_msgs:msg/TrajectoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrajectoryPoint(type):
    """Metaclass of message 'TrajectoryPoint'."""

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
            module = import_type_support('autoware_auto_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_msgs.msg.TrajectoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory_point

            from autoware_auto_msgs.msg import Complex32
            if Complex32.__class__._TYPE_SUPPORT is None:
                Complex32.__class__.__import_type_support__()

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'X__DEFAULT': 0.0,
            'Y__DEFAULT': 0.0,
            'LONGITUDINAL_VELOCITY_MPS__DEFAULT': 0.0,
            'LATERAL_VELOCITY_MPS__DEFAULT': 0.0,
            'ACCELERATION_MPS2__DEFAULT': 0.0,
            'HEADING_RATE_RPS__DEFAULT': 0.0,
            'FRONT_WHEEL_ANGLE_RAD__DEFAULT': 0.0,
            'REAR_WHEEL_ANGLE_RAD__DEFAULT': 0.0,
        }

    @property
    def X__DEFAULT(cls):
        """Return default value for message field 'x'."""
        return 0.0

    @property
    def Y__DEFAULT(cls):
        """Return default value for message field 'y'."""
        return 0.0

    @property
    def LONGITUDINAL_VELOCITY_MPS__DEFAULT(cls):
        """Return default value for message field 'longitudinal_velocity_mps'."""
        return 0.0

    @property
    def LATERAL_VELOCITY_MPS__DEFAULT(cls):
        """Return default value for message field 'lateral_velocity_mps'."""
        return 0.0

    @property
    def ACCELERATION_MPS2__DEFAULT(cls):
        """Return default value for message field 'acceleration_mps2'."""
        return 0.0

    @property
    def HEADING_RATE_RPS__DEFAULT(cls):
        """Return default value for message field 'heading_rate_rps'."""
        return 0.0

    @property
    def FRONT_WHEEL_ANGLE_RAD__DEFAULT(cls):
        """Return default value for message field 'front_wheel_angle_rad'."""
        return 0.0

    @property
    def REAR_WHEEL_ANGLE_RAD__DEFAULT(cls):
        """Return default value for message field 'rear_wheel_angle_rad'."""
        return 0.0


class TrajectoryPoint(metaclass=Metaclass_TrajectoryPoint):
    """Message class 'TrajectoryPoint'."""

    __slots__ = [
        '_time_from_start',
        '_x',
        '_y',
        '_heading',
        '_longitudinal_velocity_mps',
        '_lateral_velocity_mps',
        '_acceleration_mps2',
        '_heading_rate_rps',
        '_front_wheel_angle_rad',
        '_rear_wheel_angle_rad',
    ]

    _fields_and_field_types = {
        'time_from_start': 'builtin_interfaces/Duration',
        'x': 'float',
        'y': 'float',
        'heading': 'autoware_auto_msgs/Complex32',
        'longitudinal_velocity_mps': 'float',
        'lateral_velocity_mps': 'float',
        'acceleration_mps2': 'float',
        'heading_rate_rps': 'float',
        'front_wheel_angle_rad': 'float',
        'rear_wheel_angle_rad': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_auto_msgs', 'msg'], 'Complex32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Duration
        self.time_from_start = kwargs.get('time_from_start', Duration())
        self.x = kwargs.get(
            'x', TrajectoryPoint.X__DEFAULT)
        self.y = kwargs.get(
            'y', TrajectoryPoint.Y__DEFAULT)
        from autoware_auto_msgs.msg import Complex32
        self.heading = kwargs.get('heading', Complex32())
        self.longitudinal_velocity_mps = kwargs.get(
            'longitudinal_velocity_mps', TrajectoryPoint.LONGITUDINAL_VELOCITY_MPS__DEFAULT)
        self.lateral_velocity_mps = kwargs.get(
            'lateral_velocity_mps', TrajectoryPoint.LATERAL_VELOCITY_MPS__DEFAULT)
        self.acceleration_mps2 = kwargs.get(
            'acceleration_mps2', TrajectoryPoint.ACCELERATION_MPS2__DEFAULT)
        self.heading_rate_rps = kwargs.get(
            'heading_rate_rps', TrajectoryPoint.HEADING_RATE_RPS__DEFAULT)
        self.front_wheel_angle_rad = kwargs.get(
            'front_wheel_angle_rad', TrajectoryPoint.FRONT_WHEEL_ANGLE_RAD__DEFAULT)
        self.rear_wheel_angle_rad = kwargs.get(
            'rear_wheel_angle_rad', TrajectoryPoint.REAR_WHEEL_ANGLE_RAD__DEFAULT)

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
        if self.time_from_start != other.time_from_start:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.heading != other.heading:
            return False
        if self.longitudinal_velocity_mps != other.longitudinal_velocity_mps:
            return False
        if self.lateral_velocity_mps != other.lateral_velocity_mps:
            return False
        if self.acceleration_mps2 != other.acceleration_mps2:
            return False
        if self.heading_rate_rps != other.heading_rate_rps:
            return False
        if self.front_wheel_angle_rad != other.front_wheel_angle_rad:
            return False
        if self.rear_wheel_angle_rad != other.rear_wheel_angle_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_from_start(self):
        """Message field 'time_from_start'."""
        return self._time_from_start

    @time_from_start.setter
    def time_from_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'time_from_start' field must be a sub message of type 'Duration'"
        self._time_from_start = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            from autoware_auto_msgs.msg import Complex32
            assert \
                isinstance(value, Complex32), \
                "The 'heading' field must be a sub message of type 'Complex32'"
        self._heading = value

    @property
    def longitudinal_velocity_mps(self):
        """Message field 'longitudinal_velocity_mps'."""
        return self._longitudinal_velocity_mps

    @longitudinal_velocity_mps.setter
    def longitudinal_velocity_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitudinal_velocity_mps' field must be of type 'float'"
        self._longitudinal_velocity_mps = value

    @property
    def lateral_velocity_mps(self):
        """Message field 'lateral_velocity_mps'."""
        return self._lateral_velocity_mps

    @lateral_velocity_mps.setter
    def lateral_velocity_mps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_velocity_mps' field must be of type 'float'"
        self._lateral_velocity_mps = value

    @property
    def acceleration_mps2(self):
        """Message field 'acceleration_mps2'."""
        return self._acceleration_mps2

    @acceleration_mps2.setter
    def acceleration_mps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_mps2' field must be of type 'float'"
        self._acceleration_mps2 = value

    @property
    def heading_rate_rps(self):
        """Message field 'heading_rate_rps'."""
        return self._heading_rate_rps

    @heading_rate_rps.setter
    def heading_rate_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_rate_rps' field must be of type 'float'"
        self._heading_rate_rps = value

    @property
    def front_wheel_angle_rad(self):
        """Message field 'front_wheel_angle_rad'."""
        return self._front_wheel_angle_rad

    @front_wheel_angle_rad.setter
    def front_wheel_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_wheel_angle_rad' field must be of type 'float'"
        self._front_wheel_angle_rad = value

    @property
    def rear_wheel_angle_rad(self):
        """Message field 'rear_wheel_angle_rad'."""
        return self._rear_wheel_angle_rad

    @rear_wheel_angle_rad.setter
    def rear_wheel_angle_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rear_wheel_angle_rad' field must be of type 'float'"
        self._rear_wheel_angle_rad = value
