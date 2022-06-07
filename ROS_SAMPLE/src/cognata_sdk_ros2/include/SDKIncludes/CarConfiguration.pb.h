// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarConfiguration.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CarConfiguration_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CarConfiguration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CarConfiguration_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CarConfiguration_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CarConfiguration_2eproto;
namespace Cognata {
namespace SDK {
class CarConfiguration;
class CarConfigurationDefaultTypeInternal;
extern CarConfigurationDefaultTypeInternal _CarConfiguration_default_instance_;
class LightsState;
class LightsStateDefaultTypeInternal;
extern LightsStateDefaultTypeInternal _LightsState_default_instance_;
}  // namespace SDK
}  // namespace Cognata
PROTOBUF_NAMESPACE_OPEN
template<> ::Cognata::SDK::CarConfiguration* Arena::CreateMaybeMessage<::Cognata::SDK::CarConfiguration>(Arena*);
template<> ::Cognata::SDK::LightsState* Arena::CreateMaybeMessage<::Cognata::SDK::LightsState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Cognata {
namespace SDK {

enum CarConfiguration_EngineState : int {
  CarConfiguration_EngineState_ENGINE_OFF = 0,
  CarConfiguration_EngineState_ENGINE_ON = 1,
  CarConfiguration_EngineState_CarConfiguration_EngineState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CarConfiguration_EngineState_CarConfiguration_EngineState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CarConfiguration_EngineState_IsValid(int value);
constexpr CarConfiguration_EngineState CarConfiguration_EngineState_EngineState_MIN = CarConfiguration_EngineState_ENGINE_OFF;
constexpr CarConfiguration_EngineState CarConfiguration_EngineState_EngineState_MAX = CarConfiguration_EngineState_ENGINE_ON;
constexpr int CarConfiguration_EngineState_EngineState_ARRAYSIZE = CarConfiguration_EngineState_EngineState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CarConfiguration_EngineState_descriptor();
template<typename T>
inline const std::string& CarConfiguration_EngineState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CarConfiguration_EngineState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CarConfiguration_EngineState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CarConfiguration_EngineState_descriptor(), enum_t_value);
}
inline bool CarConfiguration_EngineState_Parse(
    const std::string& name, CarConfiguration_EngineState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CarConfiguration_EngineState>(
    CarConfiguration_EngineState_descriptor(), name, value);
}
enum CarConfiguration_GearState : int {
  CarConfiguration_GearState_MANUAL = 0,
  CarConfiguration_GearState_PARKING = 1,
  CarConfiguration_GearState_REVERSE = 2,
  CarConfiguration_GearState_NEUTRAL = 3,
  CarConfiguration_GearState_DRIVING = 4,
  CarConfiguration_GearState_LOW = 5,
  CarConfiguration_GearState_CarConfiguration_GearState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CarConfiguration_GearState_CarConfiguration_GearState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CarConfiguration_GearState_IsValid(int value);
constexpr CarConfiguration_GearState CarConfiguration_GearState_GearState_MIN = CarConfiguration_GearState_MANUAL;
constexpr CarConfiguration_GearState CarConfiguration_GearState_GearState_MAX = CarConfiguration_GearState_LOW;
constexpr int CarConfiguration_GearState_GearState_ARRAYSIZE = CarConfiguration_GearState_GearState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CarConfiguration_GearState_descriptor();
template<typename T>
inline const std::string& CarConfiguration_GearState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CarConfiguration_GearState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CarConfiguration_GearState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CarConfiguration_GearState_descriptor(), enum_t_value);
}
inline bool CarConfiguration_GearState_Parse(
    const std::string& name, CarConfiguration_GearState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CarConfiguration_GearState>(
    CarConfiguration_GearState_descriptor(), name, value);
}
enum CarConfiguration_SignalState : int {
  CarConfiguration_SignalState_SIGNAL_OFF = 0,
  CarConfiguration_SignalState_SIGNAL_RIGHT = 1,
  CarConfiguration_SignalState_SIGNAL_LEFT = 2,
  CarConfiguration_SignalState_SIGNAL_ALARM = 3,
  CarConfiguration_SignalState_CarConfiguration_SignalState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CarConfiguration_SignalState_CarConfiguration_SignalState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CarConfiguration_SignalState_IsValid(int value);
constexpr CarConfiguration_SignalState CarConfiguration_SignalState_SignalState_MIN = CarConfiguration_SignalState_SIGNAL_OFF;
constexpr CarConfiguration_SignalState CarConfiguration_SignalState_SignalState_MAX = CarConfiguration_SignalState_SIGNAL_ALARM;
constexpr int CarConfiguration_SignalState_SignalState_ARRAYSIZE = CarConfiguration_SignalState_SignalState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CarConfiguration_SignalState_descriptor();
template<typename T>
inline const std::string& CarConfiguration_SignalState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CarConfiguration_SignalState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CarConfiguration_SignalState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CarConfiguration_SignalState_descriptor(), enum_t_value);
}
inline bool CarConfiguration_SignalState_Parse(
    const std::string& name, CarConfiguration_SignalState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CarConfiguration_SignalState>(
    CarConfiguration_SignalState_descriptor(), name, value);
}
enum LightsState_LightState : int {
  LightsState_LightState_LIGHT_OFF = 0,
  LightsState_LightState_LIGHT_ON = 1,
  LightsState_LightState_LightsState_LightState_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  LightsState_LightState_LightsState_LightState_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool LightsState_LightState_IsValid(int value);
constexpr LightsState_LightState LightsState_LightState_LightState_MIN = LightsState_LightState_LIGHT_OFF;
constexpr LightsState_LightState LightsState_LightState_LightState_MAX = LightsState_LightState_LIGHT_ON;
constexpr int LightsState_LightState_LightState_ARRAYSIZE = LightsState_LightState_LightState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LightsState_LightState_descriptor();
template<typename T>
inline const std::string& LightsState_LightState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LightsState_LightState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LightsState_LightState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LightsState_LightState_descriptor(), enum_t_value);
}
inline bool LightsState_LightState_Parse(
    const std::string& name, LightsState_LightState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LightsState_LightState>(
    LightsState_LightState_descriptor(), name, value);
}
// ===================================================================

class CarConfiguration :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cognata.SDK.CarConfiguration) */ {
 public:
  CarConfiguration();
  virtual ~CarConfiguration();

  CarConfiguration(const CarConfiguration& from);
  CarConfiguration(CarConfiguration&& from) noexcept
    : CarConfiguration() {
    *this = ::std::move(from);
  }

  inline CarConfiguration& operator=(const CarConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  inline CarConfiguration& operator=(CarConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CarConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CarConfiguration* internal_default_instance() {
    return reinterpret_cast<const CarConfiguration*>(
               &_CarConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CarConfiguration* other);
  friend void swap(CarConfiguration& a, CarConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CarConfiguration* New() const final {
    return CreateMaybeMessage<CarConfiguration>(nullptr);
  }

  CarConfiguration* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CarConfiguration>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CarConfiguration& from);
  void MergeFrom(const CarConfiguration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CarConfiguration* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cognata.SDK.CarConfiguration";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CarConfiguration_2eproto);
    return ::descriptor_table_CarConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CarConfiguration_EngineState EngineState;
  static constexpr EngineState ENGINE_OFF =
    CarConfiguration_EngineState_ENGINE_OFF;
  static constexpr EngineState ENGINE_ON =
    CarConfiguration_EngineState_ENGINE_ON;
  static inline bool EngineState_IsValid(int value) {
    return CarConfiguration_EngineState_IsValid(value);
  }
  static constexpr EngineState EngineState_MIN =
    CarConfiguration_EngineState_EngineState_MIN;
  static constexpr EngineState EngineState_MAX =
    CarConfiguration_EngineState_EngineState_MAX;
  static constexpr int EngineState_ARRAYSIZE =
    CarConfiguration_EngineState_EngineState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EngineState_descriptor() {
    return CarConfiguration_EngineState_descriptor();
  }
  template<typename T>
  static inline const std::string& EngineState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EngineState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EngineState_Name.");
    return CarConfiguration_EngineState_Name(enum_t_value);
  }
  static inline bool EngineState_Parse(const std::string& name,
      EngineState* value) {
    return CarConfiguration_EngineState_Parse(name, value);
  }

  typedef CarConfiguration_GearState GearState;
  static constexpr GearState MANUAL =
    CarConfiguration_GearState_MANUAL;
  static constexpr GearState PARKING =
    CarConfiguration_GearState_PARKING;
  static constexpr GearState REVERSE =
    CarConfiguration_GearState_REVERSE;
  static constexpr GearState NEUTRAL =
    CarConfiguration_GearState_NEUTRAL;
  static constexpr GearState DRIVING =
    CarConfiguration_GearState_DRIVING;
  static constexpr GearState LOW =
    CarConfiguration_GearState_LOW;
  static inline bool GearState_IsValid(int value) {
    return CarConfiguration_GearState_IsValid(value);
  }
  static constexpr GearState GearState_MIN =
    CarConfiguration_GearState_GearState_MIN;
  static constexpr GearState GearState_MAX =
    CarConfiguration_GearState_GearState_MAX;
  static constexpr int GearState_ARRAYSIZE =
    CarConfiguration_GearState_GearState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  GearState_descriptor() {
    return CarConfiguration_GearState_descriptor();
  }
  template<typename T>
  static inline const std::string& GearState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, GearState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function GearState_Name.");
    return CarConfiguration_GearState_Name(enum_t_value);
  }
  static inline bool GearState_Parse(const std::string& name,
      GearState* value) {
    return CarConfiguration_GearState_Parse(name, value);
  }

  typedef CarConfiguration_SignalState SignalState;
  static constexpr SignalState SIGNAL_OFF =
    CarConfiguration_SignalState_SIGNAL_OFF;
  static constexpr SignalState SIGNAL_RIGHT =
    CarConfiguration_SignalState_SIGNAL_RIGHT;
  static constexpr SignalState SIGNAL_LEFT =
    CarConfiguration_SignalState_SIGNAL_LEFT;
  static constexpr SignalState SIGNAL_ALARM =
    CarConfiguration_SignalState_SIGNAL_ALARM;
  static inline bool SignalState_IsValid(int value) {
    return CarConfiguration_SignalState_IsValid(value);
  }
  static constexpr SignalState SignalState_MIN =
    CarConfiguration_SignalState_SignalState_MIN;
  static constexpr SignalState SignalState_MAX =
    CarConfiguration_SignalState_SignalState_MAX;
  static constexpr int SignalState_ARRAYSIZE =
    CarConfiguration_SignalState_SignalState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  SignalState_descriptor() {
    return CarConfiguration_SignalState_descriptor();
  }
  template<typename T>
  static inline const std::string& SignalState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, SignalState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function SignalState_Name.");
    return CarConfiguration_SignalState_Name(enum_t_value);
  }
  static inline bool SignalState_Parse(const std::string& name,
      SignalState* value) {
    return CarConfiguration_SignalState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .Cognata.SDK.LightsState lightsState = 9;
  bool has_lightsstate() const;
  void clear_lightsstate();
  static const int kLightsStateFieldNumber = 9;
  const ::Cognata::SDK::LightsState& lightsstate() const;
  ::Cognata::SDK::LightsState* release_lightsstate();
  ::Cognata::SDK::LightsState* mutable_lightsstate();
  void set_allocated_lightsstate(::Cognata::SDK::LightsState* lightsstate);

  // .Cognata.SDK.CarConfiguration.EngineState engine = 1;
  void clear_engine();
  static const int kEngineFieldNumber = 1;
  ::Cognata::SDK::CarConfiguration_EngineState engine() const;
  void set_engine(::Cognata::SDK::CarConfiguration_EngineState value);

  // .Cognata.SDK.CarConfiguration.GearState gear = 2;
  void clear_gear();
  static const int kGearFieldNumber = 2;
  ::Cognata::SDK::CarConfiguration_GearState gear() const;
  void set_gear(::Cognata::SDK::CarConfiguration_GearState value);

  // .Cognata.SDK.CarConfiguration.SignalState signal = 3;
  void clear_signal();
  static const int kSignalFieldNumber = 3;
  ::Cognata::SDK::CarConfiguration_SignalState signal() const;
  void set_signal(::Cognata::SDK::CarConfiguration_SignalState value);

  // .Cognata.SDK.CarConfiguration.SignalState signalLight = 4;
  void clear_signallight();
  static const int kSignalLightFieldNumber = 4;
  ::Cognata::SDK::CarConfiguration_SignalState signallight() const;
  void set_signallight(::Cognata::SDK::CarConfiguration_SignalState value);

  // float acceleration = 5;
  void clear_acceleration();
  static const int kAccelerationFieldNumber = 5;
  float acceleration() const;
  void set_acceleration(float value);

  // float brake = 6;
  void clear_brake();
  static const int kBrakeFieldNumber = 6;
  float brake() const;
  void set_brake(float value);

  // float steering = 7;
  void clear_steering();
  static const int kSteeringFieldNumber = 7;
  float steering() const;
  void set_steering(float value);

  // float gas = 8;
  void clear_gas();
  static const int kGasFieldNumber = 8;
  float gas() const;
  void set_gas(float value);

  // @@protoc_insertion_point(class_scope:Cognata.SDK.CarConfiguration)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::Cognata::SDK::LightsState* lightsstate_;
  int engine_;
  int gear_;
  int signal_;
  int signallight_;
  float acceleration_;
  float brake_;
  float steering_;
  float gas_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CarConfiguration_2eproto;
};
// -------------------------------------------------------------------

class LightsState :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Cognata.SDK.LightsState) */ {
 public:
  LightsState();
  virtual ~LightsState();

  LightsState(const LightsState& from);
  LightsState(LightsState&& from) noexcept
    : LightsState() {
    *this = ::std::move(from);
  }

  inline LightsState& operator=(const LightsState& from) {
    CopyFrom(from);
    return *this;
  }
  inline LightsState& operator=(LightsState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LightsState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LightsState* internal_default_instance() {
    return reinterpret_cast<const LightsState*>(
               &_LightsState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(LightsState* other);
  friend void swap(LightsState& a, LightsState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LightsState* New() const final {
    return CreateMaybeMessage<LightsState>(nullptr);
  }

  LightsState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LightsState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LightsState& from);
  void MergeFrom(const LightsState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LightsState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Cognata.SDK.LightsState";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CarConfiguration_2eproto);
    return ::descriptor_table_CarConfiguration_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef LightsState_LightState LightState;
  static constexpr LightState LIGHT_OFF =
    LightsState_LightState_LIGHT_OFF;
  static constexpr LightState LIGHT_ON =
    LightsState_LightState_LIGHT_ON;
  static inline bool LightState_IsValid(int value) {
    return LightsState_LightState_IsValid(value);
  }
  static constexpr LightState LightState_MIN =
    LightsState_LightState_LightState_MIN;
  static constexpr LightState LightState_MAX =
    LightsState_LightState_LightState_MAX;
  static constexpr int LightState_ARRAYSIZE =
    LightsState_LightState_LightState_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  LightState_descriptor() {
    return LightsState_LightState_descriptor();
  }
  template<typename T>
  static inline const std::string& LightState_Name(T enum_t_value) {
    static_assert(::std::is_same<T, LightState>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function LightState_Name.");
    return LightsState_LightState_Name(enum_t_value);
  }
  static inline bool LightState_Parse(const std::string& name,
      LightState* value) {
    return LightsState_LightState_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // .Cognata.SDK.LightsState.LightState headLight = 1;
  void clear_headlight();
  static const int kHeadLightFieldNumber = 1;
  ::Cognata::SDK::LightsState_LightState headlight() const;
  void set_headlight(::Cognata::SDK::LightsState_LightState value);

  // .Cognata.SDK.LightsState.LightState brake = 2;
  void clear_brake();
  static const int kBrakeFieldNumber = 2;
  ::Cognata::SDK::LightsState_LightState brake() const;
  void set_brake(::Cognata::SDK::LightsState_LightState value);

  // .Cognata.SDK.LightsState.LightState reverse = 3;
  void clear_reverse();
  static const int kReverseFieldNumber = 3;
  ::Cognata::SDK::LightsState_LightState reverse() const;
  void set_reverse(::Cognata::SDK::LightsState_LightState value);

  // @@protoc_insertion_point(class_scope:Cognata.SDK.LightsState)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  int headlight_;
  int brake_;
  int reverse_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CarConfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CarConfiguration

// .Cognata.SDK.CarConfiguration.EngineState engine = 1;
inline void CarConfiguration::clear_engine() {
  engine_ = 0;
}
inline ::Cognata::SDK::CarConfiguration_EngineState CarConfiguration::engine() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.engine)
  return static_cast< ::Cognata::SDK::CarConfiguration_EngineState >(engine_);
}
inline void CarConfiguration::set_engine(::Cognata::SDK::CarConfiguration_EngineState value) {
  
  engine_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.engine)
}

// .Cognata.SDK.CarConfiguration.GearState gear = 2;
inline void CarConfiguration::clear_gear() {
  gear_ = 0;
}
inline ::Cognata::SDK::CarConfiguration_GearState CarConfiguration::gear() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.gear)
  return static_cast< ::Cognata::SDK::CarConfiguration_GearState >(gear_);
}
inline void CarConfiguration::set_gear(::Cognata::SDK::CarConfiguration_GearState value) {
  
  gear_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.gear)
}

// .Cognata.SDK.CarConfiguration.SignalState signal = 3;
inline void CarConfiguration::clear_signal() {
  signal_ = 0;
}
inline ::Cognata::SDK::CarConfiguration_SignalState CarConfiguration::signal() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.signal)
  return static_cast< ::Cognata::SDK::CarConfiguration_SignalState >(signal_);
}
inline void CarConfiguration::set_signal(::Cognata::SDK::CarConfiguration_SignalState value) {
  
  signal_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.signal)
}

// .Cognata.SDK.CarConfiguration.SignalState signalLight = 4;
inline void CarConfiguration::clear_signallight() {
  signallight_ = 0;
}
inline ::Cognata::SDK::CarConfiguration_SignalState CarConfiguration::signallight() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.signalLight)
  return static_cast< ::Cognata::SDK::CarConfiguration_SignalState >(signallight_);
}
inline void CarConfiguration::set_signallight(::Cognata::SDK::CarConfiguration_SignalState value) {
  
  signallight_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.signalLight)
}

// float acceleration = 5;
inline void CarConfiguration::clear_acceleration() {
  acceleration_ = 0;
}
inline float CarConfiguration::acceleration() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.acceleration)
  return acceleration_;
}
inline void CarConfiguration::set_acceleration(float value) {
  
  acceleration_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.acceleration)
}

// float brake = 6;
inline void CarConfiguration::clear_brake() {
  brake_ = 0;
}
inline float CarConfiguration::brake() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.brake)
  return brake_;
}
inline void CarConfiguration::set_brake(float value) {
  
  brake_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.brake)
}

// float steering = 7;
inline void CarConfiguration::clear_steering() {
  steering_ = 0;
}
inline float CarConfiguration::steering() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.steering)
  return steering_;
}
inline void CarConfiguration::set_steering(float value) {
  
  steering_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.steering)
}

// float gas = 8;
inline void CarConfiguration::clear_gas() {
  gas_ = 0;
}
inline float CarConfiguration::gas() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.gas)
  return gas_;
}
inline void CarConfiguration::set_gas(float value) {
  
  gas_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.CarConfiguration.gas)
}

// .Cognata.SDK.LightsState lightsState = 9;
inline bool CarConfiguration::has_lightsstate() const {
  return this != internal_default_instance() && lightsstate_ != nullptr;
}
inline void CarConfiguration::clear_lightsstate() {
  if (GetArenaNoVirtual() == nullptr && lightsstate_ != nullptr) {
    delete lightsstate_;
  }
  lightsstate_ = nullptr;
}
inline const ::Cognata::SDK::LightsState& CarConfiguration::lightsstate() const {
  const ::Cognata::SDK::LightsState* p = lightsstate_;
  // @@protoc_insertion_point(field_get:Cognata.SDK.CarConfiguration.lightsState)
  return p != nullptr ? *p : *reinterpret_cast<const ::Cognata::SDK::LightsState*>(
      &::Cognata::SDK::_LightsState_default_instance_);
}
inline ::Cognata::SDK::LightsState* CarConfiguration::release_lightsstate() {
  // @@protoc_insertion_point(field_release:Cognata.SDK.CarConfiguration.lightsState)
  
  ::Cognata::SDK::LightsState* temp = lightsstate_;
  lightsstate_ = nullptr;
  return temp;
}
inline ::Cognata::SDK::LightsState* CarConfiguration::mutable_lightsstate() {
  
  if (lightsstate_ == nullptr) {
    auto* p = CreateMaybeMessage<::Cognata::SDK::LightsState>(GetArenaNoVirtual());
    lightsstate_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Cognata.SDK.CarConfiguration.lightsState)
  return lightsstate_;
}
inline void CarConfiguration::set_allocated_lightsstate(::Cognata::SDK::LightsState* lightsstate) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete lightsstate_;
  }
  if (lightsstate) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      lightsstate = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, lightsstate, submessage_arena);
    }
    
  } else {
    
  }
  lightsstate_ = lightsstate;
  // @@protoc_insertion_point(field_set_allocated:Cognata.SDK.CarConfiguration.lightsState)
}

// -------------------------------------------------------------------

// LightsState

// .Cognata.SDK.LightsState.LightState headLight = 1;
inline void LightsState::clear_headlight() {
  headlight_ = 0;
}
inline ::Cognata::SDK::LightsState_LightState LightsState::headlight() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.LightsState.headLight)
  return static_cast< ::Cognata::SDK::LightsState_LightState >(headlight_);
}
inline void LightsState::set_headlight(::Cognata::SDK::LightsState_LightState value) {
  
  headlight_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.LightsState.headLight)
}

// .Cognata.SDK.LightsState.LightState brake = 2;
inline void LightsState::clear_brake() {
  brake_ = 0;
}
inline ::Cognata::SDK::LightsState_LightState LightsState::brake() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.LightsState.brake)
  return static_cast< ::Cognata::SDK::LightsState_LightState >(brake_);
}
inline void LightsState::set_brake(::Cognata::SDK::LightsState_LightState value) {
  
  brake_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.LightsState.brake)
}

// .Cognata.SDK.LightsState.LightState reverse = 3;
inline void LightsState::clear_reverse() {
  reverse_ = 0;
}
inline ::Cognata::SDK::LightsState_LightState LightsState::reverse() const {
  // @@protoc_insertion_point(field_get:Cognata.SDK.LightsState.reverse)
  return static_cast< ::Cognata::SDK::LightsState_LightState >(reverse_);
}
inline void LightsState::set_reverse(::Cognata::SDK::LightsState_LightState value) {
  
  reverse_ = value;
  // @@protoc_insertion_point(field_set:Cognata.SDK.LightsState.reverse)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace SDK
}  // namespace Cognata

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Cognata::SDK::CarConfiguration_EngineState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Cognata::SDK::CarConfiguration_EngineState>() {
  return ::Cognata::SDK::CarConfiguration_EngineState_descriptor();
}
template <> struct is_proto_enum< ::Cognata::SDK::CarConfiguration_GearState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Cognata::SDK::CarConfiguration_GearState>() {
  return ::Cognata::SDK::CarConfiguration_GearState_descriptor();
}
template <> struct is_proto_enum< ::Cognata::SDK::CarConfiguration_SignalState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Cognata::SDK::CarConfiguration_SignalState>() {
  return ::Cognata::SDK::CarConfiguration_SignalState_descriptor();
}
template <> struct is_proto_enum< ::Cognata::SDK::LightsState_LightState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Cognata::SDK::LightsState_LightState>() {
  return ::Cognata::SDK::LightsState_LightState_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CarConfiguration_2eproto