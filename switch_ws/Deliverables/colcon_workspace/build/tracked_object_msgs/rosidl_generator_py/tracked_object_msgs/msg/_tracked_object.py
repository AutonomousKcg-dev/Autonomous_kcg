# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracked_object_msgs:msg/TrackedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedObject(type):
    """Metaclass of message 'TrackedObject'."""

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
            module = import_type_support('tracked_object_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tracked_object_msgs.msg.TrackedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_object

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackedObject(metaclass=Metaclass_TrackedObject):
    """Message class 'TrackedObject'."""

    __slots__ = [
        '_uuid',
        '_stamp',
        '_object_type',
        '_object_pose_m_quat',
        '_base_frame_id',
        '_object_velocity_mps_radps',
        '_box_dimensions_m',
        '_confidence',
        '_metadata',
    ]

    _fields_and_field_types = {
        'uuid': 'uint32',
        'stamp': 'builtin_interfaces/Time',
        'object_type': 'uint32',
        'object_pose_m_quat': 'geometry_msgs/Pose',
        'base_frame_id': 'string',
        'object_velocity_mps_radps': 'geometry_msgs/Twist',
        'box_dimensions_m': 'geometry_msgs/Vector3',
        'confidence': 'float',
        'metadata': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.uuid = kwargs.get('uuid', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.object_type = kwargs.get('object_type', int())
        from geometry_msgs.msg import Pose
        self.object_pose_m_quat = kwargs.get('object_pose_m_quat', Pose())
        self.base_frame_id = kwargs.get('base_frame_id', str())
        from geometry_msgs.msg import Twist
        self.object_velocity_mps_radps = kwargs.get('object_velocity_mps_radps', Twist())
        from geometry_msgs.msg import Vector3
        self.box_dimensions_m = kwargs.get('box_dimensions_m', Vector3())
        self.confidence = kwargs.get('confidence', float())
        self.metadata = kwargs.get('metadata', str())

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
        if self.uuid != other.uuid:
            return False
        if self.stamp != other.stamp:
            return False
        if self.object_type != other.object_type:
            return False
        if self.object_pose_m_quat != other.object_pose_m_quat:
            return False
        if self.base_frame_id != other.base_frame_id:
            return False
        if self.object_velocity_mps_radps != other.object_velocity_mps_radps:
            return False
        if self.box_dimensions_m != other.box_dimensions_m:
            return False
        if self.confidence != other.confidence:
            return False
        if self.metadata != other.metadata:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def uuid(self):
        """Message field 'uuid'."""
        return self._uuid

    @uuid.setter
    def uuid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uuid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uuid' field must be an unsigned integer in [0, 4294967295]"
        self._uuid = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @property
    def object_type(self):
        """Message field 'object_type'."""
        return self._object_type

    @object_type.setter
    def object_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'object_type' field must be an unsigned integer in [0, 4294967295]"
        self._object_type = value

    @property
    def object_pose_m_quat(self):
        """Message field 'object_pose_m_quat'."""
        return self._object_pose_m_quat

    @object_pose_m_quat.setter
    def object_pose_m_quat(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'object_pose_m_quat' field must be a sub message of type 'Pose'"
        self._object_pose_m_quat = value

    @property
    def base_frame_id(self):
        """Message field 'base_frame_id'."""
        return self._base_frame_id

    @base_frame_id.setter
    def base_frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'base_frame_id' field must be of type 'str'"
        self._base_frame_id = value

    @property
    def object_velocity_mps_radps(self):
        """Message field 'object_velocity_mps_radps'."""
        return self._object_velocity_mps_radps

    @object_velocity_mps_radps.setter
    def object_velocity_mps_radps(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'object_velocity_mps_radps' field must be a sub message of type 'Twist'"
        self._object_velocity_mps_radps = value

    @property
    def box_dimensions_m(self):
        """Message field 'box_dimensions_m'."""
        return self._box_dimensions_m

    @box_dimensions_m.setter
    def box_dimensions_m(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'box_dimensions_m' field must be a sub message of type 'Vector3'"
        self._box_dimensions_m = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

    @property
    def metadata(self):
        """Message field 'metadata'."""
        return self._metadata

    @metadata.setter
    def metadata(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'metadata' field must be of type 'str'"
        self._metadata = value
