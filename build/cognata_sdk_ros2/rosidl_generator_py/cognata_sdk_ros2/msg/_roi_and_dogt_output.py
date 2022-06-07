# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cognata_sdk_ros2:msg/ROIAndDOGTOutput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ROIAndDOGTOutput(type):
    """Metaclass of message 'ROIAndDOGTOutput'."""

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
                'cognata_sdk_ros2.msg.ROIAndDOGTOutput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roi_and_dogt_output
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roi_and_dogt_output
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roi_and_dogt_output
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roi_and_dogt_output
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roi_and_dogt_output

            from cognata_sdk_ros2.msg import AnnotationMsg
            if AnnotationMsg.__class__._TYPE_SUPPORT is None:
                AnnotationMsg.__class__.__import_type_support__()

            from cognata_sdk_ros2.msg import ObjectDescription
            if ObjectDescription.__class__._TYPE_SUPPORT is None:
                ObjectDescription.__class__.__import_type_support__()

            from cognata_sdk_ros2.msg import PedestrianMsg
            if PedestrianMsg.__class__._TYPE_SUPPORT is None:
                PedestrianMsg.__class__.__import_type_support__()

            from cognata_sdk_ros2.msg import TrafficLightMsg
            if TrafficLightMsg.__class__._TYPE_SUPPORT is None:
                TrafficLightMsg.__class__.__import_type_support__()

            from cognata_sdk_ros2.msg import VehicleMsg
            if VehicleMsg.__class__._TYPE_SUPPORT is None:
                VehicleMsg.__class__.__import_type_support__()

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


class ROIAndDOGTOutput(metaclass=Metaclass_ROIAndDOGTOutput):
    """Message class 'ROIAndDOGTOutput'."""

    __slots__ = [
        '_header',
        '_other_list',
        '_annotation_list',
        '_pedestrian_list',
        '_vehicle_list',
        '_traffic_light_list',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'other_list': 'sequence<cognata_sdk_ros2/ObjectDescription>',
        'annotation_list': 'sequence<cognata_sdk_ros2/AnnotationMsg>',
        'pedestrian_list': 'sequence<cognata_sdk_ros2/PedestrianMsg>',
        'vehicle_list': 'sequence<cognata_sdk_ros2/VehicleMsg>',
        'traffic_light_list': 'sequence<cognata_sdk_ros2/TrafficLightMsg>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'ObjectDescription')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'AnnotationMsg')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'PedestrianMsg')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'VehicleMsg')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cognata_sdk_ros2', 'msg'], 'TrafficLightMsg')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.other_list = kwargs.get('other_list', [])
        self.annotation_list = kwargs.get('annotation_list', [])
        self.pedestrian_list = kwargs.get('pedestrian_list', [])
        self.vehicle_list = kwargs.get('vehicle_list', [])
        self.traffic_light_list = kwargs.get('traffic_light_list', [])

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
        if self.other_list != other.other_list:
            return False
        if self.annotation_list != other.annotation_list:
            return False
        if self.pedestrian_list != other.pedestrian_list:
            return False
        if self.vehicle_list != other.vehicle_list:
            return False
        if self.traffic_light_list != other.traffic_light_list:
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
    def other_list(self):
        """Message field 'other_list'."""
        return self._other_list

    @other_list.setter
    def other_list(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import ObjectDescription
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
                 all(isinstance(v, ObjectDescription) for v in value) and
                 True), \
                "The 'other_list' field must be a set or sequence and each value of type 'ObjectDescription'"
        self._other_list = value

    @property
    def annotation_list(self):
        """Message field 'annotation_list'."""
        return self._annotation_list

    @annotation_list.setter
    def annotation_list(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import AnnotationMsg
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
                 all(isinstance(v, AnnotationMsg) for v in value) and
                 True), \
                "The 'annotation_list' field must be a set or sequence and each value of type 'AnnotationMsg'"
        self._annotation_list = value

    @property
    def pedestrian_list(self):
        """Message field 'pedestrian_list'."""
        return self._pedestrian_list

    @pedestrian_list.setter
    def pedestrian_list(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import PedestrianMsg
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
                 all(isinstance(v, PedestrianMsg) for v in value) and
                 True), \
                "The 'pedestrian_list' field must be a set or sequence and each value of type 'PedestrianMsg'"
        self._pedestrian_list = value

    @property
    def vehicle_list(self):
        """Message field 'vehicle_list'."""
        return self._vehicle_list

    @vehicle_list.setter
    def vehicle_list(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import VehicleMsg
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
                 all(isinstance(v, VehicleMsg) for v in value) and
                 True), \
                "The 'vehicle_list' field must be a set or sequence and each value of type 'VehicleMsg'"
        self._vehicle_list = value

    @property
    def traffic_light_list(self):
        """Message field 'traffic_light_list'."""
        return self._traffic_light_list

    @traffic_light_list.setter
    def traffic_light_list(self, value):
        if __debug__:
            from cognata_sdk_ros2.msg import TrafficLightMsg
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
                 all(isinstance(v, TrafficLightMsg) for v in value) and
                 True), \
                "The 'traffic_light_list' field must be a set or sequence and each value of type 'TrafficLightMsg'"
        self._traffic_light_list = value
