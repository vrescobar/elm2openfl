#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TouchInfo
#include <openfl/_legacy/display/TouchInfo.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_SystemEvent
#include <openfl/_legacy/events/SystemEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Stage_obj::__construct(Dynamic handle,int width,int height)
{
HX_STACK_FRAME("openfl._legacy.display.Stage","new",0x8f657500,"openfl._legacy.display.Stage.new","openfl/_legacy/display/Stage.hx",119,0x8b30a073)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(125)
	super::__construct(handle,HX_CSTRING("Stage"));
	HX_STACK_LINE(127)
	this->__mouseOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(128)
	this->__focusOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(129)
	this->active = true;
	HX_STACK_LINE(130)
	this->allowsFullScreen = true;
	HX_STACK_LINE(131)
	this->pauseWhenDeactivated = true;
	HX_STACK_LINE(134)
	this->__hatValue = (int)0;
	HX_STACK_LINE(135)
	this->renderRequest = ::openfl::_legacy::display::Stage_obj::lime_stage_request_render_dyn();
	HX_STACK_LINE(144)
	::openfl::_legacy::display::Stage_obj::lime_set_stage_handler(this->__handle,this->__processStageEvent_dyn(),width,height);
	HX_STACK_LINE(145)
	this->__invalid = false;
	HX_STACK_LINE(146)
	this->__lastRender = (int)0;
	HX_STACK_LINE(147)
	this->__lastDown = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(148)
	this->__lastClickTime = (int)0;
	HX_STACK_LINE(149)
	this->__nextRender = (int)0;
	HX_STACK_LINE(150)
	this->set_frameRate((int)100);
	HX_STACK_LINE(151)
	::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(151)
	this->__touchInfo = _g;
	HX_STACK_LINE(152)
	::haxe::ds::IntMap _g1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(152)
	this->__joyAxisData = _g1;
	HX_STACK_LINE(154)
	Array< ::Dynamic > _g3;		HX_STACK_VAR(_g3,"_g3");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",154,0x8b30a073)
			{
				HX_STACK_LINE(154)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(154)
				Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new()->__SetSizeExact(null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(154)
				this1 = _g2;
				HX_STACK_LINE(154)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(154)
	_g3 = _Function_1_1::Block();
	HX_STACK_LINE(154)
	this->stage3Ds = _g3;
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::openfl::display::Stage3D x = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(155)
		this->stage3Ds->push(x);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(Dynamic handle,int width,int height)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(handle,width,height);
	return result;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > result = new Stage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Stage_obj::__checkFocusInOuts( Dynamic event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__checkFocusInOuts",0x5e1ac73a,"openfl._legacy.display.Stage.__checkFocusInOuts","openfl/_legacy/display/Stage.hx",228,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(230)
		int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
		HX_STACK_LINE(231)
		::openfl::_legacy::display::InteractiveObject newObject;		HX_STACK_VAR(newObject,"newObject");
		HX_STACK_LINE(231)
		if (((newLength > (int)0))){
			HX_STACK_LINE(231)
			newObject = stack->__get((newLength - (int)1)).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(231)
			newObject = null();
		}
		HX_STACK_LINE(232)
		int oldLength = this->__focusOverObjects->length;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(233)
		::openfl::_legacy::display::InteractiveObject oldObject;		HX_STACK_VAR(oldObject,"oldObject");
		HX_STACK_LINE(233)
		if (((oldLength > (int)0))){
			HX_STACK_LINE(233)
			oldObject = this->__focusOverObjects->__get((oldLength - (int)1)).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(233)
			oldObject = null();
		}
		HX_STACK_LINE(235)
		if (((newObject != oldObject))){
			HX_STACK_LINE(237)
			if (((oldObject != null()))){
				HX_STACK_LINE(239)
				::openfl::events::FocusEvent focusOut = ::openfl::events::FocusEvent_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_OUT,true,false,newObject,(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true));		HX_STACK_VAR(focusOut,"focusOut");
				HX_STACK_LINE(240)
				focusOut->set_target(oldObject);
				HX_STACK_LINE(241)
				oldObject->__fireEvent(focusOut);
			}
			HX_STACK_LINE(245)
			if (((newObject != null()))){
				HX_STACK_LINE(247)
				::openfl::events::FocusEvent focusIn = ::openfl::events::FocusEvent_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_IN,true,false,oldObject,(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true));		HX_STACK_VAR(focusIn,"focusIn");
				HX_STACK_LINE(248)
				focusIn->set_target(newObject);
				HX_STACK_LINE(249)
				newObject->__fireEvent(focusIn);
			}
			HX_STACK_LINE(253)
			this->__focusOverObjects = stack;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__checkFocusInOuts,(void))

bool Stage_obj::__checkInOuts( ::openfl::_legacy::events::MouseEvent event,Array< ::Dynamic > stack,::openfl::_legacy::display::TouchInfo touchInfo){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__checkInOuts",0x26b17b12,"openfl._legacy.display.Stage.__checkInOuts","openfl/_legacy/display/Stage.hx",260,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(touchInfo,"touchInfo")
	HX_STACK_LINE(262)
	Array< ::Dynamic > prev;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(262)
	if (((touchInfo == null()))){
		HX_STACK_LINE(262)
		prev = this->__mouseOverObjects;
	}
	else{
		HX_STACK_LINE(262)
		prev = touchInfo->touchOverObjects;
	}
	HX_STACK_LINE(263)
	Array< ::String > events;		HX_STACK_VAR(events,"events");
	HX_STACK_LINE(263)
	if (((touchInfo == null()))){
		HX_STACK_LINE(263)
		events = ::openfl::_legacy::display::Stage_obj::__mouseChanges;
	}
	else{
		HX_STACK_LINE(263)
		events = ::openfl::_legacy::display::Stage_obj::__touchChanges;
	}
	HX_STACK_LINE(265)
	int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
	HX_STACK_LINE(266)
	::openfl::_legacy::display::InteractiveObject newObject;		HX_STACK_VAR(newObject,"newObject");
	HX_STACK_LINE(266)
	if (((newLength > (int)0))){
		HX_STACK_LINE(266)
		newObject = stack->__get((newLength - (int)1)).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(266)
		newObject = null();
	}
	HX_STACK_LINE(267)
	int oldLength = prev->length;		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(268)
	::openfl::_legacy::display::InteractiveObject oldObject;		HX_STACK_VAR(oldObject,"oldObject");
	HX_STACK_LINE(268)
	if (((oldLength > (int)0))){
		HX_STACK_LINE(268)
		oldObject = prev->__get((oldLength - (int)1)).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(268)
		oldObject = null();
	}
	HX_STACK_LINE(270)
	if (((newObject != oldObject))){
		HX_STACK_LINE(272)
		if (((oldObject != null()))){
			HX_STACK_LINE(274)
			::openfl::_legacy::events::MouseEvent _g = event->__createSimilar(events->__get((int)0),newObject,oldObject);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(274)
			oldObject->__fireEvent(_g);
		}
		HX_STACK_LINE(278)
		if (((newObject != null()))){
			HX_STACK_LINE(280)
			::openfl::_legacy::events::MouseEvent _g1 = event->__createSimilar(events->__get((int)1),newObject,newObject);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(280)
			newObject->__fireEvent(_g1);
		}
		HX_STACK_LINE(284)
		int common = (int)0;		HX_STACK_VAR(common,"common");
		HX_STACK_LINE(285)
		while((true)){
			HX_STACK_LINE(285)
			if ((!(((bool((bool((common < newLength)) && bool((common < oldLength)))) && bool((stack->__get(common).StaticCast< ::openfl::_legacy::display::InteractiveObject >() == prev->__get(common).StaticCast< ::openfl::_legacy::display::InteractiveObject >()))))))){
				HX_STACK_LINE(285)
				break;
			}
			HX_STACK_LINE(287)
			(common)++;
		}
		HX_STACK_LINE(291)
		::openfl::_legacy::events::MouseEvent rollOut = event->__createSimilar(events->__get((int)2),newObject,oldObject);		HX_STACK_VAR(rollOut,"rollOut");
		HX_STACK_LINE(293)
		int i = (oldLength - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(294)
		while((true)){
			HX_STACK_LINE(294)
			if ((!(((i >= common))))){
				HX_STACK_LINE(294)
				break;
			}
			HX_STACK_LINE(296)
			prev->__get(i).StaticCast< ::openfl::_legacy::display::InteractiveObject >()->__dispatchEvent(rollOut);
			HX_STACK_LINE(297)
			(i)--;
		}
		HX_STACK_LINE(301)
		::openfl::_legacy::events::MouseEvent rollOver = event->__createSimilar(events->__get((int)3),oldObject,null());		HX_STACK_VAR(rollOver,"rollOver");
		HX_STACK_LINE(303)
		int i1 = (newLength - (int)1);		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			if ((!(((i1 >= common))))){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(306)
			stack->__get(i1).StaticCast< ::openfl::_legacy::display::InteractiveObject >()->__dispatchEvent(rollOver);
			HX_STACK_LINE(307)
			(i1)--;
		}
		HX_STACK_LINE(311)
		if (((touchInfo == null()))){
			HX_STACK_LINE(313)
			this->__mouseOverObjects = stack;
		}
		else{
			HX_STACK_LINE(317)
			touchInfo->touchOverObjects = stack;
		}
		HX_STACK_LINE(321)
		return false;
	}
	HX_STACK_LINE(325)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__checkInOuts,return )

Void Stage_obj::__checkRender( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__checkRender",0xa5bd2bbe,"openfl._legacy.display.Stage.__checkRender","openfl/_legacy/display/Stage.hx",332,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		if (((this->frameRate > (int)0))){
			HX_STACK_LINE(334)
			Float now = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(now,"now");
			HX_STACK_LINE(335)
			if (((now >= this->__nextRender))){
				HX_STACK_LINE(337)
				this->__lastRender = now;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(339)
					if ((!(((this->__nextRender < this->__lastRender))))){
						HX_STACK_LINE(339)
						break;
					}
					HX_STACK_LINE(341)
					hx::AddEq(this->__nextRender,this->__framePeriod);
				}
				HX_STACK_LINE(345)
				if (((this->renderRequest_dyn() != null()))){
					HX_STACK_LINE(347)
					this->renderRequest();
				}
				else{
					HX_STACK_LINE(351)
					this->__render(true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__checkRender,(void))

Void Stage_obj::dummyTrace( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","dummyTrace",0x94b7ce9d,"openfl._legacy.display.Stage.dummyTrace","openfl/_legacy/display/Stage.hx",372,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(372)
		::haxe::Log_obj::trace(HX_CSTRING(""),hx::SourceInfo(HX_CSTRING("Stage.hx"),372,HX_CSTRING("openfl._legacy.display.Stage"),HX_CSTRING("dummyTrace")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,dummyTrace,(void))

Float Stage_obj::__doProcessStageEvent( Dynamic event){
try {
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__doProcessStageEvent",0xc4416d40,"openfl._legacy.display.Stage.__doProcessStageEvent","openfl/_legacy/display/Stage.hx",377,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(383)
		Float result = 0.0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(384)
		Dynamic _g = ::Reflect_obj::field(event,HX_CSTRING("type"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(384)
		int type = ::Std_obj::_int(_g);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(386)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(388)
			switch( (int)(type)){
				case (int)2: {
					HX_STACK_LINE(392)
					if (((this->onKey_dyn() != null()))){
						HX_STACK_LINE(393)
						this->onKey(event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("down"),true),event->__Field(HX_CSTRING("char"),true),event->__Field(HX_CSTRING("flags"),true));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(397)
					this->__onKey(event,::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(401)
					this->__onKey(event,::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(405)
					this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE,true);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(409)
					this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,true);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(413)
					this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::CLICK,true);
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(417)
					this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,true);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(421)
					this->__onResize(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));
					HX_STACK_LINE(422)
					if (((this->renderRequest_dyn() == null()))){
						HX_STACK_LINE(424)
						this->__render(false);
					}
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(430)
					this->__pollTimers();
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(434)
					if (((this->onQuit_dyn() != null()))){
						HX_STACK_LINE(435)
						this->onQuit();
					}
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(439)
					this->__onFocus(event);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(443)
					if ((::openfl::_legacy::display::Stage_obj::shouldRotateInterface(event->__Field(HX_CSTRING("value"),true)))){
						HX_STACK_LINE(444)
						event->__FieldRef(HX_CSTRING("result")) = (int)2;
					}
				}
				;break;
				case (int)14: {
					HX_STACK_LINE(448)
					this->__render(true);
				}
				;break;
				case (int)15: {
					HX_STACK_LINE(452)
					::openfl::_legacy::display::TouchInfo touchInfo = ::openfl::_legacy::display::TouchInfo_obj::__new();		HX_STACK_VAR(touchInfo,"touchInfo");
					HX_STACK_LINE(453)
					{
						HX_STACK_LINE(453)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(453)
						this->__touchInfo->set(key,touchInfo);
					}
					HX_STACK_LINE(454)
					this->__onTouch(event,::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN,touchInfo);
					HX_STACK_LINE(456)
					if (((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))){
						HX_STACK_LINE(458)
						this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN,false);
					}
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(464)
					::openfl::_legacy::display::TouchInfo touchInfo;		HX_STACK_VAR(touchInfo,"touchInfo");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(464)
						touchInfo = this->__touchInfo->get(key);
					}
					HX_STACK_LINE(465)
					this->__onTouch(event,::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE,touchInfo);
					HX_STACK_LINE(467)
					if (((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))){
						HX_STACK_LINE(469)
						this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE,false);
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(475)
					::openfl::_legacy::display::TouchInfo touchInfo;		HX_STACK_VAR(touchInfo,"touchInfo");
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(475)
						touchInfo = this->__touchInfo->get(key);
					}
					HX_STACK_LINE(476)
					this->__onTouch(event,::openfl::_legacy::events::TouchEvent_obj::TOUCH_END,touchInfo);
					HX_STACK_LINE(477)
					{
						HX_STACK_LINE(477)
						int key = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(477)
						this->__touchInfo->remove(key);
					}
					HX_STACK_LINE(479)
					if (((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))){
						HX_STACK_LINE(481)
						this->__onMouse(event,::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP,false);
					}
				}
				;break;
				case (int)18: {
				}
				;break;
				case (int)19: {
					HX_STACK_LINE(491)
					this->__onChange(event);
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(495)
					this->__setActive(true);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(499)
					this->__setActive(false);
				}
				;break;
				case (int)22: {
					HX_STACK_LINE(503)
					::openfl::_legacy::events::Event _g1 = ::openfl::_legacy::events::Event_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_IN,null(),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(503)
					this->__dispatchEvent(_g1);
				}
				;break;
				case (int)23: {
					HX_STACK_LINE(507)
					::openfl::_legacy::events::Event _g2 = ::openfl::_legacy::events::Event_obj::__new(::openfl::events::FocusEvent_obj::FOCUS_OUT,null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(507)
					this->__dispatchEvent(_g2);
				}
				;break;
				case (int)24: {
					HX_STACK_LINE(511)
					this->__onJoystick(event,HX_CSTRING("axisMove"));
				}
				;break;
				case (int)25: {
					HX_STACK_LINE(515)
					this->__onJoystick(event,HX_CSTRING("ballMove"));
				}
				;break;
				case (int)26: {
					HX_STACK_LINE(519)
					this->__onJoystick(event,HX_CSTRING("hatMove"));
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(523)
					this->__onJoystick(event,HX_CSTRING("buttonDown"));
				}
				;break;
				case (int)28: {
					HX_STACK_LINE(527)
					this->__onJoystick(event,HX_CSTRING("buttonUp"));
				}
				;break;
				case (int)29: {
					HX_STACK_LINE(531)
					this->__onJoystick(event,HX_CSTRING("deviceAdded"));
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(535)
					this->__onJoystick(event,HX_CSTRING("deviceRemoved"));
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(539)
					this->__onSysWM(event);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(543)
					this->__onRenderContext(false);
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(547)
					this->__onRenderContext(true);
				}
				;break;
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic error = __e;{
					HX_STACK_LINE(555)
					::openfl::_legacy::Lib_obj::rethrow(error);
				}
			}
		}
		HX_STACK_LINE(563)
		Float _g3 = this->__updateNextWake();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(563)
		result = _g3;
		HX_STACK_LINE(564)
		return result;
	}
 } catch(Dynamic e) { __hx_dump_stack(); ::haxe::Log_obj::trace(HX_CSTRING("Uncaught exception: ") + e,hx::SourceInfo(HX_CSTRING("Stage.hx"),0,HX_CSTRING("flash.display.Stage"),HX_CSTRING("__doProcessStageEvent"))); } return 0;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__doProcessStageEvent,return )

Dynamic Stage_obj::__processStageEvent( Dynamic event){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__processStageEvent",0xd0ccd14b,"openfl._legacy.display.Stage.__processStageEvent","openfl/_legacy/display/Stage.hx",569,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(571)
	this->__doProcessStageEvent(event);
	HX_STACK_LINE(572)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__processStageEvent,return )

Void Stage_obj::__drag( ::openfl::_legacy::geom::Point mouse){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__drag",0x33b78e74,"openfl._legacy.display.Stage.__drag","openfl/_legacy/display/Stage.hx",577,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(579)
		::openfl::_legacy::display::DisplayObjectContainer parent = this->__dragObject->get_parent();		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(580)
		if (((parent != null()))){
			HX_STACK_LINE(582)
			::openfl::_legacy::geom::Point _g = parent->globalToLocal(mouse);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(582)
			mouse = _g;
		}
		HX_STACK_LINE(586)
		Float x = (mouse->x + this->__dragOffsetX);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(587)
		Float y = (mouse->y + this->__dragOffsetY);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(589)
		if (((this->__dragBounds != null()))){
			HX_STACK_LINE(591)
			if (((x < this->__dragBounds->x))){
				HX_STACK_LINE(593)
				x = this->__dragBounds->x;
			}
			else{
				HX_STACK_LINE(595)
				Float _g1 = this->__dragBounds->get_right();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(595)
				if (((x > _g1))){
					HX_STACK_LINE(597)
					Float _g2 = this->__dragBounds->get_right();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(597)
					x = _g2;
				}
			}
			HX_STACK_LINE(601)
			if (((y < this->__dragBounds->y))){
				HX_STACK_LINE(603)
				y = this->__dragBounds->y;
			}
			else{
				HX_STACK_LINE(605)
				Float _g3 = this->__dragBounds->get_bottom();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(605)
				if (((y > _g3))){
					HX_STACK_LINE(607)
					Float _g4 = this->__dragBounds->get_bottom();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(607)
					y = _g4;
				}
			}
		}
		HX_STACK_LINE(613)
		this->__dragObject->set_x(x);
		HX_STACK_LINE(614)
		this->__dragObject->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Float Stage_obj::__nextFrameDue( Float otherTimers){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__nextFrameDue",0xba16f01a,"openfl._legacy.display.Stage.__nextFrameDue","openfl/_legacy/display/Stage.hx",619,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherTimers,"otherTimers")
	HX_STACK_LINE(621)
	if (((bool(!(this->active)) && bool(this->pauseWhenDeactivated)))){
		HX_STACK_LINE(623)
		return otherTimers;
	}
	HX_STACK_LINE(627)
	if (((this->frameRate > (int)0))){
		HX_STACK_LINE(629)
		Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(629)
		Float _g1 = (this->__nextRender - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(629)
		Float next = (_g1 - ::openfl::_legacy::display::Stage_obj::__earlyWakeup);		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(630)
		if (((next < otherTimers))){
			HX_STACK_LINE(632)
			return next;
		}
	}
	HX_STACK_LINE(638)
	return otherTimers;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__nextFrameDue,return )

Void Stage_obj::__onChange( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onChange",0x300a2a6f,"openfl._legacy.display.Stage.__onChange","openfl/_legacy/display/Stage.hx",643,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(645)
		::openfl::_legacy::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(647)
		if (((object != null()))){
			HX_STACK_LINE(649)
			::openfl::_legacy::events::Event _g = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::CHANGE,true,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(649)
			object->__fireEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onChange,(void))

Void Stage_obj::__onFocus( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onFocus",0x8b642bb9,"openfl._legacy.display.Stage.__onFocus","openfl/_legacy/display/Stage.hx",656,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(658)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(659)
		::openfl::_legacy::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(661)
		if (((object != null()))){
			HX_STACK_LINE(663)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(667)
		if (((bool((stack->length > (int)0)) && bool(((bool((event->__Field(HX_CSTRING("value"),true) == (int)1)) || bool((event->__Field(HX_CSTRING("value"),true) == (int)2)))))))){
			HX_STACK_LINE(669)
			::openfl::_legacy::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(670)
			::openfl::events::FocusEvent focusEvent = ::openfl::events::FocusEvent_obj::__new((  (((event->__Field(HX_CSTRING("value"),true) == (int)1))) ? ::String(::openfl::events::FocusEvent_obj::MOUSE_FOCUS_CHANGE) : ::String(::openfl::events::FocusEvent_obj::KEY_FOCUS_CHANGE) ),true,true,(  (((this->__focusOverObjects->length == (int)0))) ? ::openfl::_legacy::display::InteractiveObject(null()) : ::openfl::_legacy::display::InteractiveObject(this->__focusOverObjects->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >()) ),(event->__Field(HX_CSTRING("flags"),true) > (int)0),event->__Field(HX_CSTRING("code"),true));		HX_STACK_VAR(focusEvent,"focusEvent");
			HX_STACK_LINE(671)
			object1->__fireEvent(focusEvent);
			HX_STACK_LINE(673)
			if ((focusEvent->__getIsCancelled())){
				HX_STACK_LINE(675)
				event->__FieldRef(HX_CSTRING("result")) = (int)1;
				HX_STACK_LINE(676)
				return null();
			}
		}
		HX_STACK_LINE(682)
		stack->reverse();
		HX_STACK_LINE(683)
		this->__checkFocusInOuts(event,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onFocus,(void))

Void Stage_obj::__onJoystick( Dynamic event,::String type){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onJoystick",0x1c60f77b,"openfl._legacy.display.Stage.__onJoystick","openfl/_legacy/display/Stage.hx",688,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(690)
		::openfl::events::JoystickEvent joystickEvent = null();		HX_STACK_VAR(joystickEvent,"joystickEvent");
		HX_STACK_LINE(692)
		::String _switch_1 = (type);
		if (  ( _switch_1==HX_CSTRING("axisMove"))){
			HX_STACK_LINE(696)
			Array< Float > data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(696)
			{
				HX_STACK_LINE(696)
				int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(696)
				data = this->__joyAxisData->get(key);
			}
			HX_STACK_LINE(697)
			if (((data == null()))){
				HX_STACK_LINE(699)
				data = Array_obj< Float >::__new().Add(0.0).Add(0.0).Add(0.0).Add(0.0);
			}
			HX_STACK_LINE(703)
			Float value = (Float(event->__Field(HX_CSTRING("value"),true)) / Float((int)32767));		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(704)
			if (((value < (int)-1))){
				HX_STACK_LINE(704)
				value = (int)-1;
			}
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				if ((!(((data->length < event->__Field(HX_CSTRING("code"),true)))))){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(708)
				data->push((int)0);
			}
			HX_STACK_LINE(712)
			::String cachedAxisData = HX_CSTRING("");		HX_STACK_VAR(cachedAxisData,"cachedAxisData");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",713,0x8b30a073)
					{
						HX_STACK_LINE(713)
						int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(713)
						return __this->__joyAxisData->exists(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(713)
			if ((_Function_2_1::Block(this,event))){
				struct _Function_3_1{
					inline static Array< Float > Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",713,0x8b30a073)
						{
							HX_STACK_LINE(713)
							int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(713)
							return __this->__joyAxisData->get(key);
						}
						return null();
					}
				};
				HX_STACK_LINE(713)
				::String _g = (_Function_3_1::Block(this,event))->toString();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(713)
				cachedAxisData = _g;
			}
			HX_STACK_LINE(714)
			data[event->__Field(HX_CSTRING("code"),true)] = value;
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",715,0x8b30a073)
					{
						HX_STACK_LINE(715)
						int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(715)
						return __this->__joyAxisData->exists(key);
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			if ((_Function_2_2::Block(this,event))){
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(717)
					this->__joyAxisData->set(key,data);
				}
				struct _Function_3_1{
					inline static Array< Float > Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",719,0x8b30a073)
						{
							HX_STACK_LINE(719)
							int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(719)
							return __this->__joyAxisData->get(key);
						}
						return null();
					}
				};
				HX_STACK_LINE(719)
				::String _g1 = (_Function_3_1::Block(this,event))->toString();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(719)
				if (((_g1 == cachedAxisData))){
					HX_STACK_LINE(721)
					return null();
				}
				else{
					HX_STACK_LINE(725)
					::openfl::events::JoystickEvent _g2 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),(int)0,data->__get((int)0),data->__get((int)1),data->__get((int)2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(725)
					joystickEvent = _g2;
					HX_STACK_LINE(726)
					Array< Float > _g3 = data->copy();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(726)
					joystickEvent->axis = _g3;
				}
			}
			else{
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					int key = event->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(731)
					this->__joyAxisData->set(key,data);
				}
				HX_STACK_LINE(732)
				::openfl::events::JoystickEvent _g4 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),(int)0,data->__get((int)0),data->__get((int)1),data->__get((int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(732)
				joystickEvent = _g4;
				HX_STACK_LINE(733)
				Array< Float > _g5 = data->copy();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(733)
				joystickEvent->axis = _g5;
			}
		}
		else if (  ( _switch_1==HX_CSTRING("ballMove"))){
			HX_STACK_LINE(738)
			::openfl::events::JoystickEvent _g6 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(738)
			joystickEvent = _g6;
		}
		else if (  ( _switch_1==HX_CSTRING("deviceAdded"))){
			HX_STACK_LINE(742)
			::openfl::events::JoystickEvent _g7 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),(int)0,event->__Field(HX_CSTRING("x"),true),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(742)
			joystickEvent = _g7;
		}
		else if (  ( _switch_1==HX_CSTRING("deviceRemoved"))){
			HX_STACK_LINE(746)
			::openfl::events::JoystickEvent _g8 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(746)
			joystickEvent = _g8;
		}
		else if (  ( _switch_1==HX_CSTRING("hatMove"))){
			HX_STACK_LINE(750)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(751)
			int y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(753)
			if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)1))) != (int)0))){
				HX_STACK_LINE(755)
				y = (int)-1;
			}
			else{
				HX_STACK_LINE(757)
				if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)4))) != (int)0))){
					HX_STACK_LINE(759)
					y = (int)1;
				}
			}
			HX_STACK_LINE(763)
			if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)2))) != (int)0))){
				HX_STACK_LINE(765)
				x = (int)1;
			}
			else{
				HX_STACK_LINE(767)
				if (((((int(event->__Field(HX_CSTRING("value"),true)) & int((int)8))) != (int)0))){
					HX_STACK_LINE(769)
					x = (int)-1;
				}
			}
			HX_STACK_LINE(773)
			::openfl::events::JoystickEvent _g9 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),x,y,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(773)
			joystickEvent = _g9;
		}
		else  {
			HX_STACK_LINE(778)
			if (((bool((event->__Field(HX_CSTRING("code"),true) >= (int)19)) && bool((event->__Field(HX_CSTRING("code"),true) <= (int)22))))){
				HX_STACK_LINE(780)
				if (((type == HX_CSTRING("buttonDown")))){
					HX_STACK_LINE(782)
					Dynamic _g = event->__Field(HX_CSTRING("code"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(782)
					switch( (int)(_g)){
						case (int)19: {
							HX_STACK_LINE(784)
							hx::OrEq(this->__hatValue,(int)1);
						}
						;break;
						case (int)20: {
							HX_STACK_LINE(785)
							hx::OrEq(this->__hatValue,(int)4);
						}
						;break;
						case (int)21: {
							HX_STACK_LINE(786)
							hx::OrEq(this->__hatValue,(int)8);
						}
						;break;
						case (int)22: {
							HX_STACK_LINE(787)
							hx::OrEq(this->__hatValue,(int)2);
						}
						;break;
					}
				}
				else{
					HX_STACK_LINE(793)
					Dynamic _g = event->__Field(HX_CSTRING("code"),true);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(793)
					switch( (int)(_g)){
						case (int)19: {
							HX_STACK_LINE(795)
							hx::AndEq(this->__hatValue,(int)-2);
						}
						;break;
						case (int)20: {
							HX_STACK_LINE(796)
							hx::AndEq(this->__hatValue,(int)-5);
						}
						;break;
						case (int)21: {
							HX_STACK_LINE(797)
							hx::AndEq(this->__hatValue,(int)-9);
						}
						;break;
						case (int)22: {
							HX_STACK_LINE(798)
							hx::AndEq(this->__hatValue,(int)-3);
						}
						;break;
					}
				}
				HX_STACK_LINE(804)
				event->__FieldRef(HX_CSTRING("value")) = this->__hatValue;
				HX_STACK_LINE(805)
				this->__onJoystick(event,HX_CSTRING("hatMove"));
				HX_STACK_LINE(806)
				return null();
			}
			else{
				HX_STACK_LINE(810)
				hx::SubEq(event->__FieldRef(HX_CSTRING("code")),(int)96);
			}
			HX_STACK_LINE(815)
			::openfl::events::JoystickEvent _g10 = ::openfl::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_CSTRING("id"),true),event->__Field(HX_CSTRING("code"),true),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(815)
			joystickEvent = _g10;
		}
;
;
		HX_STACK_LINE(819)
		this->__dispatchEvent(joystickEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onJoystick,(void))

Void Stage_obj::__onKey( Dynamic event,::String type){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onKey",0x5f97eb40,"openfl._legacy.display.Stage.__onKey","openfl/_legacy/display/Stage.hx",824,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(826)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(827)
		::openfl::_legacy::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(829)
		if (((object != null()))){
			HX_STACK_LINE(831)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(835)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(837)
			Dynamic value = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(838)
			if (((bool((event->__Field(HX_CSTRING("value"),true) >= (int)96)) && bool((event->__Field(HX_CSTRING("value"),true) <= (int)122))))){
				HX_STACK_LINE(838)
				hx::SubEq(event->__FieldRef(HX_CSTRING("value")),(int)32);
			}
			HX_STACK_LINE(840)
			::openfl::_legacy::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(841)
			int flags = event->__Field(HX_CSTRING("flags"),true);		HX_STACK_VAR(flags,"flags");
			HX_STACK_LINE(843)
			::openfl::_legacy::events::KeyboardEvent keyboardEvent = ::openfl::_legacy::events::KeyboardEvent_obj::__new(type,true,true,event->__Field(HX_CSTRING("code"),true),event->__Field(HX_CSTRING("value"),true),(  (((((int(flags) & int(::openfl::_legacy::display::Stage_obj::efLocationRight))) == (int)0))) ? int((int)1) : int((int)0) ),(((int(flags) & int(::openfl::_legacy::display::Stage_obj::efCtrlDown))) != (int)0),(((int(flags) & int(::openfl::_legacy::display::Stage_obj::efAltDown))) != (int)0),(((int(flags) & int(::openfl::_legacy::display::Stage_obj::efShiftDown))) != (int)0),null(),null());		HX_STACK_VAR(keyboardEvent,"keyboardEvent");
			HX_STACK_LINE(844)
			object1->__fireEvent(keyboardEvent);
			HX_STACK_LINE(846)
			if ((keyboardEvent->__getIsCancelled())){
				HX_STACK_LINE(848)
				event->__FieldRef(HX_CSTRING("result")) = (int)1;
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onKey,(void))

Void Stage_obj::__onMouse( Dynamic event,::String type,bool fromMouse){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onMouse",0x933fe206,"openfl._legacy.display.Stage.__onMouse","openfl/_legacy/display/Stage.hx",879,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(fromMouse,"fromMouse")
		HX_STACK_LINE(881)
		int button = event->__Field(HX_CSTRING("value"),true);		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(883)
		if ((!(fromMouse))){
			HX_STACK_LINE(884)
			button = (int)0;
		}
		HX_STACK_LINE(886)
		int wheel = (int)0;		HX_STACK_VAR(wheel,"wheel");
		HX_STACK_LINE(888)
		if (((type == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN))){
			HX_STACK_LINE(890)
			if (((button > (int)2))){
				HX_STACK_LINE(892)
				return null();
			}
			HX_STACK_LINE(896)
			type = ::openfl::_legacy::display::Stage_obj::sDownEvents->__get(button);
		}
		else{
			HX_STACK_LINE(898)
			if (((type == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP))){
				HX_STACK_LINE(900)
				if (((button > (int)2))){
					HX_STACK_LINE(902)
					type = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;
					HX_STACK_LINE(903)
					if (((button == (int)3))){
						HX_STACK_LINE(903)
						wheel = (int)1;
					}
					else{
						HX_STACK_LINE(903)
						wheel = (int)-1;
					}
				}
				else{
					HX_STACK_LINE(907)
					type = ::openfl::_legacy::display::Stage_obj::sUpEvents->__get(button);
				}
			}
		}
		HX_STACK_LINE(913)
		if (((this->__dragObject != null()))){
			HX_STACK_LINE(915)
			::openfl::_legacy::geom::Point _g = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(915)
			this->__drag(_g);
		}
		HX_STACK_LINE(919)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(920)
		::openfl::_legacy::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(922)
		if (((object != null()))){
			HX_STACK_LINE(924)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(928)
		::openfl::_legacy::geom::Point local = null();		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(930)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(932)
			::openfl::_legacy::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(933)
			stack->reverse();
			HX_STACK_LINE(934)
			::openfl::_legacy::geom::Point _g1 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(934)
			::openfl::_legacy::geom::Point _g2 = object1->globalToLocal(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(934)
			local = _g2;
			HX_STACK_LINE(935)
			::openfl::_legacy::events::MouseEvent mouseEvent = ::openfl::_legacy::events::MouseEvent_obj::__create(type,event,local,object1);		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(936)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(938)
			if (((bool(fromMouse) || bool((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))))){
				HX_STACK_LINE(940)
				this->__checkInOuts(mouseEvent,stack,null());
			}
			HX_STACK_LINE(944)
			object1->__fireEvent(mouseEvent);
		}
		else{
			HX_STACK_LINE(948)
			::openfl::_legacy::geom::Point _g3 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(948)
			local = _g3;
			HX_STACK_LINE(949)
			::openfl::_legacy::events::MouseEvent mouseEvent = ::openfl::_legacy::events::MouseEvent_obj::__create(type,event,local,null());		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(950)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(952)
			if (((bool(fromMouse) || bool((((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0))))){
				HX_STACK_LINE(954)
				this->__checkInOuts(mouseEvent,stack,null());
			}
		}
		HX_STACK_LINE(960)
		::openfl::_legacy::display::InteractiveObject clickObject;		HX_STACK_VAR(clickObject,"clickObject");
		HX_STACK_LINE(960)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(960)
			clickObject = stack->__get((stack->length - (int)1)).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(960)
			clickObject = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(962)
		if (((bool(((bool((bool((type == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN)) || bool((type == ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN)))) || bool((type == ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN))))) && bool((button < (int)3))))){
			HX_STACK_LINE(964)
			this->__lastDown[button] = clickObject;
		}
		else{
			HX_STACK_LINE(966)
			if (((bool(((bool((bool((type == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP)) || bool((type == ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP)))) || bool((type == ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP))))) && bool((button < (int)3))))){
				HX_STACK_LINE(968)
				if (((clickObject == this->__lastDown->__get(button).StaticCast< ::openfl::_legacy::display::InteractiveObject >()))){
					HX_STACK_LINE(970)
					::openfl::_legacy::events::MouseEvent mouseEvent = ::openfl::_legacy::events::MouseEvent_obj::__create(::openfl::_legacy::display::Stage_obj::sClickEvents->__get(button),event,local,clickObject);		HX_STACK_VAR(mouseEvent,"mouseEvent");
					HX_STACK_LINE(971)
					clickObject->__fireEvent(mouseEvent);
					HX_STACK_LINE(973)
					if (((bool((button == (int)0)) && bool(clickObject->doubleClickEnabled)))){
						HX_STACK_LINE(975)
						int now = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(now,"now");
						HX_STACK_LINE(976)
						if ((((now - this->__lastClickTime) < (int)500))){
							HX_STACK_LINE(978)
							::openfl::_legacy::events::MouseEvent mouseEvent1 = ::openfl::_legacy::events::MouseEvent_obj::__create(::openfl::_legacy::events::MouseEvent_obj::DOUBLE_CLICK,event,local,clickObject);		HX_STACK_VAR(mouseEvent1,"mouseEvent1");
							HX_STACK_LINE(979)
							clickObject->__fireEvent(mouseEvent1);
							HX_STACK_LINE(980)
							this->__lastClickTime = (int)0;
						}
						else{
							HX_STACK_LINE(984)
							this->__lastClickTime = now;
						}
					}
				}
				HX_STACK_LINE(992)
				this->__lastDown[button] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onMouse,(void))

Void Stage_obj::__onRenderContext( bool active){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onRenderContext",0xdab01e1a,"openfl._legacy.display.Stage.__onRenderContext","openfl/_legacy/display/Stage.hx",999,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(active,"active")
		HX_STACK_LINE(1005)
		::openfl::_legacy::events::Event event = ::openfl::_legacy::events::Event_obj::__new((  ((!(active))) ? ::String(HX_CSTRING("glcontextlost")) : ::String(HX_CSTRING("glcontextrestored")) ),null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1006)
		this->__dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onRenderContext,(void))

Void Stage_obj::__onResize( Float width,Float height){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onResize",0x8112f2f3,"openfl._legacy.display.Stage.__onResize","openfl/_legacy/display/Stage.hx",1011,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1013)
		::openfl::_legacy::events::Event event = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::RESIZE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1014)
		this->__dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onResize,(void))

Void Stage_obj::__onSysWM( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onSysWM",0x0e41e244,"openfl._legacy.display.Stage.__onSysWM","openfl/_legacy/display/Stage.hx",1019,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1021)
		::openfl::_legacy::events::SystemEvent event1 = ::openfl::_legacy::events::SystemEvent_obj::__new(::openfl::_legacy::events::SystemEvent_obj::SYSTEM,false,false,event->__Field(HX_CSTRING("value"),true));		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(1022)
		this->__dispatchEvent(event1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onSysWM,(void))

Void Stage_obj::__onTouch( Dynamic event,::String type,::openfl::_legacy::display::TouchInfo touchInfo){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onTouch",0x9b0de3a0,"openfl._legacy.display.Stage.__onTouch","openfl/_legacy/display/Stage.hx",1027,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(touchInfo,"touchInfo")
		HX_STACK_LINE(1029)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1030)
		::openfl::_legacy::display::DisplayObject object = this->__findByID(event->__Field(HX_CSTRING("id"),true));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(1032)
		if (((object != null()))){
			HX_STACK_LINE(1034)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(1038)
		if (((stack->length > (int)0))){
			HX_STACK_LINE(1040)
			::openfl::_legacy::display::InteractiveObject object1 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(1041)
			stack->reverse();
			HX_STACK_LINE(1042)
			::openfl::_legacy::geom::Point _g = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1042)
			::openfl::_legacy::geom::Point local = object1->globalToLocal(_g);		HX_STACK_VAR(local,"local");
			HX_STACK_LINE(1043)
			::openfl::_legacy::events::TouchEvent touchEvent = ::openfl::_legacy::events::TouchEvent_obj::__create(type,event,local,object1,event->__Field(HX_CSTRING("scaleX"),true),event->__Field(HX_CSTRING("scaleY"),true));		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1044)
			touchEvent->touchPointID = event->__Field(HX_CSTRING("value"),true);
			HX_STACK_LINE(1045)
			touchEvent->isPrimaryTouchPoint = (((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0);
			HX_STACK_LINE(1047)
			this->__checkInOuts(touchEvent,stack,touchInfo);
			HX_STACK_LINE(1048)
			object1->__fireEvent(touchEvent);
		}
		else{
			HX_STACK_LINE(1052)
			::openfl::_legacy::geom::Point _g1 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_CSTRING("x"),true),event->__Field(HX_CSTRING("y"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1052)
			::openfl::_legacy::events::TouchEvent touchEvent = ::openfl::_legacy::events::TouchEvent_obj::__create(type,event,_g1,null(),event->__Field(HX_CSTRING("scaleX"),true),event->__Field(HX_CSTRING("scaleY"),true));		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1053)
			touchEvent->touchPointID = event->__Field(HX_CSTRING("value"),true);
			HX_STACK_LINE(1054)
			touchEvent->isPrimaryTouchPoint = (((int(event->__Field(HX_CSTRING("flags"),true)) & int((int)32768))) > (int)0);
			HX_STACK_LINE(1055)
			this->__checkInOuts(touchEvent,stack,touchInfo);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onTouch,(void))

Void Stage_obj::__pollTimers( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__pollTimers",0x39b5fb2d,"openfl._legacy.display.Stage.__pollTimers","openfl/_legacy/display/Stage.hx",1062,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1064)
		if ((::openfl::_legacy::display::Stage_obj::__exiting)){
			HX_STACK_LINE(1066)
			return null();
		}
		HX_STACK_LINE(1071)
		::haxe::Timer_obj::__checkTimers();
		HX_STACK_LINE(1074)
		::openfl::_legacy::media::SoundChannel_obj::__pollComplete();
		HX_STACK_LINE(1077)
		::openfl::_legacy::net::URLLoader_obj::__pollData();
		HX_STACK_LINE(1081)
		::DefaultAssetLibrary_obj::__poll();
		HX_STACK_LINE(1084)
		this->__checkRender();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__pollTimers,(void))

Void Stage_obj::__render( bool sendEnterFrame){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__render",0x60ee6dd6,"openfl._legacy.display.Stage.__render","openfl/_legacy/display/Stage.hx",1089,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sendEnterFrame,"sendEnterFrame")
		HX_STACK_LINE(1091)
		if ((!(this->active))){
			HX_STACK_LINE(1093)
			return null();
		}
		HX_STACK_LINE(1097)
		if ((sendEnterFrame)){
			HX_STACK_LINE(1103)
			::openfl::_legacy::events::Event _g = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::ENTER_FRAME,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1103)
			this->__broadcast(_g);
		}
		HX_STACK_LINE(1107)
		if ((this->__invalid)){
			HX_STACK_LINE(1109)
			this->__invalid = false;
			HX_STACK_LINE(1110)
			::openfl::_legacy::events::Event _g1 = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::RENDER,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1110)
			this->__broadcast(_g1);
		}
		HX_STACK_LINE(1119)
		::openfl::_legacy::display::Stage_obj::lime_render_stage(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__render,(void))

Void Stage_obj::__setActive( bool value){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__setActive",0xaa514488,"openfl._legacy.display.Stage.__setActive","openfl/_legacy/display/Stage.hx",1129,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1129)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1131)
		if (((this->active != value))){
			HX_STACK_LINE(1133)
			this->active = value;
			HX_STACK_LINE(1135)
			if ((!(this->active))){
				HX_STACK_LINE(1137)
				Float _g1 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1137)
				this->__lastRender = _g1;
				HX_STACK_LINE(1138)
				this->__nextRender = (this->__lastRender + this->__framePeriod);
			}
			HX_STACK_LINE(1142)
			::openfl::_legacy::events::Event event = ::openfl::_legacy::events::Event_obj::__new((  ((this->active)) ? ::String(::openfl::_legacy::events::Event_obj::ACTIVATE) : ::String(::openfl::_legacy::events::Event_obj::DEACTIVATE) ),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1143)
			this->__broadcast(event);
			HX_STACK_LINE(1145)
			if ((value)){
				HX_STACK_LINE(1147)
				this->__pollTimers();
				HX_STACK_LINE(1150)
				Array< ::Dynamic > focus = Array_obj< ::Dynamic >::__new().Add(this->get_focus());		HX_STACK_VAR(focus,"focus");
				HX_STACK_LINE(1151)
				if (((  (((focus->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >() != null()))) ? bool(focus->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >()->get_needsSoftKeyboard()) : bool(false) ))){

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Array< ::Dynamic >,focus,Array< ::Dynamic >,_g)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/_legacy/display/Stage.hx",1155,0x8b30a073)
						{
							HX_STACK_LINE(1155)
							if (((focus->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >() == _g->__get((int)0).StaticCast< ::openfl::_legacy::display::Stage >()->get_focus()))){
								HX_STACK_LINE(1157)
								_g->__get((int)0).StaticCast< ::openfl::_legacy::display::Stage >()->requestSoftKeyboard();
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(1153)
					::haxe::Timer_obj::delay( Dynamic(new _Function_4_1(focus,_g)),(int)30);
				}
			}
			else{
				HX_STACK_LINE(1169)
				this->__dismissSoftKeyboard();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__setActive,(void))

Float Stage_obj::__updateNextWake( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__updateNextWake",0xb4347860,"openfl._legacy.display.Stage.__updateNextWake","openfl/_legacy/display/Stage.hx",1220,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1225)
	Float nextWake = ::haxe::Timer_obj::__nextWake(315000000.0);		HX_STACK_VAR(nextWake,"nextWake");
	HX_STACK_LINE(1228)
	if (((bool((nextWake > 0.001)) && bool((::openfl::_legacy::media::SoundChannel_obj::__dynamicSoundCount > (int)0))))){
		HX_STACK_LINE(1230)
		nextWake = 0.001;
	}
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",1236,0x8b30a073)
			{
				HX_STACK_LINE(1236)
				return (  ((!(::openfl::_legacy::media::SoundChannel_obj::__completePending()))) ? bool(::openfl::_legacy::net::URLLoader_obj::__loadPending()) : bool(true) );
			}
			return null();
		}
	};
	HX_STACK_LINE(1236)
	if (((  (((nextWake > 0.02))) ? bool(_Function_1_1::Block()) : bool(false) ))){
		HX_STACK_LINE(1238)
		if (((bool(this->active) || bool(!(this->pauseWhenDeactivated))))){
			HX_STACK_LINE(1238)
			nextWake = 0.020;
		}
		else{
			HX_STACK_LINE(1238)
			nextWake = 0.500;
		}
	}
	HX_STACK_LINE(1243)
	Float _g = this->__nextFrameDue(nextWake);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1243)
	nextWake = _g;
	HX_STACK_LINE(1244)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_next_wake(this->__handle,nextWake);
	HX_STACK_LINE(1245)
	return nextWake;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__updateNextWake,return )

::openfl::display::StageAlign Stage_obj::set_align( ::openfl::display::StageAlign value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_align",0xb7da7bc8,"openfl._legacy.display.Stage.set_align","openfl/_legacy/display/Stage.hx",1266,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1268)
	int _g = value->__Index();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1268)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_align(this->__handle,_g);
	HX_STACK_LINE(1269)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_align,return )

::openfl::_legacy::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_focus",0xb78198cf,"openfl._legacy.display.Stage.get_focus","openfl/_legacy/display/Stage.hx",1311,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1313)
	int id = ::openfl::_legacy::display::Stage_obj::lime_stage_get_focus_id(this->__handle);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1314)
	::openfl::_legacy::display::DisplayObject object = this->__findByID(id);		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(1315)
	return object;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_frameRate",0xb5987430,"openfl._legacy.display.Stage.set_frameRate","openfl/_legacy/display/Stage.hx",1337,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1339)
	this->frameRate = value;
	HX_STACK_LINE(1340)
	if (((this->frameRate <= (int)0))){
		HX_STACK_LINE(1340)
		this->__framePeriod = this->frameRate;
	}
	else{
		HX_STACK_LINE(1340)
		this->__framePeriod = (Float(1.0) / Float(this->frameRate));
	}
	HX_STACK_LINE(1341)
	this->__nextRender = (this->__lastRender + this->__framePeriod);
	HX_STACK_LINE(1342)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

::openfl::display::StageScaleMode Stage_obj::set_scaleMode( ::openfl::display::StageScaleMode value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_scaleMode",0xa8473d90,"openfl._legacy.display.Stage.set_scaleMode","openfl/_legacy/display/Stage.hx",1378,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1380)
	int _g = value->__Index();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1380)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_scale_mode(this->__handle,_g);
	HX_STACK_LINE(1381)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_scaleMode,return )

::openfl::_legacy::display::Stage Stage_obj::get_stage( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_stage",0x3703a3b5,"openfl._legacy.display.Stage.get_stage","openfl/_legacy/display/Stage.hx",1421,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1421)
	return hx::ObjectPtr<OBJ_>(this);
}


Float Stage_obj::__earlyWakeup;

bool Stage_obj::__exiting;

int Stage_obj::OrientationPortrait;

int Stage_obj::efShiftDown;

int Stage_obj::efCtrlDown;

int Stage_obj::efAltDown;

int Stage_obj::efLocationRight;

Array< ::String > Stage_obj::sClickEvents;

Array< ::String > Stage_obj::sDownEvents;

Array< ::String > Stage_obj::sUpEvents;

Array< ::String > Stage_obj::__mouseChanges;

Array< ::String > Stage_obj::__touchChanges;

HX_BEGIN_DEFAULT_FUNC(__default_shouldRotateInterface,Stage_obj)
bool run(int orientation){
	HX_STACK_FRAME("openfl._legacy.display.Stage","shouldRotateInterface",0x83b6858b,"openfl._legacy.display.Stage.shouldRotateInterface","openfl/_legacy/display/Stage.hx",216,0x8b30a073)
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(216)
	return (orientation == ::openfl::_legacy::display::Stage_obj::OrientationPortrait);
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::shouldRotateInterface;

Dynamic Stage_obj::lime_set_stage_handler;

Dynamic Stage_obj::lime_render_stage;

Dynamic Stage_obj::lime_stage_get_focus_id;

Dynamic Stage_obj::lime_stage_set_scale_mode;

Dynamic Stage_obj::lime_stage_set_align;

Dynamic Stage_obj::lime_stage_set_next_wake;

Dynamic Stage_obj::lime_stage_request_render;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(onKey,"onKey");
	HX_MARK_MEMBER_NAME(onQuit,"onQuit");
	HX_MARK_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_MARK_MEMBER_NAME(renderRequest,"renderRequest");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(__hatValue,"__hatValue");
	HX_MARK_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_MARK_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_MARK_MEMBER_NAME(__invalid,"__invalid");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__lastDown,"__lastDown");
	HX_MARK_MEMBER_NAME(__lastRender,"__lastRender");
	HX_MARK_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_MARK_MEMBER_NAME(__nextRender,"__nextRender");
	HX_MARK_MEMBER_NAME(__touchInfo,"__touchInfo");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(onKey,"onKey");
	HX_VISIT_MEMBER_NAME(onQuit,"onQuit");
	HX_VISIT_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_VISIT_MEMBER_NAME(renderRequest,"renderRequest");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(__hatValue,"__hatValue");
	HX_VISIT_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_VISIT_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_VISIT_MEMBER_NAME(__invalid,"__invalid");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__lastDown,"__lastDown");
	HX_VISIT_MEMBER_NAME(__lastRender,"__lastRender");
	HX_VISIT_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_VISIT_MEMBER_NAME(__nextRender,"__nextRender");
	HX_VISIT_MEMBER_NAME(__touchInfo,"__touchInfo");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { return onQuit; }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__render") ) { return __render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__exiting") ) { return __exiting; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { return efAltDown; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { return sUpEvents; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"__invalid") ) { return __invalid; }
		if (HX_FIELD_EQ(inName,"__onFocus") ) { return __onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onSysWM") ) { return __onSysWM_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { return efCtrlDown; }
		if (HX_FIELD_EQ(inName,"__hatValue") ) { return __hatValue; }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { return __lastDown; }
		if (HX_FIELD_EQ(inName,"dummyTrace") ) { return dummyTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"__onChange") ) { return __onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { return efShiftDown; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { return sDownEvents; }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { return __touchInfo; }
		if (HX_FIELD_EQ(inName,"__setActive") ) { return __setActive_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { return sClickEvents; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { return __lastRender; }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { return __nextRender; }
		if (HX_FIELD_EQ(inName,"__onJoystick") ) { return __onJoystick_dyn(); }
		if (HX_FIELD_EQ(inName,"__pollTimers") ) { return __pollTimers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { return __earlyWakeup; }
		if (HX_FIELD_EQ(inName,"renderRequest") ) { return renderRequest; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { return __joyAxisData; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { return __framePeriod; }
		if (HX_FIELD_EQ(inName,"__checkInOuts") ) { return __checkInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkRender") ) { return __checkRender_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { return __mouseChanges; }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { return __touchChanges; }
		if (HX_FIELD_EQ(inName,"__nextFrameDue") ) { return __nextFrameDue_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { return efLocationRight; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"__updateNextWake") ) { return __updateNextWake_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_render_stage") ) { return lime_render_stage; }
		if (HX_FIELD_EQ(inName,"__onRenderContext") ) { return __onRenderContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { return __focusOverObjects; }
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { return __mouseOverObjects; }
		if (HX_FIELD_EQ(inName,"__checkFocusInOuts") ) { return __checkFocusInOuts_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { return OrientationPortrait; }
		if (HX_FIELD_EQ(inName,"__processStageEvent") ) { return __processStageEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_stage_set_align") ) { return lime_stage_set_align; }
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { return pauseWhenDeactivated; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { return shouldRotateInterface; }
		if (HX_FIELD_EQ(inName,"__doProcessStageEvent") ) { return __doProcessStageEvent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_set_stage_handler") ) { return lime_set_stage_handler; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_id") ) { return lime_stage_get_focus_id; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_stage_set_next_wake") ) { return lime_stage_set_next_wake; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_stage_set_scale_mode") ) { return lime_stage_set_scale_mode; }
		if (HX_FIELD_EQ(inName,"lime_stage_request_render") ) { return lime_stage_request_render; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onKey") ) { onKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { onQuit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__exiting") ) { __exiting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { sUpEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp) return set_frameRate(inValue);frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalid") ) { __invalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__hatValue") ) { __hatValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { __lastDown=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { sDownEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { __touchInfo=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { sClickEvents=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { __lastRender=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { __nextRender=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { __earlyWakeup=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderRequest") ) { renderRequest=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { __joyAxisData=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { __framePeriod=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { __mouseChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { __touchChanges=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { efLocationRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_render_stage") ) { lime_render_stage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { __focusOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { __mouseOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { OrientationPortrait=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_stage_set_align") ) { lime_stage_set_align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { pauseWhenDeactivated=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { shouldRotateInterface=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_set_stage_handler") ) { lime_set_stage_handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_id") ) { lime_stage_get_focus_id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_stage_set_next_wake") ) { lime_stage_set_next_wake=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_stage_set_scale_mode") ) { lime_stage_set_scale_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_stage_request_render") ) { lime_stage_request_render=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("allowsFullScreen"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("pauseWhenDeactivated"));
	outFields->push(HX_CSTRING("stage3Ds"));
	outFields->push(HX_CSTRING("__hatValue"));
	outFields->push(HX_CSTRING("__joyAxisData"));
	outFields->push(HX_CSTRING("__dragBounds"));
	outFields->push(HX_CSTRING("__dragObject"));
	outFields->push(HX_CSTRING("__dragOffsetX"));
	outFields->push(HX_CSTRING("__dragOffsetY"));
	outFields->push(HX_CSTRING("__focusOverObjects"));
	outFields->push(HX_CSTRING("__framePeriod"));
	outFields->push(HX_CSTRING("__invalid"));
	outFields->push(HX_CSTRING("__lastClickTime"));
	outFields->push(HX_CSTRING("__lastDown"));
	outFields->push(HX_CSTRING("__lastRender"));
	outFields->push(HX_CSTRING("__mouseOverObjects"));
	outFields->push(HX_CSTRING("__nextRender"));
	outFields->push(HX_CSTRING("__touchInfo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__earlyWakeup"),
	HX_CSTRING("__exiting"),
	HX_CSTRING("OrientationPortrait"),
	HX_CSTRING("efShiftDown"),
	HX_CSTRING("efCtrlDown"),
	HX_CSTRING("efAltDown"),
	HX_CSTRING("efLocationRight"),
	HX_CSTRING("sClickEvents"),
	HX_CSTRING("sDownEvents"),
	HX_CSTRING("sUpEvents"),
	HX_CSTRING("__mouseChanges"),
	HX_CSTRING("__touchChanges"),
	HX_CSTRING("shouldRotateInterface"),
	HX_CSTRING("lime_set_stage_handler"),
	HX_CSTRING("lime_render_stage"),
	HX_CSTRING("lime_stage_get_focus_id"),
	HX_CSTRING("lime_stage_set_scale_mode"),
	HX_CSTRING("lime_stage_set_align"),
	HX_CSTRING("lime_stage_set_next_wake"),
	HX_CSTRING("lime_stage_request_render"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_CSTRING("allowsFullScreen")},
	{hx::fsBool,(int)offsetof(Stage_obj,active),HX_CSTRING("active")},
	{hx::fsFloat,(int)offsetof(Stage_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,onKey),HX_CSTRING("onKey")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,onQuit),HX_CSTRING("onQuit")},
	{hx::fsBool,(int)offsetof(Stage_obj,pauseWhenDeactivated),HX_CSTRING("pauseWhenDeactivated")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,renderRequest),HX_CSTRING("renderRequest")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_CSTRING("stage3Ds")},
	{hx::fsInt,(int)offsetof(Stage_obj,__hatValue),HX_CSTRING("__hatValue")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,__joyAxisData),HX_CSTRING("__joyAxisData")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_CSTRING("__dragBounds")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_CSTRING("__dragObject")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_CSTRING("__dragOffsetX")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_CSTRING("__dragOffsetY")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__focusOverObjects),HX_CSTRING("__focusOverObjects")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__framePeriod),HX_CSTRING("__framePeriod")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalid),HX_CSTRING("__invalid")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_CSTRING("__lastClickTime")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__lastDown),HX_CSTRING("__lastDown")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__lastRender),HX_CSTRING("__lastRender")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__mouseOverObjects),HX_CSTRING("__mouseOverObjects")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__nextRender),HX_CSTRING("__nextRender")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,__touchInfo),HX_CSTRING("__touchInfo")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("allowsFullScreen"),
	HX_CSTRING("active"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("onKey"),
	HX_CSTRING("onQuit"),
	HX_CSTRING("pauseWhenDeactivated"),
	HX_CSTRING("renderRequest"),
	HX_CSTRING("stage3Ds"),
	HX_CSTRING("__hatValue"),
	HX_CSTRING("__joyAxisData"),
	HX_CSTRING("__dragBounds"),
	HX_CSTRING("__dragObject"),
	HX_CSTRING("__dragOffsetX"),
	HX_CSTRING("__dragOffsetY"),
	HX_CSTRING("__focusOverObjects"),
	HX_CSTRING("__framePeriod"),
	HX_CSTRING("__invalid"),
	HX_CSTRING("__lastClickTime"),
	HX_CSTRING("__lastDown"),
	HX_CSTRING("__lastRender"),
	HX_CSTRING("__mouseOverObjects"),
	HX_CSTRING("__nextRender"),
	HX_CSTRING("__touchInfo"),
	HX_CSTRING("__checkFocusInOuts"),
	HX_CSTRING("__checkInOuts"),
	HX_CSTRING("__checkRender"),
	HX_CSTRING("dummyTrace"),
	HX_CSTRING("__doProcessStageEvent"),
	HX_CSTRING("__processStageEvent"),
	HX_CSTRING("__drag"),
	HX_CSTRING("__nextFrameDue"),
	HX_CSTRING("__onChange"),
	HX_CSTRING("__onFocus"),
	HX_CSTRING("__onJoystick"),
	HX_CSTRING("__onKey"),
	HX_CSTRING("__onMouse"),
	HX_CSTRING("__onRenderContext"),
	HX_CSTRING("__onResize"),
	HX_CSTRING("__onSysWM"),
	HX_CSTRING("__onTouch"),
	HX_CSTRING("__pollTimers"),
	HX_CSTRING("__render"),
	HX_CSTRING("__setActive"),
	HX_CSTRING("__updateNextWake"),
	HX_CSTRING("set_align"),
	HX_CSTRING("get_focus"),
	HX_CSTRING("set_frameRate"),
	HX_CSTRING("set_scaleMode"),
	HX_CSTRING("get_stage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_MARK_MEMBER_NAME(Stage_obj::__exiting,"__exiting");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_set_stage_handler,"lime_set_stage_handler");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_render_stage,"lime_render_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_focus_id,"lime_stage_get_focus_id");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_scale_mode,"lime_stage_set_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_align,"lime_stage_set_align");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_next_wake,"lime_stage_set_next_wake");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_request_render,"lime_stage_request_render");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_VISIT_MEMBER_NAME(Stage_obj::__exiting,"__exiting");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_VISIT_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_set_stage_handler,"lime_set_stage_handler");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_render_stage,"lime_render_stage");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_focus_id,"lime_stage_get_focus_id");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_scale_mode,"lime_stage_set_scale_mode");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_align,"lime_stage_set_align");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_next_wake,"lime_stage_set_next_wake");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_request_render,"lime_stage_request_render");
};

#endif

Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.Stage"), hx::TCanCast< Stage_obj> ,sStaticFields,sMemberFields,
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

void Stage_obj::__boot()
{
	__earlyWakeup= 0.005;
	__exiting= false;
	OrientationPortrait= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efLocationRight= (int)16384;
	sClickEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("click")).Add(HX_CSTRING("middleClick")).Add(HX_CSTRING("rightClick"));
	sDownEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("mouseDown")).Add(HX_CSTRING("middleMouseDown")).Add(HX_CSTRING("rightMouseDown"));
	sUpEvents= Array_obj< ::String >::__new().Add(HX_CSTRING("mouseUp")).Add(HX_CSTRING("middleMouseUp")).Add(HX_CSTRING("rightMouseUp"));
	__mouseChanges= Array_obj< ::String >::__new().Add(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT).Add(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER).Add(::openfl::_legacy::events::MouseEvent_obj::ROLL_OUT).Add(::openfl::_legacy::events::MouseEvent_obj::ROLL_OVER);
	__touchChanges= Array_obj< ::String >::__new().Add(::openfl::_legacy::events::TouchEvent_obj::TOUCH_OUT).Add(::openfl::_legacy::events::TouchEvent_obj::TOUCH_OVER).Add(::openfl::_legacy::events::TouchEvent_obj::TOUCH_ROLL_OUT).Add(::openfl::_legacy::events::TouchEvent_obj::TOUCH_ROLL_OVER);
	shouldRotateInterface = new __default_shouldRotateInterface;

	lime_set_stage_handler= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_set_stage_handler"),(int)4);
	lime_render_stage= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_render_stage"),(int)1);
	lime_stage_get_focus_id= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_stage_get_focus_id"),(int)1);
	lime_stage_set_scale_mode= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_stage_set_scale_mode"),(int)2);
	lime_stage_set_align= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_stage_set_align"),(int)2);
	lime_stage_set_next_wake= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_stage_set_next_wake"),(int)2);
	lime_stage_request_render= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_stage_request_render"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
