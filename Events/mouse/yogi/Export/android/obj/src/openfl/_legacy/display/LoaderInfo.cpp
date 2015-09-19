#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","new",0x87d2e343,"openfl._legacy.display.LoaderInfo.new","openfl/_legacy/display/LoaderInfo.hx",37,0xb6d254aa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	super::__construct(null());
	HX_STACK_LINE(41)
	this->applicationDomain = ::openfl::system::ApplicationDomain_obj::currentDomain;
	HX_STACK_LINE(42)
	this->childAllowsParent = true;
	HX_STACK_LINE(43)
	this->frameRate = (int)0;
	HX_STACK_LINE(44)
	this->dataFormat = ::openfl::net::URLLoaderDataFormat_obj::BINARY;
	HX_STACK_LINE(45)
	this->loaderURL = null();
}
;
	return null();
}

//LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > result = new LoaderInfo_obj();
	result->__construct();
	return result;}

Void LoaderInfo_obj::load( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","load",0x4f690de3,"openfl._legacy.display.LoaderInfo.load","openfl/_legacy/display/LoaderInfo.hx",68,0xb6d254aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(70)
		this->__pendingURL = request->url;
		HX_STACK_LINE(71)
		int dot = this->__pendingURL.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(72)
		::String extension;		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(72)
		if (((dot > (int)0))){
			HX_STACK_LINE(72)
			extension = this->__pendingURL.substr((dot + (int)1),null()).toLowerCase();
		}
		else{
			HX_STACK_LINE(72)
			extension = HX_CSTRING("");
		}
		HX_STACK_LINE(74)
		int _g = extension.indexOf(HX_CSTRING("?"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		if (((_g != (int)-1))){
			HX_STACK_LINE(75)
			Array< ::String > _g1 = extension.split(HX_CSTRING("?"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			::String _g2 = _g1->__get((int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(75)
			extension = _g2;
		}
		HX_STACK_LINE(77)
		::String _switch_1 = (extension);
		if (  ( _switch_1==HX_CSTRING("swf"))){
			HX_STACK_LINE(77)
			this->contentType = HX_CSTRING("application/x-shockwave-flash");
		}
		else if (  ( _switch_1==HX_CSTRING("jpg")) ||  ( _switch_1==HX_CSTRING("jpeg"))){
			HX_STACK_LINE(77)
			this->contentType = HX_CSTRING("image/jpeg");
		}
		else if (  ( _switch_1==HX_CSTRING("png"))){
			HX_STACK_LINE(77)
			this->contentType = HX_CSTRING("image/png");
		}
		else if (  ( _switch_1==HX_CSTRING("gif"))){
			HX_STACK_LINE(77)
			this->contentType = HX_CSTRING("image/gif");
		}
		else  {
			HX_STACK_LINE(77)
			this->contentType = HX_CSTRING("application/octet-stream");
		}
;
;
		HX_STACK_LINE(87)
		this->url = null();
		HX_STACK_LINE(89)
		this->super::load(request);
	}
return null();
}


Void LoaderInfo_obj::this_onComplete( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","this_onComplete",0x99e9f7dc,"openfl._legacy.display.LoaderInfo.this_onComplete","openfl/_legacy/display/LoaderInfo.hx",101,0xb6d254aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(103)
		this->url = this->__pendingURL;
		HX_STACK_LINE(104)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::COMPLETE,this->this_onComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,this_onComplete,(void))

::openfl::_legacy::display::LoaderInfo LoaderInfo_obj::create( ::openfl::_legacy::display::Loader loader){
	HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","create",0xe9d303f9,"openfl._legacy.display.LoaderInfo.create","openfl/_legacy/display/LoaderInfo.hx",50,0xb6d254aa)
	HX_STACK_ARG(loader,"loader")
	HX_STACK_LINE(52)
	::openfl::_legacy::display::LoaderInfo loaderInfo = ::openfl::_legacy::display::LoaderInfo_obj::__new();		HX_STACK_VAR(loaderInfo,"loaderInfo");
	HX_STACK_LINE(53)
	loaderInfo->loader = loader;
	HX_STACK_LINE(54)
	::openfl::events::UncaughtErrorEvents _g = ::openfl::events::UncaughtErrorEvents_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	loaderInfo->uncaughtErrorEvents = _g;
	HX_STACK_LINE(55)
	loaderInfo->addEventListener(::openfl::_legacy::events::Event_obj::COMPLETE,loaderInfo->this_onComplete_dyn(),null(),null(),null());
	HX_STACK_LINE(57)
	if (((loader == null()))){
		HX_STACK_LINE(59)
		loaderInfo->url = HX_CSTRING("");
	}
	HX_STACK_LINE(63)
	return loaderInfo;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(__pendingURL,"__pendingURL");
	::openfl::_legacy::net::URLLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(__pendingURL,"__pendingURL");
	::openfl::_legacy::net::URLLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { return __pendingURL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return this_onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return applicationDomain; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return uncaughtErrorEvents; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::openfl::_legacy::display::Loader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { __pendingURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast< ::openfl::system::ApplicationDomain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast< ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("applicationDomain"));
	outFields->push(HX_CSTRING("childAllowsParent"));
	outFields->push(HX_CSTRING("contentType"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("loader"));
	outFields->push(HX_CSTRING("loaderURL"));
	outFields->push(HX_CSTRING("url"));
	outFields->push(HX_CSTRING("uncaughtErrorEvents"));
	outFields->push(HX_CSTRING("__pendingURL"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::system::ApplicationDomain*/ ,(int)offsetof(LoaderInfo_obj,applicationDomain),HX_CSTRING("applicationDomain")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_CSTRING("childAllowsParent")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_CSTRING("contentType")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsObject /*::openfl::_legacy::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_CSTRING("loader")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_CSTRING("loaderURL")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_CSTRING("url")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(LoaderInfo_obj,uncaughtErrorEvents),HX_CSTRING("uncaughtErrorEvents")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,__pendingURL),HX_CSTRING("__pendingURL")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("applicationDomain"),
	HX_CSTRING("childAllowsParent"),
	HX_CSTRING("contentType"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("loader"),
	HX_CSTRING("loaderURL"),
	HX_CSTRING("url"),
	HX_CSTRING("uncaughtErrorEvents"),
	HX_CSTRING("__pendingURL"),
	HX_CSTRING("load"),
	HX_CSTRING("this_onComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#endif

Class LoaderInfo_obj::__mClass;

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.LoaderInfo"), hx::TCanCast< LoaderInfo_obj> ,sStaticFields,sMemberFields,
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

void LoaderInfo_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
