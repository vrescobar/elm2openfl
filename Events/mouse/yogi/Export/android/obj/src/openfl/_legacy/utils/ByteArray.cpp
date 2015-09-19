#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","new",0xe3818e62,"openfl._legacy.utils.ByteArray.new","openfl/_legacy/utils/ByteArray.hx",41,0x6d362251)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(43)
	this->bigEndian = true;
	HX_STACK_LINE(44)
	this->position = (int)0;
	HX_STACK_LINE(46)
	if (((size >= (int)0))){
		HX_STACK_LINE(60)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(62)
		if (((size > (int)0))){
			HX_STACK_LINE(64)
			data[(size - (int)1)] = (int)0;
		}
		HX_STACK_LINE(68)
		super::__construct(size,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_size);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::utils::IDataOutput_obj)) return operator ::openfl::_legacy::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IMemoryRange_obj)) return operator ::openfl::_legacy::utils::IMemoryRange_obj *();
	if (inType==typeid( ::openfl::_legacy::utils::IDataInput_obj)) return operator ::openfl::_legacy::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__init__",0x5474180e,"openfl._legacy.utils.ByteArray.__init__","openfl/_legacy/utils/ByteArray.hx",740,0x6d362251)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::openfl::_legacy::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/utils/ByteArray.hx",742,0x6d362251)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(742)
			return ::openfl::_legacy::utils::ByteArray_obj::__new(length);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(742)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::openfl::_legacy::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_legacy/utils/ByteArray.hx",743,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(745)
			if (((length > (int)0))){
				HX_STACK_LINE(747)
				bytes->__Field(HX_CSTRING("ensureElem"),true)((length - (int)1),true);
			}
			HX_STACK_LINE(751)
			bytes->__FieldRef(HX_CSTRING("length")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(743)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::openfl::_legacy::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/_legacy/utils/ByteArray.hx",755,0x6d362251)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(755)
			if (((bytes == null()))){
				HX_STACK_LINE(755)
				return null();
			}
			else{
				HX_STACK_LINE(755)
				return bytes->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(755)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(755)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::openfl::_legacy::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","openfl/_legacy/utils/ByteArray.hx",756,0x6d362251)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(756)
			if (((bytes1 == null()))){
				HX_STACK_LINE(756)
				return (int)0;
			}
			else{
				HX_STACK_LINE(756)
				return bytes1->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(756)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(756)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(758)
	Dynamic init = ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_init"),(int)4);		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(759)
	init(factory,slen,resize,bytes);
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","asString",0xb4fe6e21,"openfl._legacy.utils.ByteArray.asString","openfl/_legacy/utils/ByteArray.hx",79,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","ensureElem",0x8db597ab,"openfl._legacy.utils.ByteArray.ensureElem","openfl/_legacy/utils/ByteArray.hx",158,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(159)
		int len = (size + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(171)
		if (((this->b->length < len))){
			HX_STACK_LINE(173)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(178)
		if (((bool(updateLength) && bool((this->length < len))))){
			HX_STACK_LINE(180)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

::String ByteArray_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readUTFBytes",0xe6ce98f8,"openfl._legacy.utils.ByteArray.readUTFBytes","openfl/_legacy/utils/ByteArray.hx",418,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(420)
	if ((((this->position + length) > this->length))){
		HX_STACK_LINE(422)
		this->__throwEOFi();
	}
	HX_STACK_LINE(426)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(427)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(436)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(437)
	::__hxcpp_string_of_bytes(this->b,result,p,length);
	HX_STACK_LINE(438)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeBytes",0xc1e4e94a,"openfl._legacy.utils.ByteArray.writeBytes","openfl/_legacy/utils/ByteArray.hx",591,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(593)
		if (((length == (int)0))){
			HX_STACK_LINE(593)
			length = (bytes->length - offset);
		}
		HX_STACK_LINE(594)
		this->ensureElem(((this->position + length) - (int)1),true);
		HX_STACK_LINE(595)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(596)
		hx::AddEq(this->position,length);
		HX_STACK_LINE(597)
		this->blit(opos,bytes,offset,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","writeUTFBytes",0x6d3f8e45,"openfl._legacy.utils.ByteArray.writeUTFBytes","openfl/_legacy/utils/ByteArray.hx",702,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(707)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(710)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__get",0x4ac5a3f8,"openfl._legacy.utils.ByteArray.__get","openfl/_legacy/utils/ByteArray.hx",730,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(730)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__set",0x4acebf04,"openfl._legacy.utils.ByteArray.__set","openfl/_legacy/utils/ByteArray.hx",769,0x6d362251)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(769)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

int ByteArray_obj::__throwEOFi( ){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","__throwEOFi",0xc2bfa955,"openfl._legacy.utils.ByteArray.__throwEOFi","openfl/_legacy/utils/ByteArray.hx",777,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_LINE(779)
	HX_STACK_DO_THROW(::openfl::errors::EOFError_obj::__new());
	HX_STACK_LINE(780)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__throwEOFi,return )

::String ByteArray_obj::set_endian( ::String value){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","set_endian",0x5e188d16,"openfl._legacy.utils.ByteArray.set_endian","openfl/_legacy/utils/ByteArray.hx",795,0x6d362251)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(795)
	this->bigEndian = (value == HX_CSTRING("bigEndian"));
	HX_STACK_LINE(795)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::openfl::_legacy::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("openfl._legacy.utils.ByteArray","readFile",0x80abe3b0,"openfl._legacy.utils.ByteArray.readFile","openfl/_legacy/utils/ByteArray.hx",314,0x6d362251)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(314)
	return ::openfl::_legacy::utils::ByteArray_obj::lime_byte_array_read_file(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::lime_byte_array_read_file;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__throwEOFi") ) { return __throwEOFi_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { return lime_byte_array_read_file; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("position"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("readFile"),
	HX_CSTRING("lime_byte_array_read_file"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_CSTRING("bigEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bigEndian"),
	HX_CSTRING("position"),
	HX_CSTRING("asString"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("__throwEOFi"),
	HX_CSTRING("set_endian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ByteArray_obj::__boot()
{
	lime_byte_array_read_file= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_byte_array_read_file"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
