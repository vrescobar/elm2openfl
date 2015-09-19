#ifndef INCLUDED_openfl__legacy_media_Sound
#define INCLUDED_openfl__legacy_media_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/events/EventDispatcher.h>
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,InternalAudioType)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
namespace openfl{
namespace _legacy{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sound"); }

		::openfl::_legacy::media::InternalAudioType __audioType;
		Dynamic __handle;
		bool __loading;
		bool __dynamicSound;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace media

#endif /* INCLUDED_openfl__legacy_media_Sound */ 
