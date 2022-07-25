# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/RadarOutputHeader.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarOutputHeader(type):
    """Metaclass of message 'RadarOutputHeader'."""

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
                'cognata_sdk_ros2.msg.RadarOutputHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_output_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_output_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_output_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_output_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_output_header

            from cognata_sdk_ros2.msg import RadarOutputTarget
            if RadarOutputTarget.__class__._TYPE_SUPPORT is None:
                RadarOutputTarget.__class__.__import_type_support__()

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


class RadarOutputHeader(metaclass=Metaclass_RadarOutputHeader):
    """Message class 'RadarOutputHeader'."""

    __slots__ = [
        '_header',
        '_radar_id',
        '_radar_placement',
        '_h_fov',
        '_v_fov',
        '_targets',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'radar_id': 'string',
        'radar_placement': 'geometry_msgs/Twist',
        'h_fov': 'float',
        'v_fov': 'float',
        'targets': 'sequence<cognata_sdk_ros2/RadarOutputTarget>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'RadarOutputTarget')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.radar_id = kwargs.get('radar_id', str())
        from geometry_msgs.msg import Twist
        self.radar_placement = kwargs.get('radar_placement', Twist())
        self.h_fov = kwargs.get('h_fov', float())
        self.v_fov = kwargs.get('v_fov', float())
        self.targets = kwargs.get('targets', [])

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
        if self.radar_id != other.radar_id:
            return False
        if self.radar_placement != other.radar_placement:
            return False
        if self.h_fov != other.h_fov:
            return False
        if self.v_fov != other.v_fov:
            return False
        if self.targets != other.targets:
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
    def radar_id(self):
        """Message field 'radar_id'."""
        return self._radar_id

    @radar_id.setter
    def radar_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'radar_id' field must be of type 'str'"
        self._radar_id = value

    @property
    def radar_placement(self):
        """Message field 'radar_placement'."""
        return self._radar_placement

    @radar_placement.setter
    def radar_placement(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'radar_placement' field must be a sub message of type 'Twist'"
        self._radar_placement = value

    @property
    def h_fov(self):
        """Message field 'h_fov'."""
        return self._h_fov

    @h_fov.setter
    def h_fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_fov' field must be of type 'float'"
        self._h_fov = value

    @property
    def v_fov(self):
        """Message field 'v_fov'."""
        return self._v_fov

    @v_fov.setter
    def v_fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_fov' field must be of type 'float'"
        self._v_fov = value

    @property
    def targets(self):
        """Message field 'targets'."""
        return self._targets

    @targets.setter
    def targets(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import RadarOutputTarget
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
                 all(isinstance(v, RadarOutputTarget) for v in value) and
                 True), \
                "The 'targets' field must be a set or sequence and each value of type 'RadarOutputTarget'"
        self._targets = value
