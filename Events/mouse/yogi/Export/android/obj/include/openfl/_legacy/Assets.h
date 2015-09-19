#ifndef INCLUDED_openfl__legacy_Assets
#define INCLUDED_openfl__legacy_Assets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,Assets)
HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  Assets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assets_obj OBJ_;
		Assets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Assets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Assets_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Assets"); }

		static ::openfl::_legacy::IAssetCache cache;
		static ::haxe::ds::StringMap libraries;
		static ::openfl::_legacy::events::EventDispatcher dispatcher;
		static bool initialized;
		static bool dispatchEvent( ::openfl::_legacy::events::Event event);
		static Dynamic dispatchEvent_dyn();

		static ::openfl::_legacy::display::BitmapData getBitmapData( ::String id,hx::Null< bool >  useCache);
		static Dynamic getBitmapData_dyn();

		static ::openfl::_legacy::AssetLibrary getLibrary( ::String name);
		static Dynamic getLibrary_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static bool isValidBitmapData( ::openfl::_legacy::display::BitmapData bitmapData);
		static Dynamic isValidBitmapData_dyn();

		static Void registerLibrary( ::String name,::openfl::_legacy::AssetLibrary library);
		static Dynamic registerLibrary_dyn();

		static Void unloadLibrary( ::String name);
		static Dynamic unloadLibrary_dyn();

		static Void library_onEvent( ::openfl::_legacy::AssetLibrary library,::String type);
		static Dynamic library_onEvent_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Assets */ 
