#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void Rectangle_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{
HX_STACK_FRAME("openfl._legacy.geom.Rectangle","new",0xde610433,"openfl._legacy.geom.Rectangle.new","openfl/_legacy/geom/Rectangle.hx",20,0xcf1e94dc)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
{
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->width = width;
	HX_STACK_LINE(25)
	this->height = height;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height);
	return result;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > result = new Rectangle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::_legacy::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","clone",0xab0321f0,"openfl._legacy.geom.Rectangle.clone","openfl/_legacy/geom/Rectangle.hx",32,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::openfl::_legacy::geom::Rectangle_obj::__new(this->x,this->y,this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::intersects( ::openfl::_legacy::geom::Rectangle toIntersect){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","intersects",0xc2ceff41,"openfl._legacy.geom.Rectangle.intersects","openfl/_legacy/geom/Rectangle.hx",156,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(158)
	Float x0;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(158)
	if (((this->x < toIntersect->x))){
		HX_STACK_LINE(158)
		x0 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(158)
		x0 = this->x;
	}
	HX_STACK_LINE(159)
	Float _g = this->get_right();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(159)
	Float _g1 = toIntersect->get_right();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(159)
	Float x1;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(159)
	if (((_g > _g1))){
		HX_STACK_LINE(159)
		x1 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(159)
		x1 = this->get_right();
	}
	HX_STACK_LINE(160)
	if (((x1 <= x0))){
		HX_STACK_LINE(162)
		return false;
	}
	HX_STACK_LINE(166)
	Float y0;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(166)
	if (((this->y < toIntersect->y))){
		HX_STACK_LINE(166)
		y0 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(166)
		y0 = this->y;
	}
	HX_STACK_LINE(167)
	Float _g2 = this->get_bottom();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(167)
	Float _g3 = toIntersect->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(167)
	Float y1;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(167)
	if (((_g2 > _g3))){
		HX_STACK_LINE(167)
		y1 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(167)
		y1 = this->get_bottom();
	}
	HX_STACK_LINE(168)
	return (y1 > y0);
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_bottom",0x34e39341,"openfl._legacy.geom.Rectangle.get_bottom","openfl/_legacy/geom/Rectangle.hx",274,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	return (this->y + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("openfl._legacy.geom.Rectangle","get_right",0x9fb3bc46,"openfl._legacy.geom.Rectangle.get_right","openfl/_legacy/geom/Rectangle.hx",280,0xcf1e94dc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(280)
	return (this->x + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("clone"),
	HX_CSTRING("intersects"),
	HX_CSTRING("get_bottom"),
	HX_CSTRING("get_right"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.geom.Rectangle"), hx::TCanCast< Rectangle_obj> ,sStaticFields,sMemberFields,
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

void Rectangle_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
