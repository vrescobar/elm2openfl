#include <hxcpp.h>

#include <openfl/system/ApplicationDomain.h>
#include <openfl/net/URLVariables.h>
#include <openfl/net/URLRequestHeader.h>
#include <openfl/net/URLLoaderDataFormat.h>
#include <openfl/events/UncaughtErrorEvents.h>
#include <openfl/events/UncaughtErrorEvent.h>
#include <openfl/events/SampleDataEvent.h>
#include <openfl/events/ProgressEvent.h>
#include <openfl/events/JoystickEvent.h>
#include <openfl/events/IOErrorEvent.h>
#include <openfl/events/FocusEvent.h>
#include <openfl/events/EventPhase.h>
#include <openfl/events/ErrorEvent.h>
#include <openfl/events/TextEvent.h>
#include <openfl/errors/EOFError.h>
#include <openfl/errors/Error.h>
#include <openfl/display/StageScaleMode.h>
#include <openfl/display/StageAlign.h>
#include <openfl/display/Stage3D.h>
#include <openfl/display/PixelSnapping.h>
#include <openfl/display/FrameLabel.h>
#include <openfl/_legacy/utils/UInt8Array.h>
#include <openfl/_legacy/utils/Int16Array.h>
#include <openfl/_legacy/utils/Float32Array.h>
#include <openfl/_legacy/utils/ByteArray.h>
#include <openfl/_legacy/utils/IDataInput.h>
#include <openfl/_legacy/utils/IDataOutput.h>
#include <openfl/_legacy/utils/ArrayBufferView.h>
#include <openfl/_legacy/utils/IMemoryRange.h>
#include <openfl/_legacy/text/Font.h>
#include <openfl/_legacy/net/URLRequest.h>
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#include <openfl/_legacy/media/AudioThreadState.h>
#include <openfl/_legacy/media/SoundChannel.h>
#include <openfl/_legacy/media/InternalAudioType.h>
#include <openfl/_legacy/media/Sound.h>
#include <openfl/_legacy/geom/Transform.h>
#include <openfl/_legacy/geom/Rectangle.h>
#include <openfl/_legacy/geom/Matrix.h>
#include <openfl/_legacy/geom/ColorTransform.h>
#include <openfl/_legacy/filters/BitmapFilter.h>
#include <openfl/_legacy/events/SystemEvent.h>
#include <openfl/_legacy/events/KeyboardEvent.h>
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#include <openfl/_legacy/geom/Point.h>
#include <openfl/_legacy/display/TouchInfo.h>
#include <openfl/_legacy/display/MovieClip.h>
#include <openfl/_legacy/display/Stage.h>
#include <openfl/_legacy/events/TouchEvent.h>
#include <openfl/_legacy/events/MouseEvent.h>
#include <openfl/_legacy/events/Event.h>
#include <openfl/_legacy/display/LoaderInfo.h>
#include <openfl/_legacy/net/URLLoader.h>
#include <openfl/_legacy/display/Loader.h>
#include <openfl/_legacy/display/Graphics.h>
#include <openfl/_legacy/display/BlendMode.h>
#include <openfl/_legacy/display/BitmapData.h>
#include <openfl/_legacy/display/Bitmap.h>
#include <openfl/_legacy/AssetType.h>
#include <openfl/_legacy/Assets.h>
#include <openfl/_legacy/AssetCache.h>
#include <openfl/_legacy/IAssetCache.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/ds/StringMap.h>
#include <haxe/ds/ObjectMap.h>
#include <haxe/ds/IntMap.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <haxe/CallStack.h>
#include <haxe/StackItem.h>
#include <cpp/vm/Thread.h>
#include <cpp/vm/Mutex.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <Type.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Reflect.h>
#include <IMap.h>
#include <List.h>
#include <Lambda.h>
#include <DefaultAssetLibrary.h>
#include <cpp/vm/Deque.h>
#include <openfl/_legacy/AssetLibrary.h>
#include <Date.h>
#include <DocumentClass.h>
#include <Main.h>
#include <openfl/_legacy/display/Sprite.h>
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#include <openfl/_legacy/display/InteractiveObject.h>
#include <openfl/_legacy/display/DisplayObject.h>
#include <openfl/_legacy/Lib.h>
#include <Std.h>
#include <sys/io/_Process/Stdout.h>
#include <haxe/io/Input.h>
#include <haxe/io/Bytes.h>
#include <sys/io/_Process/Stdin.h>
#include <haxe/io/Output.h>
#include <sys/io/Process.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <openfl/_legacy/display/IBitmapDrawable.h>
#include <openfl/_legacy/events/EventDispatcher.h>
#include <openfl/_legacy/events/IEventDispatcher.h>
#include <ApplicationMain.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::openfl::system::ApplicationDomain_obj::__register();
::openfl::net::URLVariables_obj::__register();
::openfl::net::URLRequestHeader_obj::__register();
::openfl::net::URLLoaderDataFormat_obj::__register();
::openfl::events::UncaughtErrorEvents_obj::__register();
::openfl::events::UncaughtErrorEvent_obj::__register();
::openfl::events::SampleDataEvent_obj::__register();
::openfl::events::ProgressEvent_obj::__register();
::openfl::events::JoystickEvent_obj::__register();
::openfl::events::IOErrorEvent_obj::__register();
::openfl::events::FocusEvent_obj::__register();
::openfl::events::EventPhase_obj::__register();
::openfl::events::ErrorEvent_obj::__register();
::openfl::events::TextEvent_obj::__register();
::openfl::errors::EOFError_obj::__register();
::openfl::errors::Error_obj::__register();
::openfl::display::StageScaleMode_obj::__register();
::openfl::display::StageAlign_obj::__register();
::openfl::display::Stage3D_obj::__register();
::openfl::display::PixelSnapping_obj::__register();
::openfl::display::FrameLabel_obj::__register();
::openfl::_legacy::utils::UInt8Array_obj::__register();
::openfl::_legacy::utils::Int16Array_obj::__register();
::openfl::_legacy::utils::Float32Array_obj::__register();
::openfl::_legacy::utils::ByteArray_obj::__register();
::openfl::_legacy::utils::IDataInput_obj::__register();
::openfl::_legacy::utils::IDataOutput_obj::__register();
::openfl::_legacy::utils::ArrayBufferView_obj::__register();
::openfl::_legacy::utils::IMemoryRange_obj::__register();
::openfl::_legacy::text::Font_obj::__register();
::openfl::_legacy::net::URLRequest_obj::__register();
::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__register();
::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::__register();
::openfl::_legacy::media::AudioThreadState_obj::__register();
::openfl::_legacy::media::SoundChannel_obj::__register();
::openfl::_legacy::media::InternalAudioType_obj::__register();
::openfl::_legacy::media::Sound_obj::__register();
::openfl::_legacy::geom::Transform_obj::__register();
::openfl::_legacy::geom::Rectangle_obj::__register();
::openfl::_legacy::geom::Matrix_obj::__register();
::openfl::_legacy::geom::ColorTransform_obj::__register();
::openfl::_legacy::filters::BitmapFilter_obj::__register();
::openfl::_legacy::events::SystemEvent_obj::__register();
::openfl::_legacy::events::KeyboardEvent_obj::__register();
::openfl::_legacy::events::HTTPStatusEvent_obj::__register();
::openfl::_legacy::events::_EventDispatcher::Listener_obj::__register();
::openfl::_legacy::geom::Point_obj::__register();
::openfl::_legacy::display::TouchInfo_obj::__register();
::openfl::_legacy::display::MovieClip_obj::__register();
::openfl::_legacy::display::Stage_obj::__register();
::openfl::_legacy::events::TouchEvent_obj::__register();
::openfl::_legacy::events::MouseEvent_obj::__register();
::openfl::_legacy::events::Event_obj::__register();
::openfl::_legacy::display::LoaderInfo_obj::__register();
::openfl::_legacy::net::URLLoader_obj::__register();
::openfl::_legacy::display::Loader_obj::__register();
::openfl::_legacy::display::Graphics_obj::__register();
::openfl::_legacy::display::BlendMode_obj::__register();
::openfl::_legacy::display::BitmapData_obj::__register();
::openfl::_legacy::display::Bitmap_obj::__register();
::openfl::_legacy::AssetType_obj::__register();
::openfl::_legacy::Assets_obj::__register();
::openfl::_legacy::AssetCache_obj::__register();
::openfl::_legacy::IAssetCache_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::haxe::CallStack_obj::__register();
::haxe::StackItem_obj::__register();
::cpp::vm::Thread_obj::__register();
::cpp::vm::Mutex_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::Type_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Reflect_obj::__register();
::IMap_obj::__register();
::List_obj::__register();
::Lambda_obj::__register();
::DefaultAssetLibrary_obj::__register();
::cpp::vm::Deque_obj::__register();
::openfl::_legacy::AssetLibrary_obj::__register();
::Date_obj::__register();
::DocumentClass_obj::__register();
::Main_obj::__register();
::openfl::_legacy::display::Sprite_obj::__register();
::openfl::_legacy::display::DisplayObjectContainer_obj::__register();
::openfl::_legacy::display::InteractiveObject_obj::__register();
::openfl::_legacy::display::DisplayObject_obj::__register();
::openfl::_legacy::Lib_obj::__register();
::Std_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Bytes_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::haxe::io::Output_obj::__register();
::sys::io::Process_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::openfl::_legacy::display::IBitmapDrawable_obj::__register();
::openfl::_legacy::events::EventDispatcher_obj::__register();
::openfl::_legacy::events::IEventDispatcher_obj::__register();
::ApplicationMain_obj::__register();
::openfl::_legacy::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::vm::Deque_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::vm::Mutex_obj::__boot();
::cpp::vm::Thread_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::openfl::_legacy::events::IEventDispatcher_obj::__boot();
::openfl::_legacy::events::EventDispatcher_obj::__boot();
::openfl::_legacy::display::IBitmapDrawable_obj::__boot();
::Sys_obj::__boot();
::sys::io::Process_obj::__boot();
::haxe::io::Output_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Input_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::Std_obj::__boot();
::openfl::_legacy::Lib_obj::__boot();
::openfl::_legacy::display::DisplayObject_obj::__boot();
::openfl::_legacy::display::InteractiveObject_obj::__boot();
::openfl::_legacy::display::DisplayObjectContainer_obj::__boot();
::openfl::_legacy::display::Sprite_obj::__boot();
::Main_obj::__boot();
::DocumentClass_obj::__boot();
::Date_obj::__boot();
::openfl::_legacy::AssetLibrary_obj::__boot();
::DefaultAssetLibrary_obj::__boot();
::Lambda_obj::__boot();
::List_obj::__boot();
::IMap_obj::__boot();
::Reflect_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Type_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::CallStack_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::ds::IntMap_obj::__boot();
::haxe::ds::ObjectMap_obj::__boot();
::haxe::ds::StringMap_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::openfl::_legacy::IAssetCache_obj::__boot();
::openfl::_legacy::AssetCache_obj::__boot();
::openfl::_legacy::Assets_obj::__boot();
::openfl::_legacy::AssetType_obj::__boot();
::openfl::_legacy::display::Bitmap_obj::__boot();
::openfl::_legacy::display::BitmapData_obj::__boot();
::openfl::_legacy::display::BlendMode_obj::__boot();
::openfl::_legacy::display::Graphics_obj::__boot();
::openfl::_legacy::display::Loader_obj::__boot();
::openfl::_legacy::net::URLLoader_obj::__boot();
::openfl::_legacy::display::LoaderInfo_obj::__boot();
::openfl::_legacy::events::Event_obj::__boot();
::openfl::_legacy::events::MouseEvent_obj::__boot();
::openfl::_legacy::events::TouchEvent_obj::__boot();
::openfl::_legacy::display::Stage_obj::__boot();
::openfl::_legacy::display::MovieClip_obj::__boot();
::openfl::_legacy::display::TouchInfo_obj::__boot();
::openfl::_legacy::geom::Point_obj::__boot();
::openfl::_legacy::events::_EventDispatcher::Listener_obj::__boot();
::openfl::_legacy::events::HTTPStatusEvent_obj::__boot();
::openfl::_legacy::events::KeyboardEvent_obj::__boot();
::openfl::_legacy::events::SystemEvent_obj::__boot();
::openfl::_legacy::filters::BitmapFilter_obj::__boot();
::openfl::_legacy::geom::ColorTransform_obj::__boot();
::openfl::_legacy::geom::Matrix_obj::__boot();
::openfl::_legacy::geom::Rectangle_obj::__boot();
::openfl::_legacy::geom::Transform_obj::__boot();
::openfl::_legacy::media::Sound_obj::__boot();
::openfl::_legacy::media::InternalAudioType_obj::__boot();
::openfl::_legacy::media::SoundChannel_obj::__boot();
::openfl::_legacy::media::AudioThreadState_obj::__boot();
::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::__boot();
::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__boot();
::openfl::_legacy::net::URLRequest_obj::__boot();
::openfl::_legacy::text::Font_obj::__boot();
::openfl::_legacy::utils::IMemoryRange_obj::__boot();
::openfl::_legacy::utils::ArrayBufferView_obj::__boot();
::openfl::_legacy::utils::IDataOutput_obj::__boot();
::openfl::_legacy::utils::IDataInput_obj::__boot();
::openfl::_legacy::utils::ByteArray_obj::__boot();
::openfl::_legacy::utils::Float32Array_obj::__boot();
::openfl::_legacy::utils::Int16Array_obj::__boot();
::openfl::_legacy::utils::UInt8Array_obj::__boot();
::openfl::display::FrameLabel_obj::__boot();
::openfl::display::PixelSnapping_obj::__boot();
::openfl::display::Stage3D_obj::__boot();
::openfl::display::StageAlign_obj::__boot();
::openfl::display::StageScaleMode_obj::__boot();
::openfl::errors::Error_obj::__boot();
::openfl::errors::EOFError_obj::__boot();
::openfl::events::TextEvent_obj::__boot();
::openfl::events::ErrorEvent_obj::__boot();
::openfl::events::EventPhase_obj::__boot();
::openfl::events::FocusEvent_obj::__boot();
::openfl::events::IOErrorEvent_obj::__boot();
::openfl::events::JoystickEvent_obj::__boot();
::openfl::events::ProgressEvent_obj::__boot();
::openfl::events::SampleDataEvent_obj::__boot();
::openfl::events::UncaughtErrorEvent_obj::__boot();
::openfl::events::UncaughtErrorEvents_obj::__boot();
::openfl::net::URLLoaderDataFormat_obj::__boot();
::openfl::net::URLRequestHeader_obj::__boot();
::openfl::net::URLVariables_obj::__boot();
::openfl::system::ApplicationDomain_obj::__boot();
}

