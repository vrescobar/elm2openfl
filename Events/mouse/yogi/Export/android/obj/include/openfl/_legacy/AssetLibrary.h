#ifndef INCLUDED_openfl__legacy_AssetLibrary
#define INCLUDED_openfl__legacy_AssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  AssetLibrary_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetLibrary_obj OBJ_;
		AssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetLibrary_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AssetLibrary"); }

		Dynamic eventCallback;
		virtual bool exists( ::String id,::openfl::_legacy::AssetType type);
		Dynamic exists_dyn();

		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id);
		Dynamic getBitmapData_dyn();

		virtual bool isLocal( ::String id,::openfl::_legacy::AssetType type);
		Dynamic isLocal_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_AssetLibrary */ 
