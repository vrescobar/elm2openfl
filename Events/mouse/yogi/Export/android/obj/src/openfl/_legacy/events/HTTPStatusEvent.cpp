#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{
HX_STACK_FRAME("openfl._legacy.events.HTTPStatusEvent","new",0x2f96f8e1,"openfl._legacy.events.HTTPStatusEvent.new","openfl/_legacy/events/HTTPStatusEvent.hx",14,0xa6d8d4ae)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_status,"status")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
{
	HX_STACK_LINE(16)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(18)
	this->status = status;
	HX_STACK_LINE(19)
	this->responseHeaders = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//HTTPStatusEvent_obj::~HTTPStatusEvent_obj() { }

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return  new HTTPStatusEvent_obj; }
hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{  hx::ObjectPtr< HTTPStatusEvent_obj > result = new HTTPStatusEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_status);
	return result;}

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPStatusEvent_obj > result = new HTTPStatusEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String HTTPStatusEvent_obj::HTTP_STATUS;


HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPStatusEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { return HTTP_STATUS; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HTTPStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { HTTP_STATUS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("responseHeaders"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HTTP_STATUS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_CSTRING("status")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_CSTRING("responseHeaders")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("status"),
	HX_CSTRING("responseHeaders"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

Class HTTPStatusEvent_obj::__mClass;

void HTTPStatusEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.events.HTTPStatusEvent"), hx::TCanCast< HTTPStatusEvent_obj> ,sStaticFields,sMemberFields,
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

void HTTPStatusEvent_obj::__boot()
{
	HTTP_STATUS= HX_CSTRING("httpStatus");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
