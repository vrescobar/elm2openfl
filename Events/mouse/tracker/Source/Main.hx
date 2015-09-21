package;

import openfl.Lib;
import elm.graphics.collage.Ngon;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;

class Main extends Sprite {
    private var hexagon:Sprite;
    private var triangle:Sprite;
    function new(){
        super();
        hexagon = new Ngon(0, 0, 6, 30.0, 0xF57A00, 1.0);
        triangle = new Ngon(0, 0, 3, 100.0, 0x3466A4, 1.0);
        addChild(triangle);
        addChild(hexagon);
        init();
        stage.addEventListener(Event.ADDED_TO_STAGE, onResize);
        stage.addEventListener(Event.RESIZE, onResize);
        stage.addEventListener(MouseEvent.MOUSE_MOVE,
                                followMe);
    }
    function followMe(mouse:MouseEvent){
        var x = mouse.stageX;
        var y = mouse.stageY;
        var dx:Float = x - triangle.x;
        var dy:Float = y - triangle.y;
        var rotation = - Math.atan2(dx, dy) * (180 / Math.PI);
        hexagon.x = x;
        hexagon.y = y;
        triangle.rotation = rotation + 90; // Correcting origin of the circle

    }
    function onResize(e:Event){
        init();
    }
    function init(){
        // This custom code can become much complicated when there are more elements,
        //   here is where I appreciate the magic of Elm signals applied to the declarative structure.
        triangle.x = Std.int(Lib.current.stage.stageWidth/2);
        triangle.y = Std.int(Lib.current.stage.stageHeight/2);
        trace("Hey, I got resized");
        #if mobile
        // In a mobile this function is also triggered when rotated so all coordinates are keeped the same
        //   BUT that makes the hexagon go out of the window or even go to a false position respect
        //   the triangle. I cannot image a simpler but elegant solution because now it is not just
        //   the layout that changed but also the dimentions of the window :/
        // And here a dirty trick to reorientate the triangle (not feelign satisfied with that solution)
        var me = new MouseEvent(MouseEvent.MOUSE_MOVE);
        me.stageX = hexagon.x;
        me.stageY = hexagon.y;
        followMe(me);
        #end
    }
}