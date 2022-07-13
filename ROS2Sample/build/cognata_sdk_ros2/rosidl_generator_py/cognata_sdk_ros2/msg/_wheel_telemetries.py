# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/WheelTelemetries.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelTelemetries(type):
    """Metaclass of message 'WheelTelemetries'."""

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
                'cognata_sdk_ros2.msg.WheelTelemetries')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheel_telemetries
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheel_telemetries
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheel_telemetries
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheel_telemetries
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheel_telemetries

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class WheelTelemetries(metaclass=Metaclass_WheelTelemetries):
    """Message class 'WheelTelemetries'."""

    __slots__ = [
        '_header',
        '_angular_velocity',
        '_steer_angle',
        '_drive_torque',
        '_brake_torque',
        '_reaction_torque',
        '_tire_force',
        '_tire_slip',
        '_can_slip',
        '_combined_tire_slip',
        '_suspension_compression',
        '_down_force',
        '_contact_angle',
        '_contact_depth',
        '_contact_speed',
        '_is_grounded',
        '_wheel_velocity',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'angular_velocity': 'float',
        'steer_angle': 'float',
        'drive_torque': 'float',
        'brake_torque': 'float',
        'reaction_torque': 'float',
        'tire_force': 'geometry_msgs/Point',
        'tire_slip': 'geometry_msgs/Point',
        'can_slip': 'boolean',
        'combined_tire_slip': 'float',
        'suspension_compression': 'float',
        'down_force': 'float',
        'contact_angle': 'float',
        'contact_depth': 'float',
        'contact_speed': 'float',
        'is_grounded': 'boolean',
        'wheel_velocity': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.angular_velocity = kwargs.get('angular_velocity', float())
        self.steer_angle = kwargs.get('steer_angle', float())
        self.drive_torque = kwargs.get('drive_torque', float())
        self.brake_torque = kwargs.get('brake_torque', float())
        self.reaction_torque = kwargs.get('reaction_torque', float())
        from geometry_msgs.msg import Point
        self.tire_force = kwargs.get('tire_force', Point())
        from geometry_msgs.msg import Point
        self.tire_slip = kwargs.get('tire_slip', Point())
        self.can_slip = kwargs.get('can_slip', bool())
        self.combined_tire_slip = kwargs.get('combined_tire_slip', float())
        self.suspension_compression = kwargs.get('suspension_compression', float())
        self.down_force = kwargs.get('down_force', float())
        self.contact_angle = kwargs.get('contact_angle', float())
        self.contact_depth = kwargs.get('contact_depth', float())
        self.contact_speed = kwargs.get('contact_speed', float())
        self.is_grounded = kwargs.get('is_grounded', bool())
        from geometry_msgs.msg import Vector3
        self.wheel_velocity = kwargs.get('wheel_velocity', Vector3())

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
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.steer_angle != other.steer_angle:
            return False
        if self.drive_torque != other.drive_torque:
            return False
        if self.brake_torque != other.brake_torque:
            return False
        if self.reaction_torque != other.reaction_torque:
            return False
        if self.tire_force != other.tire_force:
            return False
        if self.tire_slip != other.tire_slip:
            return False
        if self.can_slip != other.can_slip:
            return False
        if self.combined_tire_slip != other.combined_tire_slip:
            return False
        if self.suspension_compression != other.suspension_compression:
            return False
        if self.down_force != other.down_force:
            return False
        if self.contact_angle != other.contact_angle:
            return False
        if self.contact_depth != other.contact_depth:
            return False
        if self.contact_speed != other.contact_speed:
            return False
        if self.is_grounded != other.is_grounded:
            return False
        if self.wheel_velocity != other.wheel_velocity:
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
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity' field must be of type 'float'"
        self._angular_velocity = value

    @property
    def steer_angle(self):
        """Message field 'steer_angle'."""
        return self._steer_angle

    @steer_angle.setter
    def steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_angle' field must be of type 'float'"
        self._steer_angle = value

    @property
    def drive_torque(self):
        """Message field 'drive_torque'."""
        return self._drive_torque

    @drive_torque.setter
    def drive_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'drive_torque' field must be of type 'float'"
        self._drive_torque = value

    @property
    def brake_torque(self):
        """Message field 'brake_torque'."""
        return self._brake_torque

    @brake_torque.setter
    def brake_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_torque' field must be of type 'float'"
        self._brake_torque = value

    @property
    def reaction_torque(self):
        """Message field 'reaction_torque'."""
        return self._reaction_torque

    @reaction_torque.setter
    def reaction_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reaction_torque' field must be of type 'float'"
        self._reaction_torque = value

    @property
    def tire_force(self):
        """Message field 'tire_force'."""
        return self._tire_force

    @tire_force.setter
    def tire_force(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'tire_force' field must be a sub message of type 'Point'"
        self._tire_force = value

    @property
    def tire_slip(self):
        """Message field 'tire_slip'."""
        return self._tire_slip

    @tire_slip.setter
    def tire_slip(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'tire_slip' field must be a sub message of type 'Point'"
        self._tire_slip = value

    @property
    def can_slip(self):
        """Message field 'can_slip'."""
        return self._can_slip

    @can_slip.setter
    def can_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_slip' field must be of type 'bool'"
        self._can_slip = value

    @property
    def combined_tire_slip(self):
        """Message field 'combined_tire_slip'."""
        return self._combined_tire_slip

    @combined_tire_slip.setter
    def combined_tire_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'combined_tire_slip' field must be of type 'float'"
        self._combined_tire_slip = value

    @property
    def suspension_compression(self):
        """Message field 'suspension_compression'."""
        return self._suspension_compression

    @suspension_compression.setter
    def suspension_compression(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'suspension_compression' field must be of type 'float'"
        self._suspension_compression = value

    @property
    def down_force(self):
        """Message field 'down_force'."""
        return self._down_force

    @down_force.setter
    def down_force(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'down_force' field must be of type 'float'"
        self._down_force = value

    @property
    def contact_angle(self):
        """Message field 'contact_angle'."""
        return self._contact_angle

    @contact_angle.setter
    def contact_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contact_angle' field must be of type 'float'"
        self._contact_angle = value

    @property
    def contact_depth(self):
        """Message field 'contact_depth'."""
        return self._contact_depth

    @contact_depth.setter
    def contact_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contact_depth' field must be of type 'float'"
        self._contact_depth = value

    @property
    def contact_speed(self):
        """Message field 'contact_speed'."""
        return self._contact_speed

    @contact_speed.setter
    def contact_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contact_speed' field must be of type 'float'"
        self._contact_speed = value

    @property
    def is_grounded(self):
        """Message field 'is_grounded'."""
        return self._is_grounded

    @is_grounded.setter
    def is_grounded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_grounded' field must be of type 'bool'"
        self._is_grounded = value

    @property
    def wheel_velocity(self):
        """Message field 'wheel_velocity'."""
        return self._wheel_velocity

    @wheel_velocity.setter
    def wheel_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'wheel_velocity' field must be a sub message of type 'Vector3'"
        self._wheel_velocity = value
