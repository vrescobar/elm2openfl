#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#define INCLUDED_openfl__legacy_utils_IDataOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  IDataOutput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataOutput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_openfl__legacy_utils_IDataOutput \


template<typename IMPL>
class IDataOutput_delegate_ : public IDataOutput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataOutput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl__legacy_utils_IDataOutput
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_IDataOutput */ 
