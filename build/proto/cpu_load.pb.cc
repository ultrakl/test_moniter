// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cpu_load.proto

#include "cpu_load.pb.h"

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
PROTOBUF_CONSTEXPR CpuLoad::CpuLoad(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_.load_avg_1_)*/ 0,
      /*decltype(_impl_.load_avg_3_)*/ 0,
      /*decltype(_impl_.load_avg_15_)*/ 0,
      /*decltype(_impl_._cached_size_)*/ {},
    } {}
struct CpuLoadDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CpuLoadDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CpuLoadDefaultTypeInternal() {}
  union {
    CpuLoad _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CpuLoadDefaultTypeInternal _CpuLoad_default_instance_;
}  // namespace proto
}  // namespace monitor
static ::_pb::Metadata file_level_metadata_cpu_5fload_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_cpu_5fload_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_cpu_5fload_2eproto = nullptr;
const ::uint32_t TableStruct_cpu_5fload_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuLoad, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuLoad, _impl_.load_avg_1_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuLoad, _impl_.load_avg_3_),
    PROTOBUF_FIELD_OFFSET(::monitor::proto::CpuLoad, _impl_.load_avg_15_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::monitor::proto::CpuLoad)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::monitor::proto::_CpuLoad_default_instance_._instance,
};
const char descriptor_table_protodef_cpu_5fload_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\016cpu_load.proto\022\rmonitor.proto\"F\n\007CpuLo"
    "ad\022\022\n\nload_avg_1\030\001 \001(\002\022\022\n\nload_avg_3\030\002 \001"
    "(\002\022\023\n\013load_avg_15\030\003 \001(\002b\006proto3"
};
static ::absl::once_flag descriptor_table_cpu_5fload_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cpu_5fload_2eproto = {
    false,
    false,
    111,
    descriptor_table_protodef_cpu_5fload_2eproto,
    "cpu_load.proto",
    &descriptor_table_cpu_5fload_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_cpu_5fload_2eproto::offsets,
    file_level_metadata_cpu_5fload_2eproto,
    file_level_enum_descriptors_cpu_5fload_2eproto,
    file_level_service_descriptors_cpu_5fload_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cpu_5fload_2eproto_getter() {
  return &descriptor_table_cpu_5fload_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cpu_5fload_2eproto(&descriptor_table_cpu_5fload_2eproto);
namespace monitor {
namespace proto {
// ===================================================================

class CpuLoad::_Internal {
 public:
};

CpuLoad::CpuLoad(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.proto.CpuLoad)
}
CpuLoad::CpuLoad(const CpuLoad& from)
    : ::google::protobuf::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:monitor.proto.CpuLoad)
}
inline void CpuLoad::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.load_avg_1_){0},
      decltype(_impl_.load_avg_3_){0},
      decltype(_impl_.load_avg_15_){0},
      /*decltype(_impl_._cached_size_)*/ {},
  };
}
CpuLoad::~CpuLoad() {
  // @@protoc_insertion_point(destructor:monitor.proto.CpuLoad)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CpuLoad::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void CpuLoad::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void CpuLoad::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.proto.CpuLoad)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.load_avg_1_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.load_avg_15_) -
      reinterpret_cast<char*>(&_impl_.load_avg_1_)) + sizeof(_impl_.load_avg_15_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* CpuLoad::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> CpuLoad::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CpuLoad_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // float load_avg_1 = 1;
    {::_pbi::TcParser::FastF32S1,
     {13, 63, 0, PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_1_)}},
    // float load_avg_3 = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 63, 0, PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_3_)}},
    // float load_avg_15 = 3;
    {::_pbi::TcParser::FastF32S1,
     {29, 63, 0, PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_15_)}},
  }}, {{
    65535, 65535
  }}, {{
    // float load_avg_1 = 1;
    {PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_1_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float load_avg_3 = 2;
    {PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_3_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float load_avg_15 = 3;
    {PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_15_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* CpuLoad::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.proto.CpuLoad)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // float load_avg_1 = 1;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_1 = this->_internal_load_avg_1();
  ::uint32_t raw_load_avg_1;
  memcpy(&raw_load_avg_1, &tmp_load_avg_1, sizeof(tmp_load_avg_1));
  if (raw_load_avg_1 != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        1, this->_internal_load_avg_1(), target);
  }

  // float load_avg_3 = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_3 = this->_internal_load_avg_3();
  ::uint32_t raw_load_avg_3;
  memcpy(&raw_load_avg_3, &tmp_load_avg_3, sizeof(tmp_load_avg_3));
  if (raw_load_avg_3 != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_load_avg_3(), target);
  }

  // float load_avg_15 = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_15 = this->_internal_load_avg_15();
  ::uint32_t raw_load_avg_15;
  memcpy(&raw_load_avg_15, &tmp_load_avg_15, sizeof(tmp_load_avg_15));
  if (raw_load_avg_15 != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_load_avg_15(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.proto.CpuLoad)
  return target;
}

::size_t CpuLoad::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.proto.CpuLoad)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float load_avg_1 = 1;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_1 = this->_internal_load_avg_1();
  ::uint32_t raw_load_avg_1;
  memcpy(&raw_load_avg_1, &tmp_load_avg_1, sizeof(tmp_load_avg_1));
  if (raw_load_avg_1 != 0) {
    total_size += 5;
  }

  // float load_avg_3 = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_3 = this->_internal_load_avg_3();
  ::uint32_t raw_load_avg_3;
  memcpy(&raw_load_avg_3, &tmp_load_avg_3, sizeof(tmp_load_avg_3));
  if (raw_load_avg_3 != 0) {
    total_size += 5;
  }

  // float load_avg_15 = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_15 = this->_internal_load_avg_15();
  ::uint32_t raw_load_avg_15;
  memcpy(&raw_load_avg_15, &tmp_load_avg_15, sizeof(tmp_load_avg_15));
  if (raw_load_avg_15 != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData CpuLoad::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    CpuLoad::MergeImpl
};
const ::google::protobuf::Message::ClassData*CpuLoad::GetClassData() const { return &_class_data_; }


void CpuLoad::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<CpuLoad*>(&to_msg);
  auto& from = static_cast<const CpuLoad&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:monitor.proto.CpuLoad)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_1 = from._internal_load_avg_1();
  ::uint32_t raw_load_avg_1;
  memcpy(&raw_load_avg_1, &tmp_load_avg_1, sizeof(tmp_load_avg_1));
  if (raw_load_avg_1 != 0) {
    _this->_internal_set_load_avg_1(from._internal_load_avg_1());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_3 = from._internal_load_avg_3();
  ::uint32_t raw_load_avg_3;
  memcpy(&raw_load_avg_3, &tmp_load_avg_3, sizeof(tmp_load_avg_3));
  if (raw_load_avg_3 != 0) {
    _this->_internal_set_load_avg_3(from._internal_load_avg_3());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_load_avg_15 = from._internal_load_avg_15();
  ::uint32_t raw_load_avg_15;
  memcpy(&raw_load_avg_15, &tmp_load_avg_15, sizeof(tmp_load_avg_15));
  if (raw_load_avg_15 != 0) {
    _this->_internal_set_load_avg_15(from._internal_load_avg_15());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CpuLoad::CopyFrom(const CpuLoad& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.proto.CpuLoad)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool CpuLoad::IsInitialized() const {
  return true;
}

void CpuLoad::InternalSwap(CpuLoad* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_15_)
      + sizeof(CpuLoad::_impl_.load_avg_15_)
      - PROTOBUF_FIELD_OFFSET(CpuLoad, _impl_.load_avg_1_)>(
          reinterpret_cast<char*>(&_impl_.load_avg_1_),
          reinterpret_cast<char*>(&other->_impl_.load_avg_1_));
}

::google::protobuf::Metadata CpuLoad::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cpu_5fload_2eproto_getter, &descriptor_table_cpu_5fload_2eproto_once,
      file_level_metadata_cpu_5fload_2eproto[0]);
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