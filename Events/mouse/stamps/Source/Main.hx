package;

import elm.graphics.collage.Ngon;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import Math.*;

class Main extends Sprite {
    private var p:Sprite;
    function new(){
        super();
        var txt = new TextField();
        txt.width = 500;
        txt.text = "Click to stamp a pentagon.";
        addChild(txt);
        stage.addEventListener(MouseEvent.CLICK,
                                function(mouse:MouseEvent){
                                    drawPentagon(Std.int(mouse.stageX), Std.int(mouse.stageY));
                                });
    }
    function drawPentagon(x:Int, y:Int) {
        // The Elm example works with HSL instead of RGB and I am not willing to implement that right now.
        p = new Ngon(x, y, 5, 50, Std.random(0xFFFFFF), 0.7);
        // Also another difference, 0 degrees in Elm equals 90 degrees in Haxe. For me it's fair.
        p.rotation = Std.random(360);
        this.addChild(p);
    }
}
