# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/RadarOutputTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarOutputTarget(type):
    """Metaclass of message 'RadarOutputTarget'."""

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
                'cognata_sdk_ros2.msg.RadarOutputTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_output_target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_output_target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_output_target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_output_target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_output_target

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


class RadarOutputTarget(metaclass=Metaclass_RadarOutputTarget):
    """Message class 'RadarOutputTarget'."""

    __slots__ = [
        '_header',
        '_id',
        '_time_stamp',
        '_range',
        '_azimuth',
        '_elevation',
        '_range_rate',
        '_amplitude',
        '_is_aggregate',
        '_tracking_status',
        '_age',
        '_last_seen',
        '_is_stationary',
        '_is_ghost',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'uint32',
        'time_stamp': 'uint32',
        'range': 'float',
        'azimuth': 'float',
        'elevation': 'float',
        'range_rate': 'float',
        'amplitude': 'float',
        'is_aggregate': 'uint32',
        'tracking_status': 'int32',
        'age': 'uint32',
        'last_seen': 'uint32',
        'is_stationary': 'boolean',
        'is_ghost': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', int())
        self.time_stamp = kwargs.get('time_stamp', int())
        self.range = kwargs.get('range', float())
        self.azimuth = kwargs.get('azimuth', float())
        self.elevation = kwargs.get('elevation', float())
        self.range_rate = kwargs.get('range_rate', float())
        self.amplitude = kwargs.get('amplitude', float())
        self.is_aggregate = kwargs.get('is_aggregate', int())
        self.tracking_status = kwargs.get('tracking_status', int())
        self.age = kwargs.get('age', int())
        self.last_seen = kwargs.get('last_seen', int())
        self.is_stationary = kwargs.get('is_stationary', bool())
        self.is_ghost = kwargs.get('is_ghost', bool())

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
        if self.id != other.id:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.range != other.range:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.elevation != other.elevation:
            return False
        if self.range_rate != other.range_rate:
            return False
        if self.amplitude != other.amplitude:
            return False
        if self.is_aggregate != other.is_aggregate:
            return False
        if self.tracking_status != other.tracking_status:
            return False
        if self.age != other.age:
            return False
        if self.last_seen != other.last_seen:
            return False
        if self.is_stationary != other.is_stationary:
            return False
        if self.is_ghost != other.is_ghost:
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

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range' field must be of type 'float'"
        self._range = value

    @property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
        self._azimuth = value

    @property
    def elevation(self):
        """Message field 'elevation'."""
        return self._elevation

    @elevation.setter
    def elevation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elevation' field must be of type 'float'"
        self._elevation = value

    @property
    def range_rate(self):
        """Message field 'range_rate'."""
        return self._range_rate

    @range_rate.setter
    def range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'range_rate' field must be of type 'float'"
        self._range_rate = value

    @property
    def amplitude(self):
        """Message field 'amplitude'."""
        return self._amplitude

    @amplitude.setter
    def amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'amplitude' field must be of type 'float'"
        self._amplitude = value

    @property
    def is_aggregate(self):
        """Message field 'is_aggregate'."""
        return self._is_aggregate

    @is_aggregate.setter
    def is_aggregate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_aggregate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'is_aggregate' field must be an unsigned integer in [0, 4294967295]"
        self._is_aggregate = value

    @property
    def tracking_status(self):
        """Message field 'tracking_status'."""
        return self._tracking_status

    @tracking_status.setter
    def tracking_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracking_status' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'tracking_status' field must be an integer in [-2147483648, 2147483647]"
        self._tracking_status = value

    @property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'age' field must be an unsigned integer in [0, 4294967295]"
        self._age = value

    @property
    def last_seen(self):
        """Message field 'last_seen'."""
        return self._last_seen

    @last_seen.setter
    def last_seen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_seen' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'last_seen' field must be an unsigned integer in [0, 4294967295]"
        self._last_seen = value

    @property
    def is_stationary(self):
        """Message field 'is_stationary'."""
        return self._is_stationary

    @is_stationary.setter
    def is_stationary(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stationary' field must be of type 'bool'"
        self._is_stationary = value

    @property
    def is_ghost(self):
        """Message field 'is_ghost'."""
        return self._is_ghost

    @is_ghost.setter
    def is_ghost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_ghost' field must be of type 'bool'"
        self._is_ghost = value
