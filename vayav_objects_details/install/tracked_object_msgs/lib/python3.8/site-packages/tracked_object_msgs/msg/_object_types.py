# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tracked_object_msgs:msg/ObjectTypes.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectTypes(type):
    """Metaclass of message 'ObjectTypes'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'ANIMAL': 10000,
        'HUMAN': 11000,
        'STANDING': 11100,
        'PRONE': 11200,
        'CROUCHING': 11300,
        'VEHICLE': 20000,
        'AGRICULTURE': 21000,
        'TRACTOR': 21100,
        'CASE_MAGNUM_390': 21110,
        'SPRAYER': 21200,
        'COMBINE': 21300,
        'PLANTER': 21400,
        'CONSTRUCTION': 22000,
        'DOZER': 22100,
        'EXCAVATOR': 22200,
        'GRADER': 22300,
        'SCRAPER': 22400,
        'CRANE': 22500,
        'COMPACTOR': 22600,
        'FRONT_LOADER': 22700,
        'BACKHOE': 22800,
        'VEHICLE_ON_ROAD': 23000,
        'CAR': 23100,
        'BICYCLE': 23200,
        'UTILITY': 24000,
        'DUMPTRUCK': 24100,
        'PICKUP': 24200,
        'FORKLIFT': 24300,
        'ENVIRONMENT': 30000,
        'NATURAL_FEATURES': 31000,
        'ROCK': 31100,
        'TREE': 31200,
        'WATER': 31300,
        'URBAN_FEATURES': 32000,
        'WALL': 32100,
        'SIDEWALK': 32200,
        'POLE': 32300,
        'FENCE': 32400,
        'JERSEY_BARRIER': 32500,
        'CONE': 32600,
        'RURAL_FEATURES': 33000,
        'PUMP': 33100,
        'PIPE': 33200,
        'NEG_OBS': 40000,
        'POTHOLE': 41000,
        'CLIFF': 42000,
        'POST_HOLE': 43000,
        'SINKHOLE': 44000,
        'PIT_HOLE': 45000,
        'DITCH': 46000,
        'MISC': 50000,
        'ISO18497_OBJECT': 51000,
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
                'tracked_object_msgs.msg.ObjectTypes')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_types
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_types
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_types
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_types
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_types

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'ANIMAL': cls.__constants['ANIMAL'],
            'HUMAN': cls.__constants['HUMAN'],
            'STANDING': cls.__constants['STANDING'],
            'PRONE': cls.__constants['PRONE'],
            'CROUCHING': cls.__constants['CROUCHING'],
            'VEHICLE': cls.__constants['VEHICLE'],
            'AGRICULTURE': cls.__constants['AGRICULTURE'],
            'TRACTOR': cls.__constants['TRACTOR'],
            'CASE_MAGNUM_390': cls.__constants['CASE_MAGNUM_390'],
            'SPRAYER': cls.__constants['SPRAYER'],
            'COMBINE': cls.__constants['COMBINE'],
            'PLANTER': cls.__constants['PLANTER'],
            'CONSTRUCTION': cls.__constants['CONSTRUCTION'],
            'DOZER': cls.__constants['DOZER'],
            'EXCAVATOR': cls.__constants['EXCAVATOR'],
            'GRADER': cls.__constants['GRADER'],
            'SCRAPER': cls.__constants['SCRAPER'],
            'CRANE': cls.__constants['CRANE'],
            'COMPACTOR': cls.__constants['COMPACTOR'],
            'FRONT_LOADER': cls.__constants['FRONT_LOADER'],
            'BACKHOE': cls.__constants['BACKHOE'],
            'VEHICLE_ON_ROAD': cls.__constants['VEHICLE_ON_ROAD'],
            'CAR': cls.__constants['CAR'],
            'BICYCLE': cls.__constants['BICYCLE'],
            'UTILITY': cls.__constants['UTILITY'],
            'DUMPTRUCK': cls.__constants['DUMPTRUCK'],
            'PICKUP': cls.__constants['PICKUP'],
            'FORKLIFT': cls.__constants['FORKLIFT'],
            'ENVIRONMENT': cls.__constants['ENVIRONMENT'],
            'NATURAL_FEATURES': cls.__constants['NATURAL_FEATURES'],
            'ROCK': cls.__constants['ROCK'],
            'TREE': cls.__constants['TREE'],
            'WATER': cls.__constants['WATER'],
            'URBAN_FEATURES': cls.__constants['URBAN_FEATURES'],
            'WALL': cls.__constants['WALL'],
            'SIDEWALK': cls.__constants['SIDEWALK'],
            'POLE': cls.__constants['POLE'],
            'FENCE': cls.__constants['FENCE'],
            'JERSEY_BARRIER': cls.__constants['JERSEY_BARRIER'],
            'CONE': cls.__constants['CONE'],
            'RURAL_FEATURES': cls.__constants['RURAL_FEATURES'],
            'PUMP': cls.__constants['PUMP'],
            'PIPE': cls.__constants['PIPE'],
            'NEG_OBS': cls.__constants['NEG_OBS'],
            'POTHOLE': cls.__constants['POTHOLE'],
            'CLIFF': cls.__constants['CLIFF'],
            'POST_HOLE': cls.__constants['POST_HOLE'],
            'SINKHOLE': cls.__constants['SINKHOLE'],
            'PIT_HOLE': cls.__constants['PIT_HOLE'],
            'DITCH': cls.__constants['DITCH'],
            'MISC': cls.__constants['MISC'],
            'ISO18497_OBJECT': cls.__constants['ISO18497_OBJECT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ObjectTypes.__constants['UNKNOWN']

    @property
    def ANIMAL(self):
        """Message constant 'ANIMAL'."""
        return Metaclass_ObjectTypes.__constants['ANIMAL']

    @property
    def HUMAN(self):
        """Message constant 'HUMAN'."""
        return Metaclass_ObjectTypes.__constants['HUMAN']

    @property
    def STANDING(self):
        """Message constant 'STANDING'."""
        return Metaclass_ObjectTypes.__constants['STANDING']

    @property
    def PRONE(self):
        """Message constant 'PRONE'."""
        return Metaclass_ObjectTypes.__constants['PRONE']

    @property
    def CROUCHING(self):
        """Message constant 'CROUCHING'."""
        return Metaclass_ObjectTypes.__constants['CROUCHING']

    @property
    def VEHICLE(self):
        """Message constant 'VEHICLE'."""
        return Metaclass_ObjectTypes.__constants['VEHICLE']

    @property
    def AGRICULTURE(self):
        """Message constant 'AGRICULTURE'."""
        return Metaclass_ObjectTypes.__constants['AGRICULTURE']

    @property
    def TRACTOR(self):
        """Message constant 'TRACTOR'."""
        return Metaclass_ObjectTypes.__constants['TRACTOR']

    @property
    def CASE_MAGNUM_390(self):
        """Message constant 'CASE_MAGNUM_390'."""
        return Metaclass_ObjectTypes.__constants['CASE_MAGNUM_390']

    @property
    def SPRAYER(self):
        """Message constant 'SPRAYER'."""
        return Metaclass_ObjectTypes.__constants['SPRAYER']

    @property
    def COMBINE(self):
        """Message constant 'COMBINE'."""
        return Metaclass_ObjectTypes.__constants['COMBINE']

    @property
    def PLANTER(self):
        """Message constant 'PLANTER'."""
        return Metaclass_ObjectTypes.__constants['PLANTER']

    @property
    def CONSTRUCTION(self):
        """Message constant 'CONSTRUCTION'."""
        return Metaclass_ObjectTypes.__constants['CONSTRUCTION']

    @property
    def DOZER(self):
        """Message constant 'DOZER'."""
        return Metaclass_ObjectTypes.__constants['DOZER']

    @property
    def EXCAVATOR(self):
        """Message constant 'EXCAVATOR'."""
        return Metaclass_ObjectTypes.__constants['EXCAVATOR']

    @property
    def GRADER(self):
        """Message constant 'GRADER'."""
        return Metaclass_ObjectTypes.__constants['GRADER']

    @property
    def SCRAPER(self):
        """Message constant 'SCRAPER'."""
        return Metaclass_ObjectTypes.__constants['SCRAPER']

    @property
    def CRANE(self):
        """Message constant 'CRANE'."""
        return Metaclass_ObjectTypes.__constants['CRANE']

    @property
    def COMPACTOR(self):
        """Message constant 'COMPACTOR'."""
        return Metaclass_ObjectTypes.__constants['COMPACTOR']

    @property
    def FRONT_LOADER(self):
        """Message constant 'FRONT_LOADER'."""
        return Metaclass_ObjectTypes.__constants['FRONT_LOADER']

    @property
    def BACKHOE(self):
        """Message constant 'BACKHOE'."""
        return Metaclass_ObjectTypes.__constants['BACKHOE']

    @property
    def VEHICLE_ON_ROAD(self):
        """Message constant 'VEHICLE_ON_ROAD'."""
        return Metaclass_ObjectTypes.__constants['VEHICLE_ON_ROAD']

    @property
    def CAR(self):
        """Message constant 'CAR'."""
        return Metaclass_ObjectTypes.__constants['CAR']

    @property
    def BICYCLE(self):
        """Message constant 'BICYCLE'."""
        return Metaclass_ObjectTypes.__constants['BICYCLE']

    @property
    def UTILITY(self):
        """Message constant 'UTILITY'."""
        return Metaclass_ObjectTypes.__constants['UTILITY']

    @property
    def DUMPTRUCK(self):
        """Message constant 'DUMPTRUCK'."""
        return Metaclass_ObjectTypes.__constants['DUMPTRUCK']

    @property
    def PICKUP(self):
        """Message constant 'PICKUP'."""
        return Metaclass_ObjectTypes.__constants['PICKUP']

    @property
    def FORKLIFT(self):
        """Message constant 'FORKLIFT'."""
        return Metaclass_ObjectTypes.__constants['FORKLIFT']

    @property
    def ENVIRONMENT(self):
        """Message constant 'ENVIRONMENT'."""
        return Metaclass_ObjectTypes.__constants['ENVIRONMENT']

    @property
    def NATURAL_FEATURES(self):
        """Message constant 'NATURAL_FEATURES'."""
        return Metaclass_ObjectTypes.__constants['NATURAL_FEATURES']

    @property
    def ROCK(self):
        """Message constant 'ROCK'."""
        return Metaclass_ObjectTypes.__constants['ROCK']

    @property
    def TREE(self):
        """Message constant 'TREE'."""
        return Metaclass_ObjectTypes.__constants['TREE']

    @property
    def WATER(self):
        """Message constant 'WATER'."""
        return Metaclass_ObjectTypes.__constants['WATER']

    @property
    def URBAN_FEATURES(self):
        """Message constant 'URBAN_FEATURES'."""
        return Metaclass_ObjectTypes.__constants['URBAN_FEATURES']

    @property
    def WALL(self):
        """Message constant 'WALL'."""
        return Metaclass_ObjectTypes.__constants['WALL']

    @property
    def SIDEWALK(self):
        """Message constant 'SIDEWALK'."""
        return Metaclass_ObjectTypes.__constants['SIDEWALK']

    @property
    def POLE(self):
        """Message constant 'POLE'."""
        return Metaclass_ObjectTypes.__constants['POLE']

    @property
    def FENCE(self):
        """Message constant 'FENCE'."""
        return Metaclass_ObjectTypes.__constants['FENCE']

    @property
    def JERSEY_BARRIER(self):
        """Message constant 'JERSEY_BARRIER'."""
        return Metaclass_ObjectTypes.__constants['JERSEY_BARRIER']

    @property
    def CONE(self):
        """Message constant 'CONE'."""
        return Metaclass_ObjectTypes.__constants['CONE']

    @property
    def RURAL_FEATURES(self):
        """Message constant 'RURAL_FEATURES'."""
        return Metaclass_ObjectTypes.__constants['RURAL_FEATURES']

    @property
    def PUMP(self):
        """Message constant 'PUMP'."""
        return Metaclass_ObjectTypes.__constants['PUMP']

    @property
    def PIPE(self):
        """Message constant 'PIPE'."""
        return Metaclass_ObjectTypes.__constants['PIPE']

    @property
    def NEG_OBS(self):
        """Message constant 'NEG_OBS'."""
        return Metaclass_ObjectTypes.__constants['NEG_OBS']

    @property
    def POTHOLE(self):
        """Message constant 'POTHOLE'."""
        return Metaclass_ObjectTypes.__constants['POTHOLE']

    @property
    def CLIFF(self):
        """Message constant 'CLIFF'."""
        return Metaclass_ObjectTypes.__constants['CLIFF']

    @property
    def POST_HOLE(self):
        """Message constant 'POST_HOLE'."""
        return Metaclass_ObjectTypes.__constants['POST_HOLE']

    @property
    def SINKHOLE(self):
        """Message constant 'SINKHOLE'."""
        return Metaclass_ObjectTypes.__constants['SINKHOLE']

    @property
    def PIT_HOLE(self):
        """Message constant 'PIT_HOLE'."""
        return Metaclass_ObjectTypes.__constants['PIT_HOLE']

    @property
    def DITCH(self):
        """Message constant 'DITCH'."""
        return Metaclass_ObjectTypes.__constants['DITCH']

    @property
    def MISC(self):
        """Message constant 'MISC'."""
        return Metaclass_ObjectTypes.__constants['MISC']

    @property
    def ISO18497_OBJECT(self):
        """Message constant 'ISO18497_OBJECT'."""
        return Metaclass_ObjectTypes.__constants['ISO18497_OBJECT']


class ObjectTypes(metaclass=Metaclass_ObjectTypes):
    """
    Message class 'ObjectTypes'.

    Constants:
      UNKNOWN
      ANIMAL
      HUMAN
      STANDING
      PRONE
      CROUCHING
      VEHICLE
      AGRICULTURE
      TRACTOR
      CASE_MAGNUM_390
      SPRAYER
      COMBINE
      PLANTER
      CONSTRUCTION
      DOZER
      EXCAVATOR
      GRADER
      SCRAPER
      CRANE
      COMPACTOR
      FRONT_LOADER
      BACKHOE
      VEHICLE_ON_ROAD
      CAR
      BICYCLE
      UTILITY
      DUMPTRUCK
      PICKUP
      FORKLIFT
      ENVIRONMENT
      NATURAL_FEATURES
      ROCK
      TREE
      WATER
      URBAN_FEATURES
      WALL
      SIDEWALK
      POLE
      FENCE
      JERSEY_BARRIER
      CONE
      RURAL_FEATURES
      PUMP
      PIPE
      NEG_OBS
      POTHOLE
      CLIFF
      POST_HOLE
      SINKHOLE
      PIT_HOLE
      DITCH
      MISC
      ISO18497_OBJECT
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
