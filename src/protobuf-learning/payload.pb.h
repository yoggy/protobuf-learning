// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: payload.proto

#ifndef PROTOBUF_payload_2eproto__INCLUDED
#define PROTOBUF_payload_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_payload_2eproto();
void protobuf_AssignDesc_payload_2eproto();
void protobuf_ShutdownFile_payload_2eproto();

class TestPoint;
class TestPolygon;
class TestImage;

// ===================================================================

class TestPoint : public ::google::protobuf::Message {
 public:
  TestPoint();
  virtual ~TestPoint();

  TestPoint(const TestPoint& from);

  inline TestPoint& operator=(const TestPoint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestPoint& default_instance();

  void Swap(TestPoint* other);

  // implements Message ----------------------------------------------

  TestPoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestPoint& from);
  void MergeFrom(const TestPoint& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TestPoint)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_payload_2eproto();
  friend void protobuf_AssignDesc_payload_2eproto();
  friend void protobuf_ShutdownFile_payload_2eproto();

  void InitAsDefaultInstance();
  static TestPoint* default_instance_;
};
// -------------------------------------------------------------------

class TestPolygon : public ::google::protobuf::Message {
 public:
  TestPolygon();
  virtual ~TestPolygon();

  TestPolygon(const TestPolygon& from);

  inline TestPolygon& operator=(const TestPolygon& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestPolygon& default_instance();

  void Swap(TestPolygon* other);

  // implements Message ----------------------------------------------

  TestPolygon* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestPolygon& from);
  void MergeFrom(const TestPolygon& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bool enable = 1;
  inline bool has_enable() const;
  inline void clear_enable();
  static const int kEnableFieldNumber = 1;
  inline bool enable() const;
  inline void set_enable(bool value);

  // repeated .TestPoint pts = 2;
  inline int pts_size() const;
  inline void clear_pts();
  static const int kPtsFieldNumber = 2;
  inline const ::TestPoint& pts(int index) const;
  inline ::TestPoint* mutable_pts(int index);
  inline ::TestPoint* add_pts();
  inline const ::google::protobuf::RepeatedPtrField< ::TestPoint >&
      pts() const;
  inline ::google::protobuf::RepeatedPtrField< ::TestPoint >*
      mutable_pts();

  // @@protoc_insertion_point(class_scope:TestPolygon)
 private:
  inline void set_has_enable();
  inline void clear_has_enable();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::TestPoint > pts_;
  bool enable_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_payload_2eproto();
  friend void protobuf_AssignDesc_payload_2eproto();
  friend void protobuf_ShutdownFile_payload_2eproto();

  void InitAsDefaultInstance();
  static TestPolygon* default_instance_;
};
// -------------------------------------------------------------------

class TestImage : public ::google::protobuf::Message {
 public:
  TestImage();
  virtual ~TestImage();

  TestImage(const TestImage& from);

  inline TestImage& operator=(const TestImage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestImage& default_instance();

  void Swap(TestImage* other);

  // implements Message ----------------------------------------------

  TestImage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestImage& from);
  void MergeFrom(const TestImage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string filename = 1;
  inline bool has_filename() const;
  inline void clear_filename();
  static const int kFilenameFieldNumber = 1;
  inline const ::std::string& filename() const;
  inline void set_filename(const ::std::string& value);
  inline void set_filename(const char* value);
  inline void set_filename(const char* value, size_t size);
  inline ::std::string* mutable_filename();
  inline ::std::string* release_filename();
  inline void set_allocated_filename(::std::string* filename);

  // required bytes jpeg = 2;
  inline bool has_jpeg() const;
  inline void clear_jpeg();
  static const int kJpegFieldNumber = 2;
  inline const ::std::string& jpeg() const;
  inline void set_jpeg(const ::std::string& value);
  inline void set_jpeg(const char* value);
  inline void set_jpeg(const void* value, size_t size);
  inline ::std::string* mutable_jpeg();
  inline ::std::string* release_jpeg();
  inline void set_allocated_jpeg(::std::string* jpeg);

  // @@protoc_insertion_point(class_scope:TestImage)
 private:
  inline void set_has_filename();
  inline void clear_has_filename();
  inline void set_has_jpeg();
  inline void clear_has_jpeg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* filename_;
  ::std::string* jpeg_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_payload_2eproto();
  friend void protobuf_AssignDesc_payload_2eproto();
  friend void protobuf_ShutdownFile_payload_2eproto();

  void InitAsDefaultInstance();
  static TestImage* default_instance_;
};
// ===================================================================


// ===================================================================

// TestPoint

// required int32 x = 1;
inline bool TestPoint::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestPoint::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestPoint::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestPoint::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 TestPoint::x() const {
  return x_;
}
inline void TestPoint::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 2;
inline bool TestPoint::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestPoint::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestPoint::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestPoint::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 TestPoint::y() const {
  return y_;
}
inline void TestPoint::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// -------------------------------------------------------------------

// TestPolygon

// required bool enable = 1;
inline bool TestPolygon::has_enable() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestPolygon::set_has_enable() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestPolygon::clear_has_enable() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestPolygon::clear_enable() {
  enable_ = false;
  clear_has_enable();
}
inline bool TestPolygon::enable() const {
  return enable_;
}
inline void TestPolygon::set_enable(bool value) {
  set_has_enable();
  enable_ = value;
}

// repeated .TestPoint pts = 2;
inline int TestPolygon::pts_size() const {
  return pts_.size();
}
inline void TestPolygon::clear_pts() {
  pts_.Clear();
}
inline const ::TestPoint& TestPolygon::pts(int index) const {
  return pts_.Get(index);
}
inline ::TestPoint* TestPolygon::mutable_pts(int index) {
  return pts_.Mutable(index);
}
inline ::TestPoint* TestPolygon::add_pts() {
  return pts_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TestPoint >&
TestPolygon::pts() const {
  return pts_;
}
inline ::google::protobuf::RepeatedPtrField< ::TestPoint >*
TestPolygon::mutable_pts() {
  return &pts_;
}

// -------------------------------------------------------------------

// TestImage

// required string filename = 1;
inline bool TestImage::has_filename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestImage::set_has_filename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestImage::clear_has_filename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestImage::clear_filename() {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    filename_->clear();
  }
  clear_has_filename();
}
inline const ::std::string& TestImage::filename() const {
  return *filename_;
}
inline void TestImage::set_filename(const ::std::string& value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
}
inline void TestImage::set_filename(const char* value) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(value);
}
inline void TestImage::set_filename(const char* value, size_t size) {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  filename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TestImage::mutable_filename() {
  set_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    filename_ = new ::std::string;
  }
  return filename_;
}
inline ::std::string* TestImage::release_filename() {
  clear_has_filename();
  if (filename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = filename_;
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TestImage::set_allocated_filename(::std::string* filename) {
  if (filename_ != &::google::protobuf::internal::kEmptyString) {
    delete filename_;
  }
  if (filename) {
    set_has_filename();
    filename_ = filename;
  } else {
    clear_has_filename();
    filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required bytes jpeg = 2;
inline bool TestImage::has_jpeg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestImage::set_has_jpeg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TestImage::clear_has_jpeg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TestImage::clear_jpeg() {
  if (jpeg_ != &::google::protobuf::internal::kEmptyString) {
    jpeg_->clear();
  }
  clear_has_jpeg();
}
inline const ::std::string& TestImage::jpeg() const {
  return *jpeg_;
}
inline void TestImage::set_jpeg(const ::std::string& value) {
  set_has_jpeg();
  if (jpeg_ == &::google::protobuf::internal::kEmptyString) {
    jpeg_ = new ::std::string;
  }
  jpeg_->assign(value);
}
inline void TestImage::set_jpeg(const char* value) {
  set_has_jpeg();
  if (jpeg_ == &::google::protobuf::internal::kEmptyString) {
    jpeg_ = new ::std::string;
  }
  jpeg_->assign(value);
}
inline void TestImage::set_jpeg(const void* value, size_t size) {
  set_has_jpeg();
  if (jpeg_ == &::google::protobuf::internal::kEmptyString) {
    jpeg_ = new ::std::string;
  }
  jpeg_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* TestImage::mutable_jpeg() {
  set_has_jpeg();
  if (jpeg_ == &::google::protobuf::internal::kEmptyString) {
    jpeg_ = new ::std::string;
  }
  return jpeg_;
}
inline ::std::string* TestImage::release_jpeg() {
  clear_has_jpeg();
  if (jpeg_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = jpeg_;
    jpeg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void TestImage::set_allocated_jpeg(::std::string* jpeg) {
  if (jpeg_ != &::google::protobuf::internal::kEmptyString) {
    delete jpeg_;
  }
  if (jpeg) {
    set_has_jpeg();
    jpeg_ = jpeg;
  } else {
    clear_has_jpeg();
    jpeg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_payload_2eproto__INCLUDED
