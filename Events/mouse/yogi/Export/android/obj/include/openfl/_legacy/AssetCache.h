#ifndef INCLUDED_openfl__legacy_AssetCache
#define INCLUDED_openfl__legacy_AssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/IAssetCache.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_legacy,AssetCache)
HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  AssetCache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetCache_obj OBJ_;
		AssetCache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetCache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetCache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::openfl::_legacy::IAssetCache_obj *()
			{ return new ::openfl::_legacy::IAssetCache_delegate_< AssetCache_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AssetCache"); }

		::haxe::ds::StringMap bitmapData;
		::haxe::ds::StringMap font;
		::haxe::ds::StringMap sound;
		bool __enabled;
		virtual Void clear( ::String prefix);
		Dynamic clear_dyn();

		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id);
		Dynamic getBitmapData_dyn();

		virtual bool hasBitmapData( ::String id);
		Dynamic hasBitmapData_dyn();

		virtual Void setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData);
		Dynamic setBitmapData_dyn();

		virtual bool get_enabled( );
		Dynamic get_enabled_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetCache */ 
