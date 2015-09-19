#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl._legacy.events.Event","new",0xfb90e03b,"openfl._legacy.events.Event.new","openfl/_legacy/events/Event.hx",56,0xcca9b1d4)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(58)
	this->__type = type;
	HX_STACK_LINE(59)
	this->__bubbles = bubbles;
	HX_STACK_LINE(60)
	this->__cancelable = cancelable;
	HX_STACK_LINE(61)
	this->__isCancelled = false;
	HX_STACK_LINE(62)
	this->__isCancelledNow = false;
	HX_STACK_LINE(63)
	this->__target = null();
	HX_STACK_LINE(64)
	this->__currentTarget = null();
	HX_STACK_LINE(65)
	this->__eventPhase = ::openfl::events::EventPhase_obj::AT_TARGET;
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > result = new Event_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Event_obj::__getIsCancelled( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","__getIsCancelled",0x715efeb6,"openfl._legacy.events.Event.__getIsCancelled","openfl/_legacy/events/Event.hx",116,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->__isCancelled;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,__getIsCancelled,return )

Void Event_obj::__setPhase( ::openfl::events::EventPhase value){
{
		HX_STACK_FRAME("openfl._legacy.events.Event","__setPhase",0xec9075de,"openfl._legacy.events.Event.__setPhase","openfl/_legacy/events/Event.hx",130,0xcca9b1d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(130)
		this->__eventPhase = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,__setPhase,(void))

bool Event_obj::get_bubbles( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_bubbles",0x8139fe59,"openfl._legacy.events.Event.get_bubbles","openfl/_legacy/events/Event.hx",142,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	return this->__bubbles;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_bubbles,return )

bool Event_obj::get_cancelable( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_cancelable",0xb4814062,"openfl._legacy.events.Event.get_cancelable","openfl/_legacy/events/Event.hx",143,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return this->__cancelable;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_cancelable,return )

Dynamic Event_obj::set_currentTarget( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.events.Event","set_currentTarget",0x11c250e8,"openfl._legacy.events.Event.set_currentTarget","openfl/_legacy/events/Event.hx",145,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(145)
	return this->__currentTarget = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_currentTarget,return )

::openfl::events::EventPhase Event_obj::get_eventPhase( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_eventPhase",0x2e4bd20f,"openfl._legacy.events.Event.get_eventPhase","openfl/_legacy/events/Event.hx",146,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return this->__eventPhase;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_eventPhase,return )

Dynamic Event_obj::get_target( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_target",0xf0aed49f,"openfl._legacy.events.Event.get_target","openfl/_legacy/events/Event.hx",147,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->__target;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_target,return )

Dynamic Event_obj::set_target( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.events.Event","set_target",0xf42c7313,"openfl._legacy.events.Event.set_target","openfl/_legacy/events/Event.hx",148,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(148)
	return this->__target = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_target,return )

::String Event_obj::get_type( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_type",0xdef84488,"openfl._legacy.events.Event.get_type","openfl/_legacy/events/Event.hx",149,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return this->__type;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_type,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CHANGE;

::String Event_obj::COMPLETE;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SOUND_COMPLETE;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(__bubbles,"__bubbles");
	HX_MARK_MEMBER_NAME(__cancelable,"__cancelable");
	HX_MARK_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_MARK_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_MARK_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_MARK_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_MARK_MEMBER_NAME(__target,"__target");
	HX_MARK_MEMBER_NAME(__type,"__type");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bubbles,"__bubbles");
	HX_VISIT_MEMBER_NAME(__cancelable,"__cancelable");
	HX_VISIT_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_VISIT_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_VISIT_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_VISIT_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_VISIT_MEMBER_NAME(__target,"__target");
	HX_VISIT_MEMBER_NAME(__type,"__type");
}

Dynamic Event_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { return OPEN; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { return ADDED; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CHANGE") ) { return CHANGE; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { return RENDER; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { return RESIZE; }
		if (HX_FIELD_EQ(inName,"__type") ) { return __type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REMOVED") ) { return REMOVED; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { return ACTIVATE; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		if (HX_FIELD_EQ(inName,"__target") ) { return __target; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { return __bubbles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { return DEACTIVATE; }
		if (HX_FIELD_EQ(inName,"__setPhase") ) { return __setPhase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { return ENTER_FRAME; }
		if (HX_FIELD_EQ(inName,"get_bubbles") ) { return get_bubbles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__cancelable") ) { return __cancelable; }
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { return __eventPhase; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { return __isCancelled; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { return ADDED_TO_STAGE; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { return SOUND_COMPLETE; }
		if (HX_FIELD_EQ(inName,"get_cancelable") ) { return get_cancelable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_eventPhase") ) { return get_eventPhase_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { return __currentTarget; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { return __isCancelledNow; }
		if (HX_FIELD_EQ(inName,"__getIsCancelled") ) { return __getIsCancelled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_currentTarget") ) { return set_currentTarget_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { return REMOVED_FROM_STAGE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__type") ) { __type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__target") ) { __target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { __bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__cancelable") ) { __cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { __eventPhase=inValue.Cast< ::openfl::events::EventPhase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { __isCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { __currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { __isCancelledNow=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__bubbles"));
	outFields->push(HX_CSTRING("__cancelable"));
	outFields->push(HX_CSTRING("__currentTarget"));
	outFields->push(HX_CSTRING("__eventPhase"));
	outFields->push(HX_CSTRING("__isCancelled"));
	outFields->push(HX_CSTRING("__isCancelledNow"));
	outFields->push(HX_CSTRING("__target"));
	outFields->push(HX_CSTRING("__type"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ACTIVATE"),
	HX_CSTRING("ADDED"),
	HX_CSTRING("ADDED_TO_STAGE"),
	HX_CSTRING("CHANGE"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("DEACTIVATE"),
	HX_CSTRING("ENTER_FRAME"),
	HX_CSTRING("OPEN"),
	HX_CSTRING("REMOVED"),
	HX_CSTRING("REMOVED_FROM_STAGE"),
	HX_CSTRING("RENDER"),
	HX_CSTRING("RESIZE"),
	HX_CSTRING("SOUND_COMPLETE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,__bubbles),HX_CSTRING("__bubbles")},
	{hx::fsBool,(int)offsetof(Event_obj,__cancelable),HX_CSTRING("__cancelable")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,__currentTarget),HX_CSTRING("__currentTarget")},
	{hx::fsObject /*::openfl::events::EventPhase*/ ,(int)offsetof(Event_obj,__eventPhase),HX_CSTRING("__eventPhase")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelled),HX_CSTRING("__isCancelled")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelledNow),HX_CSTRING("__isCancelledNow")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,__target),HX_CSTRING("__target")},
	{hx::fsString,(int)offsetof(Event_obj,__type),HX_CSTRING("__type")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__bubbles"),
	HX_CSTRING("__cancelable"),
	HX_CSTRING("__currentTarget"),
	HX_CSTRING("__eventPhase"),
	HX_CSTRING("__isCancelled"),
	HX_CSTRING("__isCancelledNow"),
	HX_CSTRING("__target"),
	HX_CSTRING("__type"),
	HX_CSTRING("__getIsCancelled"),
	HX_CSTRING("__setPhase"),
	HX_CSTRING("get_bubbles"),
	HX_CSTRING("get_cancelable"),
	HX_CSTRING("set_currentTarget"),
	HX_CSTRING("get_eventPhase"),
	HX_CSTRING("get_target"),
	HX_CSTRING("set_target"),
	HX_CSTRING("get_type"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
};

#endif

Class Event_obj::__mClass;

void Event_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.events.Event"), hx::TCanCast< Event_obj> ,sStaticFields,sMemberFields,
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

void Event_obj::__boot()
{
	ACTIVATE= HX_CSTRING("activate");
	ADDED= HX_CSTRING("added");
	ADDED_TO_STAGE= HX_CSTRING("addedToStage");
	CHANGE= HX_CSTRING("change");
	COMPLETE= HX_CSTRING("complete");
	DEACTIVATE= HX_CSTRING("deactivate");
	ENTER_FRAME= HX_CSTRING("enterFrame");
	OPEN= HX_CSTRING("open");
	REMOVED= HX_CSTRING("removed");
	REMOVED_FROM_STAGE= HX_CSTRING("removedFromStage");
	RENDER= HX_CSTRING("render");
	RESIZE= HX_CSTRING("resize");
	SOUND_COMPLETE= HX_CSTRING("soundComplete");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
