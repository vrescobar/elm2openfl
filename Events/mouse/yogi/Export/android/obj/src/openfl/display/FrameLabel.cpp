#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
namespace openfl{
namespace display{

Void FrameLabel_obj::__construct()
{
	return null();
}

//FrameLabel_obj::~FrameLabel_obj() { }

Dynamic FrameLabel_obj::__CreateEmpty() { return  new FrameLabel_obj; }
hx::ObjectPtr< FrameLabel_obj > FrameLabel_obj::__new()
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct();
	return result;}

Dynamic FrameLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameLabel_obj > result = new FrameLabel_obj();
	result->__construct();
	return result;}


FrameLabel_obj::FrameLabel_obj()
{
}

Dynamic FrameLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FrameLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameLabel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameLabel_obj::__mClass,"__mClass");
};

#endif

Class FrameLabel_obj::__mClass;

void FrameLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.FrameLabel"), hx::TCanCast< FrameLabel_obj> ,sStaticFields,sMemberFields,
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

void FrameLabel_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
