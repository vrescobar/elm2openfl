package elm.graphics.collage;

import Math.*;

class Ngon extends openfl.display.Sprite {
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
