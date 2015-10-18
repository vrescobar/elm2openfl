package;

//import elm.graphics.Element;
import flash.text.AntiAliasType;
import openfl.text.TextFormat;
import openfl.display.Sprite;
using Lambda;

import openfl.text.TextFieldAutoSize;
import openfl.text.TextField;


enum Direction {
    up;
    down;
}

// Those side effects ara just plainly wrong in terms of Functional programming / Elm language
//   in additiof side effects on the original Sprite and so on
class Element {
    public static function show(a:Dynamic):TextField {
        var txt = new TextField();
        txt.text = Std.string(a);
        txt.autoSize = TextFieldAutoSize.LEFT;
        txt.setTextFormat(new TextFormat("Courier New"));
        txt.antiAliasType = AntiAliasType.ADVANCED;

        return txt;
    }

    public static function flow(dir:Direction, es:Array<TextField>):Sprite {
        var container:Sprite = new Sprite();
        // How to sort based on given direction
        var sorter = switch dir {
            case up: function(i, j) { return 1 ;};
            case down: function(i, j) { return 0 ;};
        }
        // The waterfall
        var offset:Float = 0;
        es.sort(sorter);
        for (s in es) {
            s.y = offset;
            container.addChild(s);
            offset += s.height;
        }
        // unnecessary code at the moment:
        //container.height = offset;
        //container.width = es.map(function(s) {return s.width;}).fold(function(newer, older){return if (newer < older) older else newer;},0);
        return container;
    }
}


class Main extends Sprite {
	public function new () {
		super ();
/*
  Elements can be combined into more complex layouts using
  the flow function:

         flow : Direction -> [Element] -> Element

  It is easy to change the direction of flow. Just use a
  different value for the direction!

     down, up, left, right, inward, outward : Direction

  Try switching "down" in the code below with "up".

  Directions still to be implemented: left, right, inward, outward
*/
		var txt =
                [ "By using the 'flow' function,"
                , "we can stack elements"
                , "on top of other elements."
                ].map(Element.show);

        addChild(Element.flow(up, txt));
	}
}