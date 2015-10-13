package;

import elm.graphics.collage.Ngon;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.events.Event;
import Lib;
import Math.*;

class Main extends Sprite {
    private var p:Sprite;
    private var watch:Sprite;
    private var watch_border:Sprite;

    function new(){
        super();
        var txt = new TextField();
        watch = new Ngon(0, 0, 12, 110, Std.random(0xFFFFFF), 0.7);
        watch_border = new Ngon(0, 0, 12, 111, Std.random(0xFFFFFF), 0.7);

        addChild(watch);
        addChild(watch_border);
        stage.addEventListener(Event.RESIZE, keepLayout);
    }

    function onSecond() {
        //p.rotation = Std.random(360);
    }
    function keepLayout(e:Event) {
        center(watch);
    }
    function center(s:Sprite) {
        s.x = Std.int(Lib.current.stage.stageWidth/2) - s.textWidth / 2;
        s.y = Std.int(Lib.current.stage.stageHeight/2);
        return s
    }
    function onResize(e:Event) init();
}

