package;

import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import Math.*;
import Elm.Graphics.Collage.ngon;

class Polygon extends Sprite {

    function new(x:Int, y:Int, sides:Int, radius:Float, color:Int, alpha:Float) {
        super();
        // Placing the polygon
        this.x = x;
        this.y = y;
        // Discover the vertices_coords
        this.graphics.beginFill(color, alpha);
        var vertices = ngon(sides, radius);
        // we move to the first vertice before start drawing; otherwise native targets may missunderstand the origin
        this.graphics.moveTo(vertices[0][0], vertices[0][1]);
        // unfortunately there is no support for destructuring
        for (point in vertices) this.graphics.lineTo(point[0], point[1]);
        this.graphics.endFill();

    }

    static public function ngon(sides:Int, radius:Float) {
        var t = 2 * PI / sides;
        return [for (n in 0...sides) [radius * cos(t*n), radius * sin(t*n)]];
    }
}

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
        p = new Polygon(x, y, 5, 20, Std.random(0xFFFFFF), 0.7);
        // Also another difference, 0 degrees in Elm equals 90 degrees in Haxe. For me it's fair.
        p.rotation = Std.random(360);
        this.addChild(p);
    }
}