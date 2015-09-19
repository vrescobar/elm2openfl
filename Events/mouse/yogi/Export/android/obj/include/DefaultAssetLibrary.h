#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/AssetLibrary.h>
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(cpp,vm,Deque)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_legacy,AssetLibrary)
HX_DECLARE_CLASS2(openfl,_legacy,AssetType)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  DefaultAssetLibrary_obj : public ::openfl::_legacy::AssetLibrary_obj{
	public:
		typedef ::openfl::_legacy::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultAssetLibrary"); }

		::haxe::ds::StringMap className;
		::haxe::ds::StringMap path;
		::haxe::ds::StringMap type;
		virtual bool exists( ::String id,::openfl::_legacy::AssetType type);

		virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id);

		virtual bool isLocal( ::String id,::openfl::_legacy::AssetType type);

		virtual Void loadManifest( );
		Dynamic loadManifest_dyn();

		static int loaded;
		static int loading;
		static ::cpp::vm::Deque workerIncomingQueue;
		static ::cpp::vm::Deque workerResult;
		static ::cpp::vm::Thread workerThread;
		static Void __doWork( );
		static Dynamic __doWork_dyn();

		static Void __poll( );
		static Dynamic __poll_dyn();

};


#endif /* INCLUDED_DefaultAssetLibrary */ 
