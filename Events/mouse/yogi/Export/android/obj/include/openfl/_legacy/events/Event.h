#ifndef INCLUDED_openfl__legacy_events_Event
#define INCLUDED_openfl__legacy_events_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventPhase)
namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Event_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Event_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Event_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Event"); }

		bool __bubbles;
		bool __cancelable;
		Dynamic __currentTarget;
		::openfl::events::EventPhase __eventPhase;
		bool __isCancelled;
		bool __isCancelledNow;
		Dynamic __target;
		::String __type;
		virtual bool __getIsCancelled( );
		Dynamic __getIsCancelled_dyn();

		virtual Void __setPhase( ::openfl::events::EventPhase value);
		Dynamic __setPhase_dyn();

		virtual bool get_bubbles( );
		Dynamic get_bubbles_dyn();

		virtual bool get_cancelable( );
		Dynamic get_cancelable_dyn();

		virtual Dynamic set_currentTarget( Dynamic value);
		Dynamic set_currentTarget_dyn();

		virtual ::openfl::events::EventPhase get_eventPhase( );
		Dynamic get_eventPhase_dyn();

		virtual Dynamic get_target( );
		Dynamic get_target_dyn();

		virtual Dynamic set_target( Dynamic value);
		Dynamic set_target_dyn();

		virtual ::String get_type( );
		Dynamic get_type_dyn();

		static ::String ACTIVATE;
		static ::String ADDED;
		static ::String ADDED_TO_STAGE;
		static ::String CHANGE;
		static ::String COMPLETE;
		static ::String DEACTIVATE;
		static ::String ENTER_FRAME;
		static ::String OPEN;
		static ::String REMOVED;
		static ::String REMOVED_FROM_STAGE;
		static ::String RENDER;
		static ::String RESIZE;
		static ::String SOUND_COMPLETE;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_Event */ 
