package;


import flash.text.TextField;
import openfl.display.Sprite;


class Main extends Sprite {
	public function new () {
		super ();
		var t:TextField = new TextField();
		t.text = "Hello, World!";
		t.x = t.y = 0;
		addChild(t);
	}
}