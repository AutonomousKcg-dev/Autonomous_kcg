# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/CarTelemetriesMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarTelemetriesMsg(type):
    """Metaclass of message 'CarTelemetriesMsg'."""

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
                'cognata_sdk_ros2.msg.CarTelemetriesMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_telemetries_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_telemetries_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_telemetries_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_telemetries_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_telemetries_msg

            from cognata_sdk_ros2.msg import WheelTelemetries
            if WheelTelemetries.__class__._TYPE_SUPPORT is None:
                WheelTelemetries.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

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


class CarTelemetriesMsg(metaclass=Metaclass_CarTelemetriesMsg):
    """Message class 'CarTelemetriesMsg'."""

    __slots__ = [
        '_header',
        '_turn_light',
        '_acceleration',
        '_brake',
        '_gas',
        '_steering',
        '_center_of_mass',
        '_engine_rpm',
        '_engine_load',
        '_engine_torque',
        '_engine_power',
        '_current_gear',
        '_wheels',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'turn_light': 'string',
        'acceleration': 'float',
        'brake': 'float',
        'gas': 'float',
        'steering': 'float',
        'center_of_mass': 'geometry_msgs/Twist',
        'engine_rpm': 'float',
        'engine_load': 'float',
        'engine_torque': 'float',
        'engine_power': 'float',
        'current_gear': 'int32',
        'wheels': 'sequence<cognata_sdk_ros2/WheelTelemetries>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'WheelTelemetries')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.turn_light = kwargs.get('turn_light', str())
        self.acceleration = kwargs.get('acceleration', float())
        self.brake = kwargs.get('brake', float())
        self.gas = kwargs.get('gas', float())
        self.steering = kwargs.get('steering', float())
        from geometry_msgs.msg import Twist
        self.center_of_mass = kwargs.get('center_of_mass', Twist())
        self.engine_rpm = kwargs.get('engine_rpm', float())
        self.engine_load = kwargs.get('engine_load', float())
        self.engine_torque = kwargs.get('engine_torque', float())
        self.engine_power = kwargs.get('engine_power', float())
        self.current_gear = kwargs.get('current_gear', int())
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
        if self.turn_light != other.turn_light:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.brake != other.brake:
            return False
        if self.gas != other.gas:
            return False
        if self.steering != other.steering:
            return False
        if self.center_of_mass != other.center_of_mass:
            return False
        if self.engine_rpm != other.engine_rpm:
            return False
        if self.engine_load != other.engine_load:
            return False
        if self.engine_torque != other.engine_torque:
            return False
        if self.engine_power != other.engine_power:
            return False
        if self.current_gear != other.current_gear:
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
    def turn_light(self):
        """Message field 'turn_light'."""
        return self._turn_light

    @turn_light.setter
    def turn_light(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'turn_light' field must be of type 'str'"
        self._turn_light = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
        self._acceleration = value

    @property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
        self._brake = value

    @property
    def gas(self):
        """Message field 'gas'."""
        return self._gas

    @gas.setter
    def gas(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gas' field must be of type 'float'"
        self._gas = value

    @property
    def steering(self):
        """Message field 'steering'."""
        return self._steering

    @steering.setter
    def steering(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering' field must be of type 'float'"
        self._steering = value

    @property
    def center_of_mass(self):
        """Message field 'center_of_mass'."""
        return self._center_of_mass

    @center_of_mass.setter
    def center_of_mass(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'center_of_mass' field must be a sub message of type 'Twist'"
        self._center_of_mass = value

    @property
    def engine_rpm(self):
        """Message field 'engine_rpm'."""
        return self._engine_rpm

    @engine_rpm.setter
    def engine_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_rpm' field must be of type 'float'"
        self._engine_rpm = value

    @property
    def engine_load(self):
        """Message field 'engine_load'."""
        return self._engine_load

    @engine_load.setter
    def engine_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_load' field must be of type 'float'"
        self._engine_load = value

    @property
    def engine_torque(self):
        """Message field 'engine_torque'."""
        return self._engine_torque

    @engine_torque.setter
    def engine_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_torque' field must be of type 'float'"
        self._engine_torque = value

    @property
    def engine_power(self):
        """Message field 'engine_power'."""
        return self._engine_power

    @engine_power.setter
    def engine_power(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_power' field must be of type 'float'"
        self._engine_power = value

    @property
    def current_gear(self):
        """Message field 'current_gear'."""
        return self._current_gear

    @current_gear.setter
    def current_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_gear' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_gear' field must be an integer in [-2147483648, 2147483647]"
        self._current_gear = value

    @property
    def wheels(self):
        """Message field 'wheels'."""
        return self._wheels

    @wheels.setter
    def wheels(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import WheelTelemetries
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
                 all(isinstance(v, WheelTelemetries) for v in value) and
                 True), \
                "The 'wheels' field must be a set or sequence and each value of type 'WheelTelemetries'"
        self._wheels = value
