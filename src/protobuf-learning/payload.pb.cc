// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: payload.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "payload.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* TestPoint_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestPoint_reflection_ = NULL;
const ::google::protobuf::Descriptor* TestPolygon_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestPolygon_reflection_ = NULL;
const ::google::protobuf::Descriptor* TestImage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestImage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_payload_2eproto() {
  protobuf_AddDesc_payload_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "payload.proto");
  GOOGLE_CHECK(file != NULL);
  TestPoint_descriptor_ = file->message_type(0);
  static const int TestPoint_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPoint, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPoint, y_),
  };
  TestPoint_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestPoint_descriptor_,
      TestPoint::default_instance_,
      TestPoint_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPoint, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPoint, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestPoint));
  TestPolygon_descriptor_ = file->message_type(1);
  static const int TestPolygon_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPolygon, enable_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPolygon, pts_),
  };
  TestPolygon_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestPolygon_descriptor_,
      TestPolygon::default_instance_,
      TestPolygon_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPolygon, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestPolygon, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestPolygon));
  TestImage_descriptor_ = file->message_type(2);
  static const int TestImage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestImage, filename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestImage, jpeg_),
  };
  TestImage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestImage_descriptor_,
      TestImage::default_instance_,
      TestImage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestImage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestImage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestImage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_payload_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestPoint_descriptor_, &TestPoint::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestPolygon_descriptor_, &TestPolygon::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestImage_descriptor_, &TestImage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_payload_2eproto() {
  delete TestPoint::default_instance_;
  delete TestPoint_reflection_;
  delete TestPolygon::default_instance_;
  delete TestPolygon_reflection_;
  delete TestImage::default_instance_;
  delete TestImage_reflection_;
}

void protobuf_AddDesc_payload_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rpayload.proto\"!\n\tTestPoint\022\t\n\001x\030\001 \002(\005\022"
    "\t\n\001y\030\002 \002(\005\"6\n\013TestPolygon\022\016\n\006enable\030\001 \002("
    "\010\022\027\n\003pts\030\002 \003(\0132\n.TestPoint\"+\n\tTestImage\022"
    "\020\n\010filename\030\001 \002(\t\022\014\n\004jpeg\030\002 \002(\014", 151);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "payload.proto", &protobuf_RegisterTypes);
  TestPoint::default_instance_ = new TestPoint();
  TestPolygon::default_instance_ = new TestPolygon();
  TestImage::default_instance_ = new TestImage();
  TestPoint::default_instance_->InitAsDefaultInstance();
  TestPolygon::default_instance_->InitAsDefaultInstance();
  TestImage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_payload_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_payload_2eproto {
  StaticDescriptorInitializer_payload_2eproto() {
    protobuf_AddDesc_payload_2eproto();
  }
} static_descriptor_initializer_payload_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TestPoint::kXFieldNumber;
const int TestPoint::kYFieldNumber;
#endif  // !_MSC_VER

TestPoint::TestPoint()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TestPoint::InitAsDefaultInstance() {
}

TestPoint::TestPoint(const TestPoint& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TestPoint::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestPoint::~TestPoint() {
  SharedDtor();
}

void TestPoint::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TestPoint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestPoint::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestPoint_descriptor_;
}

const TestPoint& TestPoint::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_payload_2eproto();
  return *default_instance_;
}

TestPoint* TestPoint::default_instance_ = NULL;

TestPoint* TestPoint::New() const {
  return new TestPoint;
}

void TestPoint::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestPoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_y;
        break;
      }

      // required int32 y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TestPoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->x(), output);
  }

  // required int32 y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->y(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TestPoint::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->x(), target);
  }

  // required int32 y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->y(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TestPoint::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 x = 1;
    if (has_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->x());
    }

    // required int32 y = 2;
    if (has_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->y());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestPoint::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestPoint* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestPoint*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestPoint::MergeFrom(const TestPoint& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestPoint::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestPoint::CopyFrom(const TestPoint& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestPoint::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TestPoint::Swap(TestPoint* other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestPoint::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestPoint_descriptor_;
  metadata.reflection = TestPoint_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TestPolygon::kEnableFieldNumber;
const int TestPolygon::kPtsFieldNumber;
#endif  // !_MSC_VER

TestPolygon::TestPolygon()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TestPolygon::InitAsDefaultInstance() {
}

TestPolygon::TestPolygon(const TestPolygon& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TestPolygon::SharedCtor() {
  _cached_size_ = 0;
  enable_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestPolygon::~TestPolygon() {
  SharedDtor();
}

void TestPolygon::SharedDtor() {
  if (this != default_instance_) {
  }
}

void TestPolygon::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestPolygon::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestPolygon_descriptor_;
}

const TestPolygon& TestPolygon::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_payload_2eproto();
  return *default_instance_;
}

TestPolygon* TestPolygon::default_instance_ = NULL;

TestPolygon* TestPolygon::New() const {
  return new TestPolygon;
}

void TestPolygon::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    enable_ = false;
  }
  pts_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestPolygon::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool enable = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &enable_)));
          set_has_enable();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_pts;
        break;
      }

      // repeated .TestPoint pts = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pts:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pts()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_pts;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TestPolygon::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool enable = 1;
  if (has_enable()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->enable(), output);
  }

  // repeated .TestPoint pts = 2;
  for (int i = 0; i < this->pts_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pts(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TestPolygon::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required bool enable = 1;
  if (has_enable()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->enable(), target);
  }

  // repeated .TestPoint pts = 2;
  for (int i = 0; i < this->pts_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->pts(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TestPolygon::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool enable = 1;
    if (has_enable()) {
      total_size += 1 + 1;
    }

  }
  // repeated .TestPoint pts = 2;
  total_size += 1 * this->pts_size();
  for (int i = 0; i < this->pts_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pts(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestPolygon::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestPolygon* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestPolygon*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestPolygon::MergeFrom(const TestPolygon& from) {
  GOOGLE_CHECK_NE(&from, this);
  pts_.MergeFrom(from.pts_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_enable()) {
      set_enable(from.enable());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestPolygon::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestPolygon::CopyFrom(const TestPolygon& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestPolygon::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < pts_size(); i++) {
    if (!this->pts(i).IsInitialized()) return false;
  }
  return true;
}

void TestPolygon::Swap(TestPolygon* other) {
  if (other != this) {
    std::swap(enable_, other->enable_);
    pts_.Swap(&other->pts_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestPolygon::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestPolygon_descriptor_;
  metadata.reflection = TestPolygon_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TestImage::kFilenameFieldNumber;
const int TestImage::kJpegFieldNumber;
#endif  // !_MSC_VER

TestImage::TestImage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TestImage::InitAsDefaultInstance() {
}

TestImage::TestImage(const TestImage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TestImage::SharedCtor() {
  _cached_size_ = 0;
  filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  jpeg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestImage::~TestImage() {
  SharedDtor();
}

void TestImage::SharedDtor() {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    delete filename_;
  }
  if (jpeg_ != &::google::protobuf::internal::kEmptyString) {
    delete jpeg_;
  }
  if (this != default_instance_) {
  }
}

void TestImage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestImage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestImage_descriptor_;
}

const TestImage& TestImage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_payload_2eproto();
  return *default_instance_;
}

TestImage* TestImage::default_instance_ = NULL;

TestImage* TestImage::New() const {
  return new TestImage;
}

void TestImage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_filename()) {
      if (filename_ != &::google::protobuf::internal::kEmptyString) {
        filename_->clear();
      }
    }
    if (has_jpeg()) {
      if (jpeg_ != &::google::protobuf::internal::kEmptyString) {
        jpeg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestImage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string filename = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_filename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->filename().data(), this->filename().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_jpeg;
        break;
      }

      // required bytes jpeg = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_jpeg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_jpeg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TestImage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string filename = 1;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->filename(), output);
  }

  // required bytes jpeg = 2;
  if (has_jpeg()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->jpeg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TestImage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string filename = 1;
  if (has_filename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->filename().data(), this->filename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->filename(), target);
  }

  // required bytes jpeg = 2;
  if (has_jpeg()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->jpeg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TestImage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string filename = 1;
    if (has_filename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->filename());
    }

    // required bytes jpeg = 2;
    if (has_jpeg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->jpeg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestImage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestImage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestImage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestImage::MergeFrom(const TestImage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_filename()) {
      set_filename(from.filename());
    }
    if (from.has_jpeg()) {
      set_jpeg(from.jpeg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestImage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestImage::CopyFrom(const TestImage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestImage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TestImage::Swap(TestImage* other) {
  if (other != this) {
    std::swap(filename_, other->filename_);
    std::swap(jpeg_, other->jpeg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestImage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestImage_descriptor_;
  metadata.reflection = TestImage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
