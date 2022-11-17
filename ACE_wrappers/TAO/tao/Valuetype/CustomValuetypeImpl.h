#ifndef TAO_CORBA_CUSTOM_VALUETYPE_H
#define TAO_CORBA_CUSTOM_VALUETYPE_H

#include "tao/Valuetype/CustomValuetypeC.h"


namespace CORBA
{
  class TAO_Valuetype_Export TAO_DataOutputStream :
    public virtual ::CORBA::DataOutputStream,
    public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    explicit
    TAO_DataOutputStream (TAO_OutputCDR &cdr);

    virtual void write_any (
        const ::CORBA::Any &
      );

    virtual void write_boolean (
        ::CORBA::Boolean
      );

    virtual void write_char (
        ::CORBA::Char
      );

    virtual void write_wchar (
        ::CORBA::WChar
      );

    virtual void write_octet (
        ::CORBA::Octet
      );

    virtual void write_short (
        ::CORBA::Short
      );

    virtual void write_ushort (
        ::CORBA::UShort
      );

    virtual void write_long (
        ::CORBA::Long
      );

    virtual void write_ulong (
        ::CORBA::ULong
      );

    virtual void write_longlong (
        ::CORBA::LongLong
      );

    virtual void write_ulonglong (
        ::CORBA::ULongLong
      );

    virtual void write_float (
        ::CORBA::Float
      );

    virtual void write_double (
        ::CORBA::Double
      );

    virtual void write_longdouble (
        ::CORBA::LongDouble
      );

    virtual void write_string (
        const char *
      );

    virtual void write_wstring (
        const ::CORBA::WChar *
      );

    virtual void write_Object (
        ::CORBA::Object_ptr
      );

    virtual void write_Abstract (
        ::CORBA::AbstractBase_ptr
      );

    virtual void write_Value (
        ::CORBA::ValueBase *
      );

    virtual void write_TypeCode (
        ::CORBA::TypeCode_ptr
      );

    virtual void write_any_array (
        const ::CORBA::AnySeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_boolean_array (
        const ::CORBA::BooleanSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_char_array (
        const ::CORBA::CharSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_wchar_array (
        const ::CORBA::WCharSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_octet_array (
        const ::CORBA::OctetSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_short_array (
        const ::CORBA::ShortSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_ushort_array (
        const ::CORBA::UShortSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_long_array (
        const ::CORBA::LongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_ulong_array (
        const ::CORBA::ULongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_ulonglong_array (
        const ::CORBA::ULongLongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_longlong_array (
        const ::CORBA::LongLongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_float_array (
        const ::CORBA::FloatSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_double_array (
        const ::CORBA::DoubleSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_long_double_array (
        const ::CORBA::LongDoubleSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void write_fixed (
        const ::CORBA::Any &
      );

    virtual void write_fixed_array (
        const ::CORBA::AnySeq &, ::CORBA::ULong, ::CORBA::ULong
      );

  protected:
    virtual ~TAO_DataOutputStream (void);

  public:
    virtual CORBA::ValueBase* _copy_value (void);

    virtual CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;

    virtual CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);

  protected:
    virtual CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;

  protected:
    TAO_OutputCDR& cdr_;
  };

  class TAO_Valuetype_Export TAO_DataInputStream :
    public virtual ::CORBA::DataInputStream,
    public virtual ::CORBA::DefaultValueRefCountBase
  {
  public:
    explicit
    TAO_DataInputStream (TAO_InputCDR &cdr);

    virtual ::CORBA::Any * read_any (void);

    virtual ::CORBA::Boolean read_boolean (void);

    virtual ::CORBA::Char read_char (void);

    virtual ::CORBA::WChar read_wchar (void);

    virtual ::CORBA::Octet read_octet (void);

    virtual ::CORBA::Short read_short (void);

    virtual ::CORBA::UShort read_ushort (void);

    virtual ::CORBA::Long read_long (void);

    virtual ::CORBA::ULong read_ulong (void);

    virtual ::CORBA::LongLong read_longlong (void);

    virtual ::CORBA::ULongLong read_ulonglong (void);

    virtual ::CORBA::Float read_float (void);

    virtual ::CORBA::Double read_double (void);

    virtual ::CORBA::LongDouble read_longdouble (void);

    virtual char * read_string (void);

    virtual ::CORBA::WChar * read_wstring (void);

    virtual ::CORBA::Object_ptr read_Object (void);

    virtual ::CORBA::AbstractBase_ptr read_Abstract (void);

    virtual ::CORBA::ValueBase * read_Value (void);

    virtual ::CORBA::TypeCode_ptr read_TypeCode (void);

    virtual void read_any_array (
        ::CORBA::AnySeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_boolean_array (
        ::CORBA::BooleanSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_char_array (
        ::CORBA::CharSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_wchar_array (
        ::CORBA::WCharSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_octet_array (
        ::CORBA::OctetSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_short_array (
        ::CORBA::ShortSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_ushort_array (
        ::CORBA::UShortSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_long_array (
        ::CORBA::LongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_ulong_array (
        ::CORBA::ULongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_ulonglong_array (
        ::CORBA::ULongLongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_longlong_array (
        ::CORBA::LongLongSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_float_array (
        ::CORBA::FloatSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_double_array (
        ::CORBA::DoubleSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual void read_long_double_array (
        ::CORBA::LongDoubleSeq &, ::CORBA::ULong, ::CORBA::ULong
      );

    virtual ::CORBA::Any * read_fixed (
        ::CORBA::UShort, ::CORBA::Short
      );

    virtual void read_fixed_array (
        ::CORBA::AnySeq &, ::CORBA::ULong, ::CORBA::ULong, ::CORBA::UShort, ::CORBA::Short
      );

  protected:
    virtual ~TAO_DataInputStream (void);

  public:
    virtual CORBA::ValueBase* _copy_value (void);

    virtual CORBA::Boolean _tao_marshal_v (TAO_OutputCDR &) const;

    virtual CORBA::Boolean _tao_unmarshal_v (TAO_InputCDR &);

  protected:
    virtual CORBA::Boolean _tao_match_formal_type (ptrdiff_t ) const;

  protected:
    TAO_InputCDR& cdr_;
  };
};

#endif
