# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackedObjectKinematics(type):
    """Metaclass of message 'TrackedObjectKinematics'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'SIGN_UNKNOWN': 1,
        'AVAILABLE': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_auto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_auto_perception_msgs.msg.TrackedObjectKinematics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracked_object_kinematics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracked_object_kinematics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracked_object_kinematics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracked_object_kinematics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracked_object_kinematics

            from geometry_msgs.msg import AccelWithCovariance
            if AccelWithCovariance.__class__._TYPE_SUPPORT is None:
                AccelWithCovariance.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import TwistWithCovariance
            if TwistWithCovariance.__class__._TYPE_SUPPORT is None:
                TwistWithCovariance.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'SIGN_UNKNOWN': cls.__constants['SIGN_UNKNOWN'],
            'AVAILABLE': cls.__constants['AVAILABLE'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_TrackedObjectKinematics.__constants['UNAVAILABLE']

    @property
    def SIGN_UNKNOWN(self):
        """Message constant 'SIGN_UNKNOWN'."""
        return Metaclass_TrackedObjectKinematics.__constants['SIGN_UNKNOWN']

    @property
    def AVAILABLE(self):
        """Message constant 'AVAILABLE'."""
        return Metaclass_TrackedObjectKinematics.__constants['AVAILABLE']


class TrackedObjectKinematics(metaclass=Metaclass_TrackedObjectKinematics):
    """
    Message class 'TrackedObjectKinematics'.

    Constants:
      UNAVAILABLE
      SIGN_UNKNOWN
      AVAILABLE
    """

    __slots__ = [
        '_centroid_position',
        '_position_covariance',
        '_orientation',
        '_orientation_availability',
        '_twist',
        '_acceleration',
        '_is_stationary',
    ]

    _fields_and_field_types = {
        'centroid_position': 'geometry_msgs/Point',
        'position_covariance': 'double[9]',
        'orientation': 'geometry_msgs/Quaternion',
        'orientation_availability': 'uint8',
        'twist': 'geometry_msgs/TwistWithCovariance',
        'acceleration': 'geometry_msgs/AccelWithCovariance',
        'is_stationary': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TwistWithCovariance'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'AccelWithCovariance'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.centroid_position = kwargs.get('centroid_position', Point())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.position_covariance = numpy.array(kwargs.get('position_covariance'), dtype=numpy.float64)
            assert self.position_covariance.shape == (9, )
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.orientation_availability = kwargs.get('orientation_availability', int())
        from geometry_msgs.msg import TwistWithCovariance
        self.twist = kwargs.get('twist', TwistWithCovariance())
        from geometry_msgs.msg import AccelWithCovariance
        self.acceleration = kwargs.get('acceleration', AccelWithCovariance())
        self.is_stationary = kwargs.get('is_stationary', bool())

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
        if self.centroid_position != other.centroid_position:
            return False
        if all(self.position_covariance != other.position_covariance):
            return False
        if self.orientation != other.orientation:
            return False
        if self.orientation_availability != other.orientation_availability:
            return False
        if self.twist != other.twist:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.is_stationary != other.is_stationary:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def centroid_position(self):
        """Message field 'centroid_position'."""
        return self._centroid_position

    @centroid_position.setter
    def centroid_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'centroid_position' field must be a sub message of type 'Point'"
        self._centroid_position = value

    @property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 9, \
                "The 'position_covariance' numpy.ndarray() must have a size of 9"
            self._position_covariance = value
            return
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float'"
        self._position_covariance = numpy.array(value, dtype=numpy.float64)

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @property
    def orientation_availability(self):
        """Message field 'orientation_availability'."""
        return self._orientation_availability

    @orientation_availability.setter
    def orientation_availability(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation_availability' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'orientation_availability' field must be an unsigned integer in [0, 255]"
        self._orientation_availability = value

    @property
    def twist(self):
        """Message field 'twist'."""
        return self._twist

    @twist.setter
    def twist(self, value):
        if __debug__:
            from geometry_msgs.msg import TwistWithCovariance
            assert \
                isinstance(value, TwistWithCovariance), \
                "The 'twist' field must be a sub message of type 'TwistWithCovariance'"
        self._twist = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import AccelWithCovariance
            assert \
                isinstance(value, AccelWithCovariance), \
                "The 'acceleration' field must be a sub message of type 'AccelWithCovariance'"
        self._acceleration = value

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
