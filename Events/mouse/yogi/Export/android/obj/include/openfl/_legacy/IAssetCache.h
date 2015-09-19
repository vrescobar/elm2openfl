#ifndef INCLUDED_openfl__legacy_IAssetCache
#define INCLUDED_openfl__legacy_IAssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES  IAssetCache_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAssetCache_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void clear( ::String prefix)=0;
		Dynamic clear_dyn();
virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id)=0;
		Dynamic getBitmapData_dyn();
virtual bool hasBitmapData( ::String id)=0;
		Dynamic hasBitmapData_dyn();
virtual Void setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData)=0;
		Dynamic setBitmapData_dyn();
};

#define DELEGATE_openfl__legacy_IAssetCache \
virtual Void clear( ::String prefix) { return mDelegate->clear(prefix);}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \
virtual ::openfl::_legacy::display::BitmapData getBitmapData( ::String id) { return mDelegate->getBitmapData(id);}  \
virtual Dynamic getBitmapData_dyn() { return mDelegate->getBitmapData_dyn();}  \
virtual bool hasBitmapData( ::String id) { return mDelegate->hasBitmapData(id);}  \
virtual Dynamic hasBitmapData_dyn() { return mDelegate->hasBitmapData_dyn();}  \
virtual Void setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData) { return mDelegate->setBitmapData(id,bitmapData);}  \
virtual Dynamic setBitmapData_dyn() { return mDelegate->setBitmapData_dyn();}  \


template<typename IMPL>
class IAssetCache_delegate_ : public IAssetCache_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAssetCache_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl__legacy_IAssetCache
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_IAssetCache */ 
