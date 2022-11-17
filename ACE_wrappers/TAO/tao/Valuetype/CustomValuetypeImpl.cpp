#include "tao/Valuetype/CustomValuetypeImpl.h"

namespace CORBA
{
  TAO_DataOutputStream::TAO_DataOutputStream (TAO_OutputCDR &cdr)
    : cdr_(cdr)
  {
  }

  TAO_DataOutputStream::~TAO_DataOutputStream ()
  {
  }

  void TAO_DataOutputStream::write_any (
     const ::CORBA::Any &value
   )
  {
    cdr_ << value;
  }

  void TAO_DataOutputStream::write_boolean (
     ::CORBA::Boolean value
   )
  {
    cdr_.write_boolean(value);
  }

  void TAO_DataOutputStream::write_char (
     ::CORBA::Char value
   )
  {
    cdr_.write_char(value);
  }

  void TAO_DataOutputStream::write_wchar (
     ::CORBA::WChar value
   )
  {
    cdr_.write_wchar(value);
  }

  void TAO_DataOutputStream::write_octet (
     ::CORBA::Octet value
   )
  {
    cdr_.write_octet (value);
  }

  void TAO_DataOutputStream::write_short (
     ::CORBA::Short value
   )
  {
    cdr_.write_short (value);
  }

  void TAO_DataOutputStream::write_ushort (
     ::CORBA::UShort value
   )
  {
    cdr_.write_ushort (value);
  }

  void TAO_DataOutputStream::write_long (
     ::CORBA::Long value
   )
  {
    cdr_.write_long (value);
  }

  void TAO_DataOutputStream::write_ulong (
     ::CORBA::ULong value
   )
  {
    cdr_.write_ulong (value);
  }

  void TAO_DataOutputStream::write_longlong (
     ::CORBA::LongLong value
   )
  {
    cdr_.write_longlong (value);
  }

  void TAO_DataOutputStream::write_ulonglong (
     ::CORBA::ULongLong value
   )
  {
    cdr_.write_ulonglong (value);
  }

  void TAO_DataOutputStream::write_float (
     ::CORBA::Float value
   )
  {
    cdr_.write_float (value);
  }

  void TAO_DataOutputStream::write_double (
     ::CORBA::Double value
   )
  {
    cdr_.write_double (value);
  }

  void TAO_DataOutputStream::write_longdouble (
     ::CORBA::LongDouble value
   )
  {
    cdr_.write_longdouble (value);
  }

  void TAO_DataOutputStream::write_string (
     const char *value
   )
  {
    cdr_.write_string (value);
  }

  void TAO_DataOutputStream::write_wstring (
     const ::CORBA::WChar *value
   )
  {
    cdr_.write_wstring (value);
  }

  void TAO_DataOutputStream::write_Object (
     ::CORBA::Object_ptr ptr
   )
  {
    cdr_ << ptr;
  }

  void TAO_DataOutputStream::write_Abstract (
     ::CORBA::AbstractBase_ptr ptr
   )
  {
    cdr_ << ptr;
  }

  void TAO_DataOutputStream::write_Value (
     ::CORBA::ValueBase *ptr
   )
  {
    cdr_ << ptr;
  }

  void TAO_DataOutputStream::write_TypeCode (
     ::CORBA::TypeCode_ptr ptr
   )
  {
    cdr_ << ptr;
  }

  void TAO_DataOutputStream::write_any_array (
     const ::CORBA::AnySeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    while (length--)
      {
        cdr_ << value[offset++];
      }
  }

  void TAO_DataOutputStream::write_boolean_array (
     const ::CORBA::BooleanSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_boolean_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_char_array (
     const ::CORBA::CharSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_char_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_wchar_array (
     const ::CORBA::WCharSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_wchar_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_octet_array (
     const ::CORBA::OctetSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_octet_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_short_array (
     const ::CORBA::ShortSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_short_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_ushort_array (
     const ::CORBA::UShortSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_ushort_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_long_array (
     const ::CORBA::LongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_long_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_ulong_array (
     const ::CORBA::ULongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_ulong_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_ulonglong_array (
     const ::CORBA::ULongLongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_ulonglong_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_longlong_array (
     const ::CORBA::LongLongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_longlong_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_float_array (
     const ::CORBA::FloatSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_float_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_double_array (
     const ::CORBA::DoubleSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_double_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_long_double_array (
     const ::CORBA::LongDoubleSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.write_longdouble_array (&value[offset], length);
      }
  }

  void TAO_DataOutputStream::write_fixed (
     const ::CORBA::Any &value
   )
  {
    cdr_ << value;
  }

  void TAO_DataOutputStream::write_fixed_array (
     const ::CORBA::AnySeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    while (length--)
      {
        cdr_ << value[offset++];
      }
  }

  CORBA::ValueBase* TAO_DataOutputStream::_copy_value (void)
  {
    return 0;
  }

  CORBA::Boolean TAO_DataOutputStream::_tao_marshal_v (TAO_OutputCDR &) const
  {
    return false;
  }

  CORBA::Boolean TAO_DataOutputStream::_tao_unmarshal_v (TAO_InputCDR &)
  {
    return false;
  }

  CORBA::Boolean TAO_DataOutputStream::_tao_match_formal_type (ptrdiff_t ) const
  {
    return false;
  }


  TAO_DataInputStream::TAO_DataInputStream (TAO_InputCDR &cdr)
    : cdr_(cdr)
  {
  }

  TAO_DataInputStream::~TAO_DataInputStream ()
  {
  }

  ::CORBA::Any * TAO_DataInputStream::read_any (void)
  {
    ::CORBA::Any_var value;
    ACE_NEW_RETURN (value, Any, 0);
    cdr_ >> *value;
    return value._retn();
  }

  ::CORBA::Boolean TAO_DataInputStream::read_boolean (void)
  {
    ::CORBA::Boolean value;
    cdr_.read_boolean(value);
    return value;
  }

  ::CORBA::Char TAO_DataInputStream::read_char (void)
  {
    ::CORBA::Char value;
    cdr_.read_char(value);
    return value;
  }

  ::CORBA::WChar TAO_DataInputStream::read_wchar (void)
  {
    ::CORBA::WChar value;
    cdr_.read_wchar(value);
    return value;
  }

  ::CORBA::Octet TAO_DataInputStream::read_octet (void)
  {
    ::CORBA::Octet value;
    cdr_.read_octet(value);
    return value;
  }

  ::CORBA::Short TAO_DataInputStream::read_short (void)
  {
    ::CORBA::Short value;
    cdr_.read_short(value);
    return value;
  }

  ::CORBA::UShort TAO_DataInputStream::read_ushort (void)
  {
    ::CORBA::UShort value;
    cdr_.read_ushort(value);
    return value;
  }

  ::CORBA::Long TAO_DataInputStream::read_long (void)
  {
    ::CORBA::Long value;
    cdr_.read_long(value);
    return value;
  }

  ::CORBA::ULong TAO_DataInputStream::read_ulong (void)
  {
    ::CORBA::ULong value;
    cdr_.read_ulong(value);
    return value;
  }

  ::CORBA::LongLong TAO_DataInputStream::read_longlong (void)
  {
    ::CORBA::LongLong value;
    cdr_.read_longlong(value);
    return value;
  }

  ::CORBA::ULongLong TAO_DataInputStream::read_ulonglong (void)
  {
    ::CORBA::ULongLong value;
    cdr_.read_ulonglong(value);
    return value;
  }

  ::CORBA::Float TAO_DataInputStream::read_float (void)
  {
    ::CORBA::Float value;
    cdr_.read_float(value);
    return value;
  }

  ::CORBA::Double TAO_DataInputStream::read_double (void)
  {
    ::CORBA::Double value;
    cdr_.read_double(value);
    return value;
  }

  ::CORBA::LongDouble TAO_DataInputStream::read_longdouble (void)
  {
    ::CORBA::LongDouble value;
    cdr_.read_longdouble(value);
    return value;
  }

  char * TAO_DataInputStream::read_string (void)
  {
    ::CORBA::Char* value;
    cdr_.read_string(value);
    return value;
  }

  ::CORBA::WChar * TAO_DataInputStream::read_wstring (void)
  {
    ::CORBA::WChar* value;
    cdr_.read_wstring(value);
    return value;
  }

  ::CORBA::Object_ptr TAO_DataInputStream::read_Object (void)
  {
    ::CORBA::Object_ptr ptr;
    cdr_ >> ptr;
    return ptr;
  }

  ::CORBA::AbstractBase_ptr TAO_DataInputStream::read_Abstract (void)
  {
    ::CORBA::AbstractBase_ptr ptr;
    cdr_ >> ptr;
    return ptr;
  }

  ::CORBA::ValueBase * TAO_DataInputStream::read_Value (void)
  {
    ::CORBA::ValueBase *ptr;
    cdr_ >> ptr;
    return ptr;
  }

  ::CORBA::TypeCode_ptr TAO_DataInputStream::read_TypeCode (void)
  {
    ::CORBA::TypeCode_ptr ptr;
    cdr_ >> ptr;
    return ptr;
  }

  void TAO_DataInputStream::read_any_array (
     ::CORBA::AnySeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    while (length--)
      {
        cdr_ >> value[offset++];
      }
  }

  void TAO_DataInputStream::read_boolean_array (
     ::CORBA::BooleanSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_boolean_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_char_array (
     ::CORBA::CharSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_char_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_wchar_array (
     ::CORBA::WCharSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_wchar_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_octet_array (
     ::CORBA::OctetSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_octet_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_short_array (
     ::CORBA::ShortSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_short_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_ushort_array (
     ::CORBA::UShortSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_ushort_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_long_array (
     ::CORBA::LongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_long_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_ulong_array (
     ::CORBA::ULongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_ulong_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_ulonglong_array (
     ::CORBA::ULongLongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_ulonglong_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_longlong_array (
     ::CORBA::LongLongSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_longlong_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_float_array (
     ::CORBA::FloatSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_float_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_double_array (
     ::CORBA::DoubleSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_double_array(&value[offset], length);
      }
  }

  void TAO_DataInputStream::read_long_double_array (
     ::CORBA::LongDoubleSeq &value, ::CORBA::ULong offset, ::CORBA::ULong length
   )
  {
    if (length)
      {
        cdr_.read_longdouble_array(&value[offset], length);
      }
  }

  ::CORBA::Any * TAO_DataInputStream::read_fixed (
     ::CORBA::UShort, ::CORBA::Short
   )
  {
    ::CORBA::Any_var value;
    ACE_NEW_RETURN (value, Any, 0);
    cdr_ >> *value;
    return value._retn();
  }

  void TAO_DataInputStream::read_fixed_array (
     ::CORBA::AnySeq &value, ::CORBA::ULong offset, ::CORBA::ULong length, ::CORBA::UShort, ::CORBA::Short
   )
  {
    while (length--)
      {
        cdr_ >> value[offset++];
      }
  }

  CORBA::ValueBase* TAO_DataInputStream::_copy_value (void)
  {
    return 0;
  }

  CORBA::Boolean TAO_DataInputStream::_tao_marshal_v (TAO_OutputCDR &) const
  {
    return false;
  }

  CORBA::Boolean TAO_DataInputStream::_tao_unmarshal_v (TAO_InputCDR &)
  {
    return false;
  }

  CORBA::Boolean TAO_DataInputStream::_tao_match_formal_type (ptrdiff_t ) const
  {
    return false;
  }
};
