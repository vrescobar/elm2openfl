#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#define INCLUDED_openfl__legacy_display_InteractiveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/DisplayObject.h>
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  InteractiveObject_obj : public ::openfl::_legacy::display::DisplayObject_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObject_obj super;
		typedef InteractiveObject_obj OBJ_;
		InteractiveObject_obj();
		Void __construct(Dynamic handle,::String type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InteractiveObject_obj > __new(Dynamic handle,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractiveObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("InteractiveObject"); }

		bool doubleClickEnabled;
		bool __mouseEnabled;
		virtual bool __dismissSoftKeyboard( );
		Dynamic __dismissSoftKeyboard_dyn();

		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual ::openfl::_legacy::display::InteractiveObject __asInteractiveObject( );

		virtual bool get_needsSoftKeyboard( );
		Dynamic get_needsSoftKeyboard_dyn();

		static Dynamic lime_display_object_get_needs_soft_keyboard;
		static Dynamic &lime_display_object_get_needs_soft_keyboard_dyn() { return lime_display_object_get_needs_soft_keyboard;}
		static Dynamic lime_display_object_dismiss_soft_keyboard;
		static Dynamic &lime_display_object_dismiss_soft_keyboard_dyn() { return lime_display_object_dismiss_soft_keyboard;}
		static Dynamic lime_display_object_request_soft_keyboard;
		static Dynamic &lime_display_object_request_soft_keyboard_dyn() { return lime_display_object_request_soft_keyboard;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_InteractiveObject */ 
