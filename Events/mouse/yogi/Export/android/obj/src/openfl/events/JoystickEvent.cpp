#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace openfl{
namespace events{

Void JoystickEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{
HX_STACK_FRAME("openfl.events.JoystickEvent","new",0xfbc75f99,"openfl.events.JoystickEvent.new","openfl/events/JoystickEvent.hx",25,0x4ab90817)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_device,"device")
HX_STACK_ARG(__o_id,"id")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int device = __o_device.Default(0);
int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
{
	HX_STACK_LINE(27)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(29)
	this->device = device;
	HX_STACK_LINE(30)
	this->id = id;
	HX_STACK_LINE(31)
	this->x = x;
	HX_STACK_LINE(32)
	this->y = y;
	HX_STACK_LINE(33)
	this->z = z;
	HX_STACK_LINE(35)
	this->axis = Array_obj< Float >::__new().Add(x).Add(y).Add(z).Add((int)0).Add((int)0).Add((int)0);
}
;
	return null();
}

//JoystickEvent_obj::~JoystickEvent_obj() { }

Dynamic JoystickEvent_obj::__CreateEmpty() { return  new JoystickEvent_obj; }
hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z)
{  hx::ObjectPtr< JoystickEvent_obj > result = new JoystickEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_device,__o_id,__o_x,__o_y,__o_z);
	return result;}

Dynamic JoystickEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoystickEvent_obj > result = new JoystickEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}


JoystickEvent_obj::JoystickEvent_obj()
{
}

void JoystickEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickEvent);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(device,"device");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void JoystickEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(device,"device");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic JoystickEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { return device; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JoystickEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"device") ) { device=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("axis"));
	outFields->push(HX_CSTRING("device"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(JoystickEvent_obj,axis),HX_CSTRING("axis")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,device),HX_CSTRING("device")},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("axis"),
	HX_CSTRING("device"),
	HX_CSTRING("id"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::__mClass,"__mClass");
};

#endif

Class JoystickEvent_obj::__mClass;

void JoystickEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.JoystickEvent"), hx::TCanCast< JoystickEvent_obj> ,sStaticFields,sMemberFields,
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

void JoystickEvent_obj::__boot()
{
}

} // end namespace openfl
} // end namespace events
