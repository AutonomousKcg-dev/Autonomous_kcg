// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tracked_object_msgs:msg/ObjectTypes.idl
// generated code does not contain a copyright notice

#ifndef TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_H_
#define TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__UNKNOWN = 0ul
};

/// Constant 'ANIMAL'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__ANIMAL = 10000ul
};

/// Constant 'HUMAN'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__HUMAN = 11000ul
};

/// Constant 'STANDING'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__STANDING = 11100ul
};

/// Constant 'PRONE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PRONE = 11200ul
};

/// Constant 'CROUCHING'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CROUCHING = 11300ul
};

/// Constant 'VEHICLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__VEHICLE = 20000ul
};

/// Constant 'AGRICULTURE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__AGRICULTURE = 21000ul
};

/// Constant 'TRACTOR'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__TRACTOR = 21100ul
};

/// Constant 'CASE_MAGNUM_390'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CASE_MAGNUM_390 = 21110ul
};

/// Constant 'SPRAYER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__SPRAYER = 21200ul
};

/// Constant 'COMBINE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__COMBINE = 21300ul
};

/// Constant 'PLANTER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PLANTER = 21400ul
};

/// Constant 'CONSTRUCTION'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CONSTRUCTION = 22000ul
};

/// Constant 'DOZER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__DOZER = 22100ul
};

/// Constant 'EXCAVATOR'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__EXCAVATOR = 22200ul
};

/// Constant 'GRADER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__GRADER = 22300ul
};

/// Constant 'SCRAPER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__SCRAPER = 22400ul
};

/// Constant 'CRANE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CRANE = 22500ul
};

/// Constant 'COMPACTOR'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__COMPACTOR = 22600ul
};

/// Constant 'FRONT_LOADER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__FRONT_LOADER = 22700ul
};

/// Constant 'BACKHOE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__BACKHOE = 22800ul
};

/// Constant 'VEHICLE_ON_ROAD'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__VEHICLE_ON_ROAD = 23000ul
};

/// Constant 'CAR'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CAR = 23100ul
};

/// Constant 'BICYCLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__BICYCLE = 23200ul
};

/// Constant 'UTILITY'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__UTILITY = 24000ul
};

/// Constant 'DUMPTRUCK'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__DUMPTRUCK = 24100ul
};

/// Constant 'PICKUP'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PICKUP = 24200ul
};

/// Constant 'FORKLIFT'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__FORKLIFT = 24300ul
};

/// Constant 'ENVIRONMENT'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__ENVIRONMENT = 30000ul
};

/// Constant 'NATURAL_FEATURES'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__NATURAL_FEATURES = 31000ul
};

/// Constant 'ROCK'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__ROCK = 31100ul
};

/// Constant 'TREE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__TREE = 31200ul
};

/// Constant 'WATER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__WATER = 31300ul
};

/// Constant 'URBAN_FEATURES'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__URBAN_FEATURES = 32000ul
};

/// Constant 'WALL'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__WALL = 32100ul
};

/// Constant 'SIDEWALK'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__SIDEWALK = 32200ul
};

/// Constant 'POLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__POLE = 32300ul
};

/// Constant 'FENCE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__FENCE = 32400ul
};

/// Constant 'JERSEY_BARRIER'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__JERSEY_BARRIER = 32500ul
};

/// Constant 'CONE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CONE = 32600ul
};

/// Constant 'RURAL_FEATURES'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__RURAL_FEATURES = 33000ul
};

/// Constant 'PUMP'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PUMP = 33100ul
};

/// Constant 'PIPE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PIPE = 33200ul
};

/// Constant 'NEG_OBS'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__NEG_OBS = 40000ul
};

/// Constant 'POTHOLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__POTHOLE = 41000ul
};

/// Constant 'CLIFF'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__CLIFF = 42000ul
};

/// Constant 'POST_HOLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__POST_HOLE = 43000ul
};

/// Constant 'SINKHOLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__SINKHOLE = 44000ul
};

/// Constant 'PIT_HOLE'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__PIT_HOLE = 45000ul
};

/// Constant 'DITCH'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__DITCH = 46000ul
};

/// Constant 'MISC'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__MISC = 50000ul
};

/// Constant 'ISO18497_OBJECT'.
enum
{
  tracked_object_msgs__msg__ObjectTypes__ISO18497_OBJECT = 51000ul
};

// Struct defined in msg/ObjectTypes in the package tracked_object_msgs.
typedef struct tracked_object_msgs__msg__ObjectTypes
{
  uint8_t structure_needs_at_least_one_member;
} tracked_object_msgs__msg__ObjectTypes;

// Struct for a sequence of tracked_object_msgs__msg__ObjectTypes.
typedef struct tracked_object_msgs__msg__ObjectTypes__Sequence
{
  tracked_object_msgs__msg__ObjectTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tracked_object_msgs__msg__ObjectTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRACKED_OBJECT_MSGS__MSG__DETAIL__OBJECT_TYPES__STRUCT_H_
