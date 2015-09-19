#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#define INCLUDED_openfl__legacy_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/InteractiveObject.h>
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObjectContainer_obj : public ::openfl::_legacy::display::InteractiveObject_obj{
	public:
		typedef ::openfl::_legacy::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();
		Void __construct(Dynamic handle,::String type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new(Dynamic handle,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DisplayObjectContainer"); }

		Array< ::Dynamic > __children;
		virtual ::openfl::_legacy::display::DisplayObject addChild( ::openfl::_legacy::display::DisplayObject child);
		Dynamic addChild_dyn();

		virtual Void setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index);
		Dynamic setChildIndex_dyn();

		virtual Void __broadcast( ::openfl::_legacy::events::Event event);

		virtual bool __contains( ::openfl::_legacy::display::DisplayObject child);

		virtual ::openfl::_legacy::display::DisplayObject __findByID( int id);

		virtual int __getChildIndex( ::openfl::_legacy::display::DisplayObject child);
		Dynamic __getChildIndex_dyn();

		virtual Void __getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,Array< ::Dynamic > result);

		virtual Void __onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage);

		virtual Void __onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage);

		virtual Void __removeChildFromArray( ::openfl::_legacy::display::DisplayObject child);
		Dynamic __removeChildFromArray_dyn();

		static Dynamic lime_create_display_object_container;
		static Dynamic &lime_create_display_object_container_dyn() { return lime_create_display_object_container;}
		static Dynamic lime_doc_add_child;
		static Dynamic &lime_doc_add_child_dyn() { return lime_doc_add_child;}
		static Dynamic lime_doc_remove_child;
		static Dynamic &lime_doc_remove_child_dyn() { return lime_doc_remove_child;}
		static Dynamic lime_doc_set_child_index;
		static Dynamic &lime_doc_set_child_index_dyn() { return lime_doc_set_child_index;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_DisplayObjectContainer */ 
