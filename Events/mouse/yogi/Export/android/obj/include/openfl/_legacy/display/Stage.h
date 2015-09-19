#ifndef INCLUDED_openfl__legacy_display_Stage
#define INCLUDED_openfl__legacy_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/DisplayObjectContainer.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,display,TouchInfo)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display,StageAlign)
HX_DECLARE_CLASS2(openfl,display,StageScaleMode)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage_obj : public ::openfl::_legacy::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(Dynamic handle,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Stage_obj > __new(Dynamic handle,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stage"); }

		bool allowsFullScreen;
		bool active;
		Float frameRate;
		Dynamic onKey;
		Dynamic &onKey_dyn() { return onKey;}
		Dynamic onQuit;
		Dynamic &onQuit_dyn() { return onQuit;}
		bool pauseWhenDeactivated;
		Dynamic renderRequest;
		Dynamic &renderRequest_dyn() { return renderRequest;}
		Array< ::Dynamic > stage3Ds;
		int __hatValue;
		::haxe::ds::IntMap __joyAxisData;
		::openfl::_legacy::geom::Rectangle __dragBounds;
		::openfl::_legacy::display::Sprite __dragObject;
		Float __dragOffsetX;
		Float __dragOffsetY;
		Array< ::Dynamic > __focusOverObjects;
		Float __framePeriod;
		bool __invalid;
		int __lastClickTime;
		Array< ::Dynamic > __lastDown;
		Float __lastRender;
		Array< ::Dynamic > __mouseOverObjects;
		Float __nextRender;
		::haxe::ds::IntMap __touchInfo;
		virtual Void __checkFocusInOuts( Dynamic event,Array< ::Dynamic > stack);
		Dynamic __checkFocusInOuts_dyn();

		virtual bool __checkInOuts( ::openfl::_legacy::events::MouseEvent event,Array< ::Dynamic > stack,::openfl::_legacy::display::TouchInfo touchInfo);
		Dynamic __checkInOuts_dyn();

		virtual Void __checkRender( );
		Dynamic __checkRender_dyn();

		virtual Void dummyTrace( );
		Dynamic dummyTrace_dyn();

		virtual Float __doProcessStageEvent( Dynamic event);
		Dynamic __doProcessStageEvent_dyn();

		virtual Dynamic __processStageEvent( Dynamic event);
		Dynamic __processStageEvent_dyn();

		virtual Void __drag( ::openfl::_legacy::geom::Point mouse);
		Dynamic __drag_dyn();

		virtual Float __nextFrameDue( Float otherTimers);
		Dynamic __nextFrameDue_dyn();

		virtual Void __onChange( Dynamic event);
		Dynamic __onChange_dyn();

		virtual Void __onFocus( Dynamic event);
		Dynamic __onFocus_dyn();

		virtual Void __onJoystick( Dynamic event,::String type);
		Dynamic __onJoystick_dyn();

		virtual Void __onKey( Dynamic event,::String type);
		Dynamic __onKey_dyn();

		virtual Void __onMouse( Dynamic event,::String type,bool fromMouse);
		Dynamic __onMouse_dyn();

		virtual Void __onRenderContext( bool active);
		Dynamic __onRenderContext_dyn();

		virtual Void __onResize( Float width,Float height);
		Dynamic __onResize_dyn();

		virtual Void __onSysWM( Dynamic event);
		Dynamic __onSysWM_dyn();

		virtual Void __onTouch( Dynamic event,::String type,::openfl::_legacy::display::TouchInfo touchInfo);
		Dynamic __onTouch_dyn();

		virtual Void __pollTimers( );
		Dynamic __pollTimers_dyn();

		virtual Void __render( bool sendEnterFrame);
		Dynamic __render_dyn();

		virtual Void __setActive( bool value);
		Dynamic __setActive_dyn();

		virtual Float __updateNextWake( );
		Dynamic __updateNextWake_dyn();

		virtual ::openfl::display::StageAlign set_align( ::openfl::display::StageAlign value);
		Dynamic set_align_dyn();

		virtual ::openfl::_legacy::display::InteractiveObject get_focus( );
		Dynamic get_focus_dyn();

		virtual Float set_frameRate( Float value);
		Dynamic set_frameRate_dyn();

		virtual ::openfl::display::StageScaleMode set_scaleMode( ::openfl::display::StageScaleMode value);
		Dynamic set_scaleMode_dyn();

		virtual ::openfl::_legacy::display::Stage get_stage( );

		static Float __earlyWakeup;
		static bool __exiting;
		static int OrientationPortrait;
		static int efShiftDown;
		static int efCtrlDown;
		static int efAltDown;
		static int efLocationRight;
		static Array< ::String > sClickEvents;
		static Array< ::String > sDownEvents;
		static Array< ::String > sUpEvents;
		static Array< ::String > __mouseChanges;
		static Array< ::String > __touchChanges;
		static Dynamic shouldRotateInterface;
		static inline Dynamic &shouldRotateInterface_dyn() {return shouldRotateInterface; }

		static Dynamic lime_set_stage_handler;
		static Dynamic &lime_set_stage_handler_dyn() { return lime_set_stage_handler;}
		static Dynamic lime_render_stage;
		static Dynamic &lime_render_stage_dyn() { return lime_render_stage;}
		static Dynamic lime_stage_get_focus_id;
		static Dynamic &lime_stage_get_focus_id_dyn() { return lime_stage_get_focus_id;}
		static Dynamic lime_stage_set_scale_mode;
		static Dynamic &lime_stage_set_scale_mode_dyn() { return lime_stage_set_scale_mode;}
		static Dynamic lime_stage_set_align;
		static Dynamic &lime_stage_set_align_dyn() { return lime_stage_set_align;}
		static Dynamic lime_stage_set_next_wake;
		static Dynamic &lime_stage_set_next_wake_dyn() { return lime_stage_set_next_wake;}
		static Dynamic lime_stage_request_render;
		static Dynamic &lime_stage_request_render_dyn() { return lime_stage_request_render;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Stage */ 
