#ifndef INCLUDED_openfl__legacy_display_Graphics
#define INCLUDED_openfl__legacy_display_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Graphics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();
		Void __construct(Dynamic handle);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Graphics_obj > __new(Dynamic handle);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphics"); }

		Dynamic __handle;
		virtual Void beginBitmapFill( ::openfl::_legacy::display::BitmapData bitmap,::openfl::_legacy::geom::Matrix matrix,hx::Null< bool >  repeat,hx::Null< bool >  smooth);
		Dynamic beginBitmapFill_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void drawRect( Float x,Float y,Float width,Float height);
		Dynamic drawRect_dyn();

		virtual Void endFill( );
		Dynamic endFill_dyn();

		static Dynamic lime_gfx_clear;
		static Dynamic &lime_gfx_clear_dyn() { return lime_gfx_clear;}
		static Dynamic lime_gfx_begin_bitmap_fill;
		static Dynamic &lime_gfx_begin_bitmap_fill_dyn() { return lime_gfx_begin_bitmap_fill;}
		static Dynamic lime_gfx_end_fill;
		static Dynamic &lime_gfx_end_fill_dyn() { return lime_gfx_end_fill;}
		static Dynamic lime_gfx_draw_rect;
		static Dynamic &lime_gfx_draw_rect_dyn() { return lime_gfx_draw_rect;}
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Graphics */ 
