package;

import openfl.text.TextField;
import openfl.Lib;
import openfl.events.Event;
import openfl.display.Sprite;

// Try changing the size of your browser window.
class Main extends Sprite {
    private var txt:TextField;
    function new(){
        super();
        txt = new TextField();
        txt.text="Hello, World!";
        stage.addEventListener(Event.RESIZE, onResize);
        addChild(txt);
        init();
    }

    function init(){
        txt.x = Std.int(Lib.current.stage.stageWidth/2) - txt.textWidth / 2;
        txt.y = Std.int(Lib.current.stage.stageHeight/2);
    }
    function onResize(e:Event) init();
}
