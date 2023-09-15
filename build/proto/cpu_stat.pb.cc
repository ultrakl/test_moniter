// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cpu_stat.proto

#include "cpu_stat.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace monitor {
namespace proto {
        template <typename>
PROTOBUF_CONSTEXPR CpuStat::CpuStat(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.cpu_name_)*/ {
          &::_pbi::fixed_address_empty_string,
          ::_pbi::ConstantInitialized{},
      },
      /*decltype(_impl_.cpu_percent_)*/ 0,
      /*decltype(_impl_.usr_percent_)*/ 0,
      /*decltype(_impl_.system_percent_)*/ 0,
      /*decltype(_impl_.nice_percent_)*/ 0,
      /*decltype(_impl_.idle_percent_)*/ 0,
      /*decltype(_impl_.io_wait_percent_)*/ 0,
      /*decltype(_impl_.irq_percent_)*/ 0,
      /*decltype(_impl_.soft_irq_percent_)*/ 0,
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct CpuStatDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CpuStatDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CpuStatDefaultTypeInternal() {}
  union {
    CpuStat _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CpuStatDefaultTypeInternal _CpuStat_default_instance_;
}  // namespace proto
}  // namespace monitor
static ::_pb::Metadata file_level_metadata_cpu_5fstat_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cpu_5fstat_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cpu_5fstat_2eproto = nullptr;
const ::uint32_t TableStruct_cpu_5fstat_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.cpu_name_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.cpu_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.usr_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.system_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.nice_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.idle_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.io_wait_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.irq_percent_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuStat, _impl_.soft_irq_percent_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::monitor::proto::CpuStat)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::monitor::proto::_CpuStat_default_instance_._instance,
};
const char descriptor_table_protodef_cpu_5fstat_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\016cpu_stat.proto\022\rmonitor.proto\"\321\001\n\007CpuS"
    "tat\022\020\n\010cpu_name\030\001 \001(\t\022\023\n\013cpu_percent\030\002 \001"
    "(\002\022\023\n\013usr_percent\030\003 \001(\002\022\026\n\016system_percen"
    "t\030\004 \001(\002\022\024\n\014nice_percent\030\005 \001(\002\022\024\n\014idle_pe"
    "rcent\030\006 \001(\002\022\027\n\017io_wait_percent\030\007 \001(\002\022\023\n\013"
    "irq_percent\030\010 \001(\002\022\030\n\020soft_irq_percent\030\t "
    "\001(\002b\006proto3"
};
static ::absl::once_flag descriptor_table_cpu_5fstat_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cpu_5fstat_2eproto = {
    false,
    false,
    251,
    descriptor_table_protodef_cpu_5fstat_2eproto,
    "cpu_stat.proto",
    &descriptor_table_cpu_5fstat_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_cpu_5fstat_2eproto::offsets,
    file_level_metadata_cpu_5fstat_2eproto,
    file_level_enum_descriptors_cpu_5fstat_2eproto,
    file_level_service_descriptors_cpu_5fstat_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cpu_5fstat_2eproto_getter() {
  return &descriptor_table_cpu_5fstat_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cpu_5fstat_2eproto(&descriptor_table_cpu_5fstat_2eproto);
namespace monitor {
namespace proto {
// ===================================================================

class CpuStat::_Internal {
 public:
};

CpuStat::CpuStat(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.proto.CpuStat)
}
CpuStat::CpuStat(const CpuStat& from) : ::google::protobuf::Message() {
  CpuStat* const _this = this;
  (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.cpu_name_){},
      decltype(_impl_.cpu_percent_){},
      decltype(_impl_.usr_percent_){},
      decltype(_impl_.system_percent_){},
      decltype(_impl_.nice_percent_){},
      decltype(_impl_.idle_percent_){},
      decltype(_impl_.io_wait_percent_){},
      decltype(_impl_.irq_percent_){},
      decltype(_impl_.soft_irq_percent_){},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  _impl_.cpu_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.cpu_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_cpu_name().empty()) {
    _this->_impl_.cpu_name_.Set(from._internal_cpu_name(), _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.cpu_percent_, &from._impl_.cpu_percent_,
    static_cast<::size_t>(reinterpret_cast<char*>(&_impl_.soft_irq_percent_) -
    reinterpret_cast<char*>(&_impl_.cpu_percent_)) + sizeof(_impl_.soft_irq_percent_));

  // @@protoc_insertion_point(copy_constructor:monitor.proto.CpuStat)
}
inline void CpuStat::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.cpu_name_){},
      decltype(_impl_.cpu_percent_){0},
      decltype(_impl_.usr_percent_){0},
      decltype(_impl_.system_percent_){0},
      decltype(_impl_.nice_percent_){0},
      decltype(_impl_.idle_percent_){0},
      decltype(_impl_.io_wait_percent_){0},
      decltype(_impl_.irq_percent_){0},
      decltype(_impl_.soft_irq_percent_){0},
      /*decltype(_impl_._cached_size_)*/ {},
  };
  _impl_.cpu_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.cpu_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}
CpuStat::~CpuStat() {
  // @@protoc_insertion_point(destructor:monitor.proto.CpuStat)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CpuStat::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.cpu_name_.Destroy();
}
void CpuStat::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void CpuStat::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.proto.CpuStat)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cpu_name_.ClearToEmpty();
  ::memset(&_impl_.cpu_percent_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.soft_irq_percent_) -
      reinterpret_cast<char*>(&_impl_.cpu_percent_)) + sizeof(_impl_.soft_irq_percent_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CpuStat::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 9, 0, 46, 2> CpuStat::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    9, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966784,  // skipmap
    offsetof(decltype(_table_), field_entries),
    9,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CpuStat_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string cpu_name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_name_)}},
    // float cpu_percent = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_)}},
    // float usr_percent = 3;
    {::_pbi::TcParser::FastF32S1,
     {29, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.usr_percent_)}},
    // float system_percent = 4;
    {::_pbi::TcParser::FastF32S1,
     {37, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.system_percent_)}},
    // float nice_percent = 5;
    {::_pbi::TcParser::FastF32S1,
     {45, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.nice_percent_)}},
    // float idle_percent = 6;
    {::_pbi::TcParser::FastF32S1,
     {53, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.idle_percent_)}},
    // float io_wait_percent = 7;
    {::_pbi::TcParser::FastF32S1,
     {61, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.io_wait_percent_)}},
    // float irq_percent = 8;
    {::_pbi::TcParser::FastF32S1,
     {69, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.irq_percent_)}},
    // float soft_irq_percent = 9;
    {::_pbi::TcParser::FastF32S1,
     {77, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // string cpu_name = 1;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // float cpu_percent = 2;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float usr_percent = 3;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.usr_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float system_percent = 4;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.system_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float nice_percent = 5;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.nice_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float idle_percent = 6;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.idle_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float io_wait_percent = 7;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.io_wait_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float irq_percent = 8;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.irq_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float soft_irq_percent = 9;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
    "\25\10\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "monitor.proto.CpuStat"
    "cpu_name"
  }},
};

::uint8_t* CpuStat::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.proto.CpuStat)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string cpu_name = 1;
  if (!this->_internal_cpu_name().empty()) {
    const std::string& _s = this->_internal_cpu_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "monitor.proto.CpuStat.cpu_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // float cpu_percent = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = this->_internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_cpu_percent(), target);
  }

  // float usr_percent = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = this->_internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_usr_percent(), target);
  }

  // float system_percent = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_system_percent = this->_internal_system_percent();
  ::uint32_t raw_system_percent;
  memcpy(&raw_system_percent, &tmp_system_percent, sizeof(tmp_system_percent));
  if (raw_system_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        4, this->_internal_system_percent(), target);
  }

  // float nice_percent = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = this->_internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        5, this->_internal_nice_percent(), target);
  }

  // float idle_percent = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = this->_internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        6, this->_internal_idle_percent(), target);
  }

  // float io_wait_percent = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = this->_internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        7, this->_internal_io_wait_percent(), target);
  }

  // float irq_percent = 8;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = this->_internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        8, this->_internal_irq_percent(), target);
  }

  // float soft_irq_percent = 9;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = this->_internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        9, this->_internal_soft_irq_percent(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.proto.CpuStat)
  return target;
}

::size_t CpuStat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.proto.CpuStat)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string cpu_name = 1;
  if (!this->_internal_cpu_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_cpu_name());
  }

  // float cpu_percent = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = this->_internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    total_size += 5;
  }

  // float usr_percent = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = this->_internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    total_size += 5;
  }

  // float system_percent = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_system_percent = this->_internal_system_percent();
  ::uint32_t raw_system_percent;
  memcpy(&raw_system_percent, &tmp_system_percent, sizeof(tmp_system_percent));
  if (raw_system_percent != 0) {
    total_size += 5;
  }

  // float nice_percent = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = this->_internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    total_size += 5;
  }

  // float idle_percent = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = this->_internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    total_size += 5;
  }

  // float io_wait_percent = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = this->_internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    total_size += 5;
  }

  // float irq_percent = 8;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = this->_internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    total_size += 5;
  }

  // float soft_irq_percent = 9;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = this->_internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CpuStat::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    CpuStat::MergeImpl
};
const ::google::protobuf::Message::ClassData*CpuStat::GetClassData() const { return &_class_data_; }


void CpuStat::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CpuStat*>(&to_msg);
  auto& from = static_cast<const CpuStat&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:monitor.proto.CpuStat)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_cpu_name().empty()) {
    _this->_internal_set_cpu_name(from._internal_cpu_name());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = from._internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    _this->_internal_set_cpu_percent(from._internal_cpu_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = from._internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    _this->_internal_set_usr_percent(from._internal_usr_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_system_percent = from._internal_system_percent();
  ::uint32_t raw_system_percent;
  memcpy(&raw_system_percent, &tmp_system_percent, sizeof(tmp_system_percent));
  if (raw_system_percent != 0) {
    _this->_internal_set_system_percent(from._internal_system_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = from._internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    _this->_internal_set_nice_percent(from._internal_nice_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = from._internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    _this->_internal_set_idle_percent(from._internal_idle_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = from._internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    _this->_internal_set_io_wait_percent(from._internal_io_wait_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = from._internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    _this->_internal_set_irq_percent(from._internal_irq_percent());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = from._internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    _this->_internal_set_soft_irq_percent(from._internal_soft_irq_percent());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CpuStat::CopyFrom(const CpuStat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.proto.CpuStat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CpuStat::IsInitialized() const {
  return true;
}

void CpuStat::InternalSwap(CpuStat* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.cpu_name_, lhs_arena,
                                       &other->_impl_.cpu_name_, rhs_arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_)
      + sizeof(CpuStat::_impl_.soft_irq_percent_)
      - PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_)>(
          reinterpret_cast<char*>(&_impl_.cpu_percent_),
          reinterpret_cast<char*>(&other->_impl_.cpu_percent_));
}

::google::protobuf::Metadata CpuStat::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cpu_5fstat_2eproto_getter, &descriptor_table_cpu_5fstat_2eproto_once,
      file_level_metadata_cpu_5fstat_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace monitor
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"