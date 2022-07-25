# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/TrafficLightMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficLightMsg(type):
    """Metaclass of message 'TrafficLightMsg'."""

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
                'cognata_sdk_ros2.msg.TrafficLightMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_light_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_light_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_light_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_light_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_light_msg

            from cognata_sdk_ros2.msg import ObjectDescription
            if ObjectDescription.__class__._TYPE_SUPPORT is None:
                ObjectDescription.__class__.__import_type_support__()

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


class TrafficLightMsg(metaclass=Metaclass_TrafficLightMsg):
    """Message class 'TrafficLightMsg'."""

    __slots__ = [
        '_header',
        '_description',
        '_status',
        '_bulb_status',
        '_functioning_status',
        '_behaviour',
        '_traffic_signal_status',
        '_azimuth_angle',
        '_facing',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'description': 'cognata_sdk_ros2/ObjectDescription',
        'status': 'string',
        'bulb_status': 'string',
        'functioning_status': 'string',
        'behaviour': 'string',
        'traffic_signal_status': 'string',
        'azimuth_angle': 'float',
        'facing': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'ObjectDescription'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from cognata_sdk_ros2.msg import ObjectDescription
        self.description = kwargs.get('description', ObjectDescription())
        self.status = kwargs.get('status', str())
        self.bulb_status = kwargs.get('bulb_status', str())
        self.functioning_status = kwargs.get('functioning_status', str())
        self.behaviour = kwargs.get('behaviour', str())
        self.traffic_signal_status = kwargs.get('traffic_signal_status', str())
        self.azimuth_angle = kwargs.get('azimuth_angle', float())
        self.facing = kwargs.get('facing', float())

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
        if self.status != other.status:
            return False
        if self.bulb_status != other.bulb_status:
            return False
        if self.functioning_status != other.functioning_status:
            return False
        if self.behaviour != other.behaviour:
            return False
        if self.traffic_signal_status != other.traffic_signal_status:
            return False
        if self.azimuth_angle != other.azimuth_angle:
            return False
        if self.facing != other.facing:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value

    @property
    def bulb_status(self):
        """Message field 'bulb_status'."""
        return self._bulb_status

    @bulb_status.setter
    def bulb_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bulb_status' field must be of type 'str'"
        self._bulb_status = value

    @property
    def functioning_status(self):
        """Message field 'functioning_status'."""
        return self._functioning_status

    @functioning_status.setter
    def functioning_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'functioning_status' field must be of type 'str'"
        self._functioning_status = value

    @property
    def behaviour(self):
        """Message field 'behaviour'."""
        return self._behaviour

    @behaviour.setter
    def behaviour(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behaviour' field must be of type 'str'"
        self._behaviour = value

    @property
    def traffic_signal_status(self):
        """Message field 'traffic_signal_status'."""
        return self._traffic_signal_status

    @traffic_signal_status.setter
    def traffic_signal_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'traffic_signal_status' field must be of type 'str'"
        self._traffic_signal_status = value

    @property
    def azimuth_angle(self):
        """Message field 'azimuth_angle'."""
        return self._azimuth_angle

    @azimuth_angle.setter
    def azimuth_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth_angle' field must be of type 'float'"
        self._azimuth_angle = value

    @property
    def facing(self):
        """Message field 'facing'."""
        return self._facing

    @facing.setter
    def facing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'facing' field must be of type 'float'"
        self._facing = value
