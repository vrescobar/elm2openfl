#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{


static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataInput_obj::__mClass,"__mClass");
};

#endif

Class IDataInput_obj::__mClass;

void IDataInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.utils.IDataInput"), hx::TCanCast< IDataInput_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IDataInput_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
