#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#define INCLUDED_openfl__legacy_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Bytes.h>
#include <openfl/_legacy/utils/IDataOutput.h>
#include <openfl/_legacy/utils/IMemoryRange.h>
#include <openfl/_legacy/utils/IDataInput.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,_legacy,Lib)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::openfl::_legacy::utils::IDataOutput_obj *()
			{ return new ::openfl::_legacy::utils::IDataOutput_delegate_< ByteArray_obj >(this); }
		inline operator ::openfl::_legacy::utils::IMemoryRange_obj *()
			{ return new ::openfl::_legacy::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
		inline operator ::openfl::_legacy::utils::IDataInput_obj *()
			{ return new ::openfl::_legacy::utils::IDataInput_delegate_< ByteArray_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		static void __init__();

		::String __ToString() const { return HX_CSTRING("ByteArray"); }

		typedef int __array_access;
		bool bigEndian;
		int position;
		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void ensureElem( int size,bool updateLength);
		Dynamic ensureElem_dyn();

		virtual ::String readUTFBytes( int length);
		Dynamic readUTFBytes_dyn();

		virtual Void writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  offset,hx::Null< int >  length);
		Dynamic writeBytes_dyn();

		virtual Void writeUTFBytes( ::String s);
		Dynamic writeUTFBytes_dyn();

		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual int __throwEOFi( );
		Dynamic __throwEOFi_dyn();

		virtual ::String set_endian( ::String value);
		Dynamic set_endian_dyn();

		static ::openfl::_legacy::utils::ByteArray readFile( ::String path);
		static Dynamic readFile_dyn();

		static Dynamic lime_byte_array_read_file;
		static Dynamic &lime_byte_array_read_file_dyn() { return lime_byte_array_read_file;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_ByteArray */ 
