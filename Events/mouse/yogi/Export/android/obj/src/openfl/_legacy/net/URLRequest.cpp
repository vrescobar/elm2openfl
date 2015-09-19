#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
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
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void URLRequest_obj::__construct()
{
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new()
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct();
	return result;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > result = new URLRequest_obj();
	result->__construct();
	return result;}

Void URLRequest_obj::__prepare( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLRequest","__prepare",0xdd9f87ce,"openfl._legacy.net.URLRequest.__prepare","openfl/_legacy/net/URLRequest.hx",71,0xc5bb36e6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((this->userAgent == null()))){
			HX_STACK_LINE(75)
			this->userAgent = HX_CSTRING("");
		}
		HX_STACK_LINE(79)
		if (((this->data == null()))){
			HX_STACK_LINE(81)
			::openfl::_legacy::utils::ByteArray _g = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			this->__bytes = _g;
		}
		else{
			HX_STACK_LINE(83)
			if ((::Std_obj::is(this->data,hx::ClassOf< ::openfl::_legacy::utils::ByteArray >()))){
				HX_STACK_LINE(85)
				this->__bytes = this->data;
			}
			else{
				HX_STACK_LINE(87)
				if ((::Std_obj::is(this->data,hx::ClassOf< ::openfl::net::URLVariables >()))){
					HX_STACK_LINE(89)
					::openfl::net::URLVariables vars = this->data;		HX_STACK_VAR(vars,"vars");
					HX_STACK_LINE(90)
					::String str = vars->toString();		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(91)
					::openfl::_legacy::utils::ByteArray _g1 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(91)
					this->__bytes = _g1;
					HX_STACK_LINE(92)
					this->__bytes->writeUTFBytes(str);
				}
				else{
					HX_STACK_LINE(94)
					if ((::Std_obj::is(this->data,hx::ClassOf< ::String >()))){
						HX_STACK_LINE(96)
						::String str = this->data;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(97)
						::openfl::_legacy::utils::ByteArray _g2 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(97)
						this->__bytes = _g2;
						HX_STACK_LINE(98)
						this->__bytes->writeUTFBytes(str);
					}
					else{
						HX_STACK_LINE(100)
						if ((::Std_obj::is(this->data,hx::ClassOf< ::Dynamic >()))){
							HX_STACK_LINE(102)
							::openfl::net::URLVariables vars = ::openfl::net::URLVariables_obj::__new(null());		HX_STACK_VAR(vars,"vars");
							HX_STACK_LINE(104)
							{
								HX_STACK_LINE(104)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(104)
								Array< ::String > _g1 = ::Reflect_obj::fields(this->data);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(104)
								while((true)){
									HX_STACK_LINE(104)
									if ((!(((_g < _g1->length))))){
										HX_STACK_LINE(104)
										break;
									}
									HX_STACK_LINE(104)
									::String i = _g1->__get(_g);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(104)
									++(_g);
									HX_STACK_LINE(106)
									{
										HX_STACK_LINE(106)
										Dynamic value = ::Reflect_obj::field(this->data,i);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(106)
										if (((vars != null()))){
											HX_STACK_LINE(106)
											vars->__SetField(i,value,false);
										}
									}
								}
							}
							HX_STACK_LINE(110)
							::String str = vars->toString();		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(111)
							::openfl::_legacy::utils::ByteArray _g3 = ::openfl::_legacy::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(111)
							this->__bytes = _g3;
							HX_STACK_LINE(112)
							this->__bytes->writeUTFBytes(str);
						}
						else{
							HX_STACK_LINE(116)
							HX_STACK_DO_THROW(HX_CSTRING("Unknown data type"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,__prepare,(void))


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(__bytes,"__bytes");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(__bytes,"__bytes");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__bytes") ) { return __bytes; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		if (HX_FIELD_EQ(inName,"__prepare") ) { return __prepare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__bytes") ) { __bytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("userAgent"));
	outFields->push(HX_CSTRING("__bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_CSTRING("data")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_CSTRING("url")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_CSTRING("userAgent")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(URLRequest_obj,__bytes),HX_CSTRING("__bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("url"),
	HX_CSTRING("userAgent"),
	HX_CSTRING("__bytes"),
	HX_CSTRING("__prepare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.net.URLRequest"), hx::TCanCast< URLRequest_obj> ,sStaticFields,sMemberFields,
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

void URLRequest_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
