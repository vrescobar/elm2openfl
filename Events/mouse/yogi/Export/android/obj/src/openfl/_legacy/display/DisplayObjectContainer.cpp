#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","new",0x440fc302,"openfl._legacy.display.DisplayObjectContainer.new","openfl/_legacy/display/DisplayObjectContainer.hx",21,0xf33fa94b)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(23)
	super::__construct(handle,type);
	HX_STACK_LINE(24)
	this->__children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(handle,type);
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","addChild",0x389e11d9,"openfl._legacy.display.DisplayObjectContainer.addChild","openfl/_legacy/display/DisplayObjectContainer.hx",29,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			HX_STACK_DO_THROW(HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(31)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(31)
			this->__children->push(child);
			HX_STACK_LINE(31)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_add_child(this->__handle,child->__handle);
			HX_STACK_LINE(31)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(32)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::_legacy::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","setChildIndex",0x27a69b3a,"openfl._legacy.display.DisplayObjectContainer.setChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",194,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(194)
		if (((index > this->__children->length))){
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(194)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(194)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(194)
			::String _g = child->toString();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			::String _g1 = (HX_CSTRING("setChildIndex : object ") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			::String msg = (_g1 + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(194)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(194)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(194)
				{
					HX_STACK_LINE(194)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(194)
					int _g2 = this->__children->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(194)
					while((true)){
						HX_STACK_LINE(194)
						if ((!(((_g11 < _g2))))){
							HX_STACK_LINE(194)
							break;
						}
						HX_STACK_LINE(194)
						int i = (_g11)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(194)
						if (((this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >() == child))){
							HX_STACK_LINE(194)
							actualIndex = i;
							HX_STACK_LINE(194)
							break;
						}
					}
				}
				HX_STACK_LINE(194)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(194)
					::String _g2 = ::Std_obj::string(actualIndex);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(194)
					::String _g3 = (HX_CSTRING("Internal error: Real child index was ") + _g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(194)
					hx::AddEq(msg,_g3);
				}
				else{
					HX_STACK_LINE(194)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(194)
			HX_STACK_DO_THROW(msg);
		}
		HX_STACK_LINE(194)
		::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(194)
		if (((index < firstIndex))){
			HX_STACK_LINE(194)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(194)
			while((true)){
				HX_STACK_LINE(194)
				if ((!(((i > index))))){
					HX_STACK_LINE(194)
					break;
				}
				HX_STACK_LINE(194)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::openfl::_legacy::display::DisplayObject >();
				HX_STACK_LINE(194)
				(i)--;
			}
			HX_STACK_LINE(194)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(194)
			if (((firstIndex < index))){
				HX_STACK_LINE(194)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(194)
				while((true)){
					HX_STACK_LINE(194)
					if ((!(((i < index))))){
						HX_STACK_LINE(194)
						break;
					}
					HX_STACK_LINE(194)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::openfl::_legacy::display::DisplayObject >();
					HX_STACK_LINE(194)
					(i)++;
				}
				HX_STACK_LINE(194)
				this->__children[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::__broadcast( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__broadcast",0xb6085083,"openfl._legacy.display.DisplayObjectContainer.__broadcast","openfl/_legacy/display/DisplayObjectContainer.hx",245,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(247)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(249)
		if (((this->__children->length > (int)0))){
			HX_STACK_LINE(251)
			::openfl::_legacy::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(253)
			while((true)){
				HX_STACK_LINE(255)
				child = this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >();
				HX_STACK_LINE(257)
				if (((child != null()))){
					HX_STACK_LINE(259)
					child->__broadcast(event);
				}
				HX_STACK_LINE(263)
				if (((i >= this->__children->length))){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(269)
				if (((this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >() == child))){
					HX_STACK_LINE(271)
					(i)++;
					HX_STACK_LINE(273)
					if (((i >= this->__children->length))){
						HX_STACK_LINE(275)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(285)
		this->super::__broadcast(event);
	}
return null();
}


bool DisplayObjectContainer_obj::__contains( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__contains",0x2b2652dd,"openfl._legacy.display.DisplayObjectContainer.__contains","openfl/_legacy/display/DisplayObjectContainer.hx",290,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(292)
	if (((child == null()))){
		HX_STACK_LINE(294)
		return false;
	}
	HX_STACK_LINE(298)
	if (((hx::ObjectPtr<OBJ_>(this) == child))){
		HX_STACK_LINE(300)
		return true;
	}
	HX_STACK_LINE(304)
	{
		HX_STACK_LINE(304)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(304)
			::openfl::_legacy::display::DisplayObject c = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(304)
			++(_g);
			HX_STACK_LINE(306)
			if (((  ((!(((c == child))))) ? bool(c->__contains(child)) : bool(true) ))){
				HX_STACK_LINE(308)
				return true;
			}
		}
	}
	HX_STACK_LINE(314)
	return false;
}


::openfl::_legacy::display::DisplayObject DisplayObjectContainer_obj::__findByID( int id){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__findByID",0x9261ff09,"openfl._legacy.display.DisplayObjectContainer.__findByID","openfl/_legacy/display/DisplayObjectContainer.hx",319,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(321)
	if (((this->__id == id))){
		HX_STACK_LINE(323)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(327)
	::openfl::_legacy::display::DisplayObject found;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(329)
	{
		HX_STACK_LINE(329)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(329)
		while((true)){
			HX_STACK_LINE(329)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(329)
				break;
			}
			HX_STACK_LINE(329)
			::openfl::_legacy::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(329)
			++(_g);
			HX_STACK_LINE(331)
			::openfl::_legacy::display::DisplayObject _g2 = child->__findByID(id);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(331)
			found = _g2;
			HX_STACK_LINE(333)
			if (((found != null()))){
				HX_STACK_LINE(335)
				return found;
			}
		}
	}
	HX_STACK_LINE(341)
	return this->super::__findByID(id);
}


int DisplayObjectContainer_obj::__getChildIndex( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__getChildIndex",0xcb62fe8e,"openfl._legacy.display.DisplayObjectContainer.__getChildIndex","openfl/_legacy/display/DisplayObjectContainer.hx",346,0xf33fa94b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(348)
	{
		HX_STACK_LINE(348)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(350)
			if (((this->__children->__get(i).StaticCast< ::openfl::_legacy::display::DisplayObject >() == child))){
				HX_STACK_LINE(352)
				return i;
			}
		}
	}
	HX_STACK_LINE(358)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__getChildIndex,return )

Void DisplayObjectContainer_obj::__getObjectsUnderPoint( ::openfl::_legacy::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__getObjectsUnderPoint",0x14f12e54,"openfl._legacy.display.DisplayObjectContainer.__getObjectsUnderPoint","openfl/_legacy/display/DisplayObjectContainer.hx",363,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(365)
		this->super::__getObjectsUnderPoint(point,result);
		HX_STACK_LINE(367)
		{
			HX_STACK_LINE(367)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(367)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(367)
			while((true)){
				HX_STACK_LINE(367)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(367)
					break;
				}
				HX_STACK_LINE(367)
				::openfl::_legacy::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(367)
				++(_g);
				HX_STACK_LINE(369)
				child->__getObjectsUnderPoint(point,result);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onAdded( ::openfl::_legacy::display::DisplayObject object,bool isOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__onAdded",0x10a25c23,"openfl._legacy.display.DisplayObjectContainer.__onAdded","openfl/_legacy/display/DisplayObjectContainer.hx",376,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(isOnStage,"isOnStage")
		HX_STACK_LINE(378)
		this->super::__onAdded(object,isOnStage);
		HX_STACK_LINE(380)
		{
			HX_STACK_LINE(380)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(380)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(380)
			while((true)){
				HX_STACK_LINE(380)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(380)
					break;
				}
				HX_STACK_LINE(380)
				::openfl::_legacy::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(380)
				++(_g);
				HX_STACK_LINE(382)
				child->__onAdded(object,isOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onRemoved( ::openfl::_legacy::display::DisplayObject object,bool wasOnStage){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__onRemoved",0xa19985c3,"openfl._legacy.display.DisplayObjectContainer.__onRemoved","openfl/_legacy/display/DisplayObjectContainer.hx",389,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(wasOnStage,"wasOnStage")
		HX_STACK_LINE(391)
		this->super::__onRemoved(object,wasOnStage);
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(393)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(393)
			while((true)){
				HX_STACK_LINE(393)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(393)
					break;
				}
				HX_STACK_LINE(393)
				::openfl::_legacy::display::DisplayObject child = _g1->__get(_g).StaticCast< ::openfl::_legacy::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(393)
				++(_g);
				HX_STACK_LINE(395)
				child->__onRemoved(object,wasOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__removeChildFromArray( ::openfl::_legacy::display::DisplayObject child){
{
		HX_STACK_FRAME("openfl._legacy.display.DisplayObjectContainer","__removeChildFromArray",0x96bf37b5,"openfl._legacy.display.DisplayObjectContainer.__removeChildFromArray","openfl/_legacy/display/DisplayObjectContainer.hx",402,0xf33fa94b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(404)
		int i = this->__getChildIndex(child);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(406)
		if (((i >= (int)0))){
			HX_STACK_LINE(408)
			::openfl::_legacy::display::DisplayObjectContainer_obj::lime_doc_remove_child(this->__handle,i);
			HX_STACK_LINE(409)
			this->__children->splice(i,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__removeChildFromArray,(void))

Dynamic DisplayObjectContainer_obj::lime_create_display_object_container;

Dynamic DisplayObjectContainer_obj::lime_doc_add_child;

Dynamic DisplayObjectContainer_obj::lime_doc_remove_child;

Dynamic DisplayObjectContainer_obj::lime_doc_set_child_index;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(__children,"__children");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__children,"__children");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onAdded") ) { return __onAdded_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__contains") ) { return __contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__findByID") ) { return __findByID_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__onRemoved") ) { return __onRemoved_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__getChildIndex") ) { return __getChildIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_doc_add_child") ) { return lime_doc_add_child; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_doc_remove_child") ) { return lime_doc_remove_child; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__getObjectsUnderPoint") ) { return __getObjectsUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__removeChildFromArray") ) { return __removeChildFromArray_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_doc_set_child_index") ) { return lime_doc_set_child_index; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_create_display_object_container") ) { return lime_create_display_object_container; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_doc_add_child") ) { lime_doc_add_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_doc_remove_child") ) { lime_doc_remove_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_doc_set_child_index") ) { lime_doc_set_child_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_create_display_object_container") ) { lime_create_display_object_container=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_create_display_object_container"),
	HX_CSTRING("lime_doc_add_child"),
	HX_CSTRING("lime_doc_remove_child"),
	HX_CSTRING("lime_doc_set_child_index"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__children),HX_CSTRING("__children")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__children"),
	HX_CSTRING("addChild"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__contains"),
	HX_CSTRING("__findByID"),
	HX_CSTRING("__getChildIndex"),
	HX_CSTRING("__getObjectsUnderPoint"),
	HX_CSTRING("__onAdded"),
	HX_CSTRING("__onRemoved"),
	HX_CSTRING("__removeChildFromArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_create_display_object_container,"lime_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_add_child,"lime_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_remove_child,"lime_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_child_index,"lime_doc_set_child_index");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_create_display_object_container,"lime_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_add_child,"lime_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_remove_child,"lime_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::lime_doc_set_child_index,"lime_doc_set_child_index");
};

#endif

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
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

void DisplayObjectContainer_obj::__boot()
{
	lime_create_display_object_container= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_create_display_object_container"),(int)0);
	lime_doc_add_child= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_doc_add_child"),(int)2);
	lime_doc_remove_child= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_doc_remove_child"),(int)2);
	lime_doc_set_child_index= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_doc_set_child_index"),(int)3);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
