// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/protobuf/ProtoDef.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "src/protobuf/ProtoDef.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProtoDef {
class RpcPoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<RpcPo> {
} _RpcPo_default_instance_;

namespace protobuf_src_2fprotobuf_2fProtoDef_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcPo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcPo, rpc_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcPo, anypo_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(RpcPo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_RpcPo_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "src/protobuf/ProtoDef.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _RpcPo_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _RpcPo_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\033src/protobuf/ProtoDef.proto\022\010ProtoDef\""
      "#\n\005RpcPo\022\013\n\003rpc\030\001 \001(\t\022\r\n\005anyPo\030\002 \001(\014b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 84);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "src/protobuf/ProtoDef.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_src_2fprotobuf_2fProtoDef_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcPo::kRpcFieldNumber;
const int RpcPo::kAnyPoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcPo::RpcPo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_src_2fprotobuf_2fProtoDef_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoDef.RpcPo)
}
RpcPo::RpcPo(const RpcPo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  rpc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.rpc().size() > 0) {
    rpc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rpc_);
  }
  anypo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.anypo().size() > 0) {
    anypo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.anypo_);
  }
  // @@protoc_insertion_point(copy_constructor:ProtoDef.RpcPo)
}

void RpcPo::SharedCtor() {
  rpc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  anypo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

RpcPo::~RpcPo() {
  // @@protoc_insertion_point(destructor:ProtoDef.RpcPo)
  SharedDtor();
}

void RpcPo::SharedDtor() {
  rpc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  anypo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RpcPo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcPo::descriptor() {
  protobuf_src_2fprotobuf_2fProtoDef_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_src_2fprotobuf_2fProtoDef_2eproto::file_level_metadata[0].descriptor;
}

const RpcPo& RpcPo::default_instance() {
  protobuf_src_2fprotobuf_2fProtoDef_2eproto::InitDefaults();
  return *internal_default_instance();
}

RpcPo* RpcPo::New(::google::protobuf::Arena* arena) const {
  RpcPo* n = new RpcPo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcPo::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoDef.RpcPo)
  rpc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  anypo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool RpcPo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoDef.RpcPo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string rpc = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_rpc()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->rpc().data(), this->rpc().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ProtoDef.RpcPo.rpc"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes anyPo = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_anypo()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtoDef.RpcPo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoDef.RpcPo)
  return false;
#undef DO_
}

void RpcPo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoDef.RpcPo)
  // string rpc = 1;
  if (this->rpc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rpc().data(), this->rpc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoDef.RpcPo.rpc");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->rpc(), output);
  }

  // bytes anyPo = 2;
  if (this->anypo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->anypo(), output);
  }

  // @@protoc_insertion_point(serialize_end:ProtoDef.RpcPo)
}

::google::protobuf::uint8* RpcPo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoDef.RpcPo)
  // string rpc = 1;
  if (this->rpc().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->rpc().data(), this->rpc().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ProtoDef.RpcPo.rpc");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->rpc(), target);
  }

  // bytes anyPo = 2;
  if (this->anypo().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->anypo(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ProtoDef.RpcPo)
  return target;
}

size_t RpcPo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoDef.RpcPo)
  size_t total_size = 0;

  // string rpc = 1;
  if (this->rpc().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->rpc());
  }

  // bytes anyPo = 2;
  if (this->anypo().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->anypo());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcPo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoDef.RpcPo)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcPo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcPo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoDef.RpcPo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoDef.RpcPo)
    MergeFrom(*source);
  }
}

void RpcPo::MergeFrom(const RpcPo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoDef.RpcPo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.rpc().size() > 0) {

    rpc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rpc_);
  }
  if (from.anypo().size() > 0) {

    anypo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.anypo_);
  }
}

void RpcPo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoDef.RpcPo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcPo::CopyFrom(const RpcPo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoDef.RpcPo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcPo::IsInitialized() const {
  return true;
}

void RpcPo::Swap(RpcPo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcPo::InternalSwap(RpcPo* other) {
  rpc_.Swap(&other->rpc_);
  anypo_.Swap(&other->anypo_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RpcPo::GetMetadata() const {
  protobuf_src_2fprotobuf_2fProtoDef_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_src_2fprotobuf_2fProtoDef_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcPo

// string rpc = 1;
void RpcPo::clear_rpc() {
  rpc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& RpcPo::rpc() const {
  // @@protoc_insertion_point(field_get:ProtoDef.RpcPo.rpc)
  return rpc_.GetNoArena();
}
void RpcPo::set_rpc(const ::std::string& value) {
  
  rpc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoDef.RpcPo.rpc)
}
#if LANG_CXX11
void RpcPo::set_rpc(::std::string&& value) {
  
  rpc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoDef.RpcPo.rpc)
}
#endif
void RpcPo::set_rpc(const char* value) {
  
  rpc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoDef.RpcPo.rpc)
}
void RpcPo::set_rpc(const char* value, size_t size) {
  
  rpc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoDef.RpcPo.rpc)
}
::std::string* RpcPo::mutable_rpc() {
  
  // @@protoc_insertion_point(field_mutable:ProtoDef.RpcPo.rpc)
  return rpc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RpcPo::release_rpc() {
  // @@protoc_insertion_point(field_release:ProtoDef.RpcPo.rpc)
  
  return rpc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RpcPo::set_allocated_rpc(::std::string* rpc) {
  if (rpc != NULL) {
    
  } else {
    
  }
  rpc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rpc);
  // @@protoc_insertion_point(field_set_allocated:ProtoDef.RpcPo.rpc)
}

// bytes anyPo = 2;
void RpcPo::clear_anypo() {
  anypo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& RpcPo::anypo() const {
  // @@protoc_insertion_point(field_get:ProtoDef.RpcPo.anyPo)
  return anypo_.GetNoArena();
}
void RpcPo::set_anypo(const ::std::string& value) {
  
  anypo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoDef.RpcPo.anyPo)
}
#if LANG_CXX11
void RpcPo::set_anypo(::std::string&& value) {
  
  anypo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoDef.RpcPo.anyPo)
}
#endif
void RpcPo::set_anypo(const char* value) {
  
  anypo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoDef.RpcPo.anyPo)
}
void RpcPo::set_anypo(const void* value, size_t size) {
  
  anypo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoDef.RpcPo.anyPo)
}
::std::string* RpcPo::mutable_anypo() {
  
  // @@protoc_insertion_point(field_mutable:ProtoDef.RpcPo.anyPo)
  return anypo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* RpcPo::release_anypo() {
  // @@protoc_insertion_point(field_release:ProtoDef.RpcPo.anyPo)
  
  return anypo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void RpcPo::set_allocated_anypo(::std::string* anypo) {
  if (anypo != NULL) {
    
  } else {
    
  }
  anypo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), anypo);
  // @@protoc_insertion_point(field_set_allocated:ProtoDef.RpcPo.anyPo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoDef

// @@protoc_insertion_point(global_scope)
