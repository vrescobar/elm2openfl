#ifndef INCLUDED_openfl__legacy_net_URLLoader
#define INCLUDED_openfl__legacy_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/events/EventDispatcher.h>
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS2(openfl,net,URLLoaderDataFormat)
namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::openfl::_legacy::net::URLRequest request);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< URLLoader_obj > __new(::openfl::_legacy::net::URLRequest request);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("URLLoader"); }

		int bytesLoaded;
		int bytesTotal;
		Dynamic data;
		::openfl::net::URLLoaderDataFormat dataFormat;
		int state;
		Dynamic __handle;
		Dynamic __onComplete;
		Dynamic &__onComplete_dyn() { return __onComplete;}
		virtual Void dispatchHTTPStatus( int code);
		Dynamic dispatchHTTPStatus_dyn();

		virtual Void load( ::openfl::_legacy::net::URLRequest request);
		Dynamic load_dyn();

		virtual Void loadInCURLThread( ::openfl::_legacy::net::URLRequest request);
		Dynamic loadInCURLThread_dyn();

		virtual Void onError( ::String msg);
		Dynamic onError_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void __dataComplete( );
		Dynamic __dataComplete_dyn();

		static Dynamic eventsQueue;
		static bool __loadPending( );
		static Dynamic __loadPending_dyn();

		static Void enqueueEvent( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::events::Event event);
		static Dynamic enqueueEvent_dyn();

		static Void __pollData( );
		static Dynamic __pollData_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_URLLoader */ 
