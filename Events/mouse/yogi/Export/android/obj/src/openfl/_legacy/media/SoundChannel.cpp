#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_AudioThreadState
#include <openfl/_legacy/media/AudioThreadState.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#include <openfl/_legacy/media/InternalAudioType.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace media{

Void SoundChannel_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.media.SoundChannel","new",0xd9ab3474,"openfl._legacy.media.SoundChannel.new","openfl/_legacy/media/SoundChannel.hx",26,0xd2a8ca59)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(55)
	this->__addedToThread = false;
	HX_STACK_LINE(54)
	this->__thread_completed = false;
	HX_STACK_LINE(44)
	this->__dynamicBytes = null();
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new()
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct();
	return result;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > result = new SoundChannel_obj();
	result->__construct();
	return result;}

bool SoundChannel_obj::__checkComplete( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__checkComplete",0x93bbc895,"openfl._legacy.media.SoundChannel.__checkComplete","openfl/_legacy/media/SoundChannel.hx",128,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	if (((this->__handle != null()))){
		HX_STACK_LINE(130)
		if (((  (((this->__dataProvider != null()))) ? bool(::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_needs_data(this->__handle)) : bool(false) ))){
			HX_STACK_LINE(132)
			::openfl::events::SampleDataEvent request = ::openfl::events::SampleDataEvent_obj::__new(::openfl::events::SampleDataEvent_obj::SAMPLE_DATA,null(),null());		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(133)
			Float _g = ::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_get_data_position(this->__handle);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			request->position = _g;
			HX_STACK_LINE(135)
			if (((this->__dynamicBytes->length > (int)0))){
				HX_STACK_LINE(137)
				::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_add_data(this->__handle,this->__dynamicBytes);
			}
			HX_STACK_LINE(141)
			this->__dataProvider->dispatchEvent(request);
			HX_STACK_LINE(142)
			this->__dynamicBytes = request->data;
		}
		HX_STACK_LINE(148)
		if (((bool(this->__addedToThread) || bool((bool((this->__soundInstance != null())) && bool((this->__soundInstance->__audioType == ::openfl::_legacy::media::InternalAudioType_obj::MUSIC))))))){
			HX_STACK_LINE(150)
			if (((::openfl::_legacy::media::SoundChannel_obj::__audioState == null()))){
				HX_STACK_LINE(152)
				::openfl::_legacy::media::AudioThreadState _g1 = ::openfl::_legacy::media::AudioThreadState_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(152)
				::openfl::_legacy::media::SoundChannel_obj::__audioState = _g1;
				HX_STACK_LINE(154)
				::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning = true;
				HX_STACK_LINE(155)
				::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = false;
				HX_STACK_LINE(157)
				::cpp::vm::Thread _g2 = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(157)
				::openfl::_legacy::media::SoundChannel_obj::__audioState->mainThread = _g2;
				HX_STACK_LINE(158)
				::cpp::vm::Thread _g3 = ::cpp::vm::Thread_obj::create(::openfl::_legacy::media::SoundChannel_obj::__checkCompleteBackgroundThread_dyn());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(158)
				::openfl::_legacy::media::SoundChannel_obj::__audioState->audioThread = _g3;
			}
			HX_STACK_LINE(162)
			if ((!(this->__addedToThread))){
				HX_STACK_LINE(164)
				::openfl::_legacy::media::SoundChannel_obj::__audioState->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(165)
				this->__addedToThread = true;
			}
			HX_STACK_LINE(169)
			return this->__thread_completed;
		}
		else{
			HX_STACK_LINE(175)
			if ((this->__runCheckComplete())){
				HX_STACK_LINE(177)
				return true;
			}
		}
		HX_STACK_LINE(181)
		return false;
	}
	else{
		HX_STACK_LINE(185)
		return true;
	}
	HX_STACK_LINE(128)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkComplete,return )

bool SoundChannel_obj::__runCheckComplete( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__runCheckComplete",0x2cebb8e2,"openfl._legacy.media.SoundChannel.__runCheckComplete","openfl/_legacy/media/SoundChannel.hx",244,0xd2a8ca59)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	if ((::openfl::_legacy::media::SoundChannel_obj::lime_sound_channel_is_complete(this->__handle))){
		HX_STACK_LINE(248)
		this->__soundInstance = null();
		HX_STACK_LINE(249)
		this->__handle = null();
		HX_STACK_LINE(251)
		if (((this->__dataProvider != null()))){
			HX_STACK_LINE(253)
			(::openfl::_legacy::media::SoundChannel_obj::__dynamicSoundCount)--;
		}
		HX_STACK_LINE(257)
		::openfl::_legacy::events::Event completeEvent = ::openfl::_legacy::events::Event_obj::__new(::openfl::_legacy::events::Event_obj::SOUND_COMPLETE,null(),null());		HX_STACK_VAR(completeEvent,"completeEvent");
		HX_STACK_LINE(258)
		this->dispatchEvent(completeEvent);
		HX_STACK_LINE(260)
		return true;
	}
	HX_STACK_LINE(264)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__runCheckComplete,return )

int SoundChannel_obj::__dynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::__incompleteList;

::openfl::_legacy::media::AudioThreadState SoundChannel_obj::__audioState;

bool SoundChannel_obj::__audioThreadIsIdle;

bool SoundChannel_obj::__audioThreadRunning;

Void SoundChannel_obj::__checkCompleteBackgroundThread( ){
{
		HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__checkCompleteBackgroundThread",0x2100080d,"openfl._legacy.media.SoundChannel.__checkCompleteBackgroundThread","openfl/_legacy/media/SoundChannel.hx",194,0xd2a8ca59)
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			if ((!(::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning))){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(198)
			if ((!(::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle))){
				HX_STACK_LINE(200)
				::openfl::_legacy::media::SoundChannel_obj::__audioState->updateComplete();
				HX_STACK_LINE(202)
				::Sys_obj::sleep(0.01);
			}
			else{
				HX_STACK_LINE(206)
				::Sys_obj::sleep(0.2);
			}
		}
		HX_STACK_LINE(212)
		::openfl::_legacy::media::SoundChannel_obj::__audioThreadRunning = false;
		HX_STACK_LINE(213)
		::openfl::_legacy::media::SoundChannel_obj::__audioThreadIsIdle = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__checkCompleteBackgroundThread,(void))

bool SoundChannel_obj::__completePending( ){
	HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__completePending",0x2ceb4892,"openfl._legacy.media.SoundChannel.__completePending","openfl/_legacy/media/SoundChannel.hx",222,0xd2a8ca59)
	HX_STACK_LINE(222)
	return (::openfl::_legacy::media::SoundChannel_obj::__incompleteList->length > (int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__completePending,return )

Void SoundChannel_obj::__pollComplete( ){
{
		HX_STACK_FRAME("openfl._legacy.media.SoundChannel","__pollComplete",0x2d7d41a4,"openfl._legacy.media.SoundChannel.__pollComplete","openfl/_legacy/media/SoundChannel.hx",227,0xd2a8ca59)
		HX_STACK_LINE(229)
		int i = ::openfl::_legacy::media::SoundChannel_obj::__incompleteList->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			int _g = --(i);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(231)
			if ((!(((_g >= (int)0))))){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(233)
			if ((::openfl::_legacy::media::SoundChannel_obj::__incompleteList->__get(i).StaticCast< ::openfl::_legacy::media::SoundChannel >()->__checkComplete())){
				HX_STACK_LINE(235)
				::openfl::_legacy::media::SoundChannel_obj::__incompleteList->splice(i,(int)1);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,__pollComplete,(void))

Dynamic SoundChannel_obj::lime_sound_channel_is_complete;

Dynamic SoundChannel_obj::lime_sound_channel_get_data_position;

Dynamic SoundChannel_obj::lime_sound_channel_needs_data;

Dynamic SoundChannel_obj::lime_sound_channel_add_data;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_MARK_MEMBER_NAME(__dynamicBytes,"__dynamicBytes");
	HX_MARK_MEMBER_NAME(__thread_completed,"__thread_completed");
	HX_MARK_MEMBER_NAME(__addedToThread,"__addedToThread");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__dataProvider,"__dataProvider");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__soundInstance,"__soundInstance");
	HX_VISIT_MEMBER_NAME(__dynamicBytes,"__dynamicBytes");
	HX_VISIT_MEMBER_NAME(__thread_completed,"__thread_completed");
	HX_VISIT_MEMBER_NAME(__addedToThread,"__addedToThread");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__audioState") ) { return __audioState; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pollComplete") ) { return __pollComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { return __dataProvider; }
		if (HX_FIELD_EQ(inName,"__dynamicBytes") ) { return __dynamicBytes; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { return __soundInstance; }
		if (HX_FIELD_EQ(inName,"__addedToThread") ) { return __addedToThread; }
		if (HX_FIELD_EQ(inName,"__checkComplete") ) { return __checkComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { return __incompleteList; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__completePending") ) { return __completePending_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__thread_completed") ) { return __thread_completed; }
		if (HX_FIELD_EQ(inName,"__runCheckComplete") ) { return __runCheckComplete_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { return __dynamicSoundCount; }
		if (HX_FIELD_EQ(inName,"__audioThreadIsIdle") ) { return __audioThreadIsIdle; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__audioThreadRunning") ) { return __audioThreadRunning; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { return lime_sound_channel_add_data; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { return lime_sound_channel_needs_data; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { return lime_sound_channel_is_complete; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__checkCompleteBackgroundThread") ) { return __checkCompleteBackgroundThread_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { return lime_sound_channel_get_data_position; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__audioState") ) { __audioState=inValue.Cast< ::openfl::_legacy::media::AudioThreadState >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataProvider") ) { __dataProvider=inValue.Cast< ::openfl::_legacy::events::EventDispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dynamicBytes") ) { __dynamicBytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundInstance") ) { __soundInstance=inValue.Cast< ::openfl::_legacy::media::Sound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__addedToThread") ) { __addedToThread=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__incompleteList") ) { __incompleteList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__thread_completed") ) { __thread_completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__dynamicSoundCount") ) { __dynamicSoundCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__audioThreadIsIdle") ) { __audioThreadIsIdle=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__audioThreadRunning") ) { __audioThreadRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_add_data") ) { lime_sound_channel_add_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_needs_data") ) { lime_sound_channel_needs_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_is_complete") ) { lime_sound_channel_is_complete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_get_data_position") ) { lime_sound_channel_get_data_position=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__dataProvider"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("__soundInstance"));
	outFields->push(HX_CSTRING("__dynamicBytes"));
	outFields->push(HX_CSTRING("__thread_completed"));
	outFields->push(HX_CSTRING("__addedToThread"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__dynamicSoundCount"),
	HX_CSTRING("__incompleteList"),
	HX_CSTRING("__audioState"),
	HX_CSTRING("__audioThreadIsIdle"),
	HX_CSTRING("__audioThreadRunning"),
	HX_CSTRING("__checkCompleteBackgroundThread"),
	HX_CSTRING("__completePending"),
	HX_CSTRING("__pollComplete"),
	HX_CSTRING("lime_sound_channel_is_complete"),
	HX_CSTRING("lime_sound_channel_get_data_position"),
	HX_CSTRING("lime_sound_channel_needs_data"),
	HX_CSTRING("lime_sound_channel_add_data"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::events::EventDispatcher*/ ,(int)offsetof(SoundChannel_obj,__dataProvider),HX_CSTRING("__dataProvider")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundChannel_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsObject /*::openfl::_legacy::media::Sound*/ ,(int)offsetof(SoundChannel_obj,__soundInstance),HX_CSTRING("__soundInstance")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(SoundChannel_obj,__dynamicBytes),HX_CSTRING("__dynamicBytes")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__thread_completed),HX_CSTRING("__thread_completed")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,__addedToThread),HX_CSTRING("__addedToThread")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__dataProvider"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__soundInstance"),
	HX_CSTRING("__dynamicBytes"),
	HX_CSTRING("__thread_completed"),
	HX_CSTRING("__addedToThread"),
	HX_CSTRING("__checkComplete"),
	HX_CSTRING("__runCheckComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioState,"__audioState");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioThreadIsIdle,"__audioThreadIsIdle");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__audioThreadRunning,"__audioThreadRunning");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__dynamicSoundCount,"__dynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__incompleteList,"__incompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioState,"__audioState");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioThreadIsIdle,"__audioThreadIsIdle");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__audioThreadRunning,"__audioThreadRunning");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_is_complete,"lime_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_get_data_position,"lime_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_needs_data,"lime_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::lime_sound_channel_add_data,"lime_sound_channel_add_data");
};

#endif

Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.media.SoundChannel"), hx::TCanCast< SoundChannel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void SoundChannel_obj::__boot()
{
	__dynamicSoundCount= (int)0;
	__incompleteList= Array_obj< ::Dynamic >::__new();
	__audioThreadIsIdle= true;
	__audioThreadRunning= false;
	lime_sound_channel_is_complete= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_sound_channel_is_complete"),(int)1);
	lime_sound_channel_get_data_position= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_sound_channel_get_data_position"),(int)1);
	lime_sound_channel_needs_data= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_sound_channel_needs_data"),(int)1);
	lime_sound_channel_add_data= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_sound_channel_add_data"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
