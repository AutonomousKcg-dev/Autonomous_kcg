# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/ObjectDescription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectDescription(type):
    """Metaclass of message 'ObjectDescription'."""

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
                'cognata_sdk_ros2.msg.ObjectDescription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_description
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_description
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_description
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_description
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_description

            from cognata_sdk_ros2.msg import BoundingBoxMsg
            if BoundingBoxMsg.__class__._TYPE_SUPPORT is None:
                BoundingBoxMsg.__class__.__import_type_support__()

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


class ObjectDescription(metaclass=Metaclass_ObjectDescription):
    """Message class 'ObjectDescription'."""

    __slots__ = [
        '_header',
        '_object_id',
        '_roi_type',
        '_roi_subtype',
        '_motion',
        '_bounding_box',
        '_sensor_ids',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'object_id': 'string',
        'roi_type': 'string',
        'roi_subtype': 'string',
        'motion': 'geometry_msgs/Twist',
        'bounding_box': 'cognata_sdk_ros2/BoundingBoxMsg',
        'sensor_ids': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'BoundingBoxMsg'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.object_id = kwargs.get('object_id', str())
        self.roi_type = kwargs.get('roi_type', str())
        self.roi_subtype = kwargs.get('roi_subtype', str())
        from geometry_msgs.msg import Twist
        self.motion = kwargs.get('motion', Twist())
        from cognata_sdk_ros2.msg import BoundingBoxMsg
        self.bounding_box = kwargs.get('bounding_box', BoundingBoxMsg())
        self.sensor_ids = kwargs.get('sensor_ids', [])

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
        if self.object_id != other.object_id:
            return False
        if self.roi_type != other.roi_type:
            return False
        if self.roi_subtype != other.roi_subtype:
            return False
        if self.motion != other.motion:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        if self.sensor_ids != other.sensor_ids:
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
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_id' field must be of type 'str'"
        self._object_id = value

    @property
    def roi_type(self):
        """Message field 'roi_type'."""
        return self._roi_type

    @roi_type.setter
    def roi_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'roi_type' field must be of type 'str'"
        self._roi_type = value

    @property
    def roi_subtype(self):
        """Message field 'roi_subtype'."""
        return self._roi_subtype

    @roi_subtype.setter
    def roi_subtype(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'roi_subtype' field must be of type 'str'"
        self._roi_subtype = value

    @property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'motion' field must be a sub message of type 'Twist'"
        self._motion = value

    @property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import BoundingBoxMsg
            assert \
                isinstance(value, BoundingBoxMsg), \
                "The 'bounding_box' field must be a sub message of type 'BoundingBoxMsg'"
        self._bounding_box = value

    @property
    def sensor_ids(self):
        """Message field 'sensor_ids'."""
        return self._sensor_ids

    @sensor_ids.setter
    def sensor_ids(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'sensor_ids' field must be a set or sequence and each value of type 'str'"
        self._sensor_ids = value
