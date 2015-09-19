#ifndef INCLUDED_openfl__legacy_Lib
#define INCLUDED_openfl__legacy_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,_legacy,Lib)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,MovieClip)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvent)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  Lib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Lib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Lib"); }

		static int FULLSCREEN;
		static int RESIZABLE;
		static int HARDWARE;
		static int ALLOW_SHADERS;
		static int REQUIRE_SHADERS;
		static ::String company;
		static ::String file;
		static int initHeight;
		static int initWidth;
		static ::String packageName;
		static bool silentRecreate;
		static ::String version;
		static ::openfl::_legacy::display::MovieClip __current;
		static bool __isInit;
		static Dynamic __mainFrame;
		static ::haxe::ds::StringMap __moduleNames;
		static ::openfl::_legacy::display::Stage __stage;
		static Dynamic __uncaughtExceptionHandler;
		static Dynamic &__uncaughtExceptionHandler_dyn() { return __uncaughtExceptionHandler;}
		static Void close( );
		static Dynamic close_dyn();

		static Void create( Dynamic onLoaded,int width,int height,hx::Null< Float >  frameRate,hx::Null< int >  color,hx::Null< int >  flags,::String title,::openfl::_legacy::display::BitmapData icon,::Class stageClass);
		static Dynamic create_dyn();

		static ::String findHaxeLib( ::String library);
		static Dynamic findHaxeLib_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args);
		static Dynamic load_dyn();

		static Void loaderTrace( ::String message);
		static Dynamic loaderTrace_dyn();

		static Void rethrow( Dynamic error);
		static Dynamic rethrow_dyn();

		static ::String sysName( );
		static Dynamic sysName_dyn();

		static Dynamic tryLoad( ::String name,::String library,::String func,int args);
		static Dynamic tryLoad_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static Void setPackage( ::String company,::String file,::String packageName,::String version);
		static Dynamic setPackage_dyn();

		static ::openfl::_legacy::display::MovieClip get_current( );
		static Dynamic get_current_dyn();

		static Dynamic lime_set_package;
		static Dynamic &lime_set_package_dyn() { return lime_set_package;}
		static Dynamic lime_get_frame_stage;
		static Dynamic &lime_get_frame_stage_dyn() { return lime_get_frame_stage;}
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_Lib */ 
