#ifndef INCLUDED_openfl__legacy_display_BitmapData
#define INCLUDED_openfl__legacy_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/display/IBitmapDrawable.h>
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapData_obj > __new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor,Dynamic gpuMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::openfl::_legacy::display::IBitmapDrawable_obj *()
			{ return new ::openfl::_legacy::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapData"); }

		Dynamic __handle;
		bool __transparent;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		static ::openfl::_legacy::display::BitmapData load( ::String filename,hx::Null< int >  format);
		static Dynamic load_dyn();

		static Dynamic lime_bitmap_data_create;
		static Dynamic &lime_bitmap_data_create_dyn() { return lime_bitmap_data_create;}
		static Dynamic lime_bitmap_data_load;
		static Dynamic &lime_bitmap_data_load_dyn() { return lime_bitmap_data_load;}
		static Dynamic lime_bitmap_data_height;
		static Dynamic &lime_bitmap_data_height_dyn() { return lime_bitmap_data_height;}
		static Dynamic lime_bitmap_data_width;
		static Dynamic &lime_bitmap_data_width_dyn() { return lime_bitmap_data_width;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_BitmapData */ 
