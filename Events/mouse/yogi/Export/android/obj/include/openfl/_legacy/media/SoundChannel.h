#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#define INCLUDED_openfl__legacy_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/events/EventDispatcher.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,AudioThreadState)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,media,SoundChannel)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundChannel_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SoundChannel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SoundChannel"); }

		::openfl::_legacy::events::EventDispatcher __dataProvider;
		Dynamic __handle;
		::openfl::_legacy::media::Sound __soundInstance;
		::openfl::_legacy::utils::ByteArray __dynamicBytes;
		bool __thread_completed;
		bool __addedToThread;
		virtual bool __checkComplete( );
		Dynamic __checkComplete_dyn();

		virtual bool __runCheckComplete( );
		Dynamic __runCheckComplete_dyn();

		static int __dynamicSoundCount;
		static Array< ::Dynamic > __incompleteList;
		static ::openfl::_legacy::media::AudioThreadState __audioState;
		static bool __audioThreadIsIdle;
		static bool __audioThreadRunning;
		static Void __checkCompleteBackgroundThread( );
		static Dynamic __checkCompleteBackgroundThread_dyn();

		static bool __completePending( );
		static Dynamic __completePending_dyn();

		static Void __pollComplete( );
		static Dynamic __pollComplete_dyn();

		static Dynamic lime_sound_channel_is_complete;
		static Dynamic &lime_sound_channel_is_complete_dyn() { return lime_sound_channel_is_complete;}
		static Dynamic lime_sound_channel_get_data_position;
		static Dynamic &lime_sound_channel_get_data_position_dyn() { return lime_sound_channel_get_data_position;}
		static Dynamic lime_sound_channel_needs_data;
		static Dynamic &lime_sound_channel_needs_data_dyn() { return lime_sound_channel_needs_data;}
		static Dynamic lime_sound_channel_add_data;
		static Dynamic &lime_sound_channel_add_data_dyn() { return lime_sound_channel_add_data;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace media

#endif /* INCLUDED_openfl__legacy_media_SoundChannel */ 
