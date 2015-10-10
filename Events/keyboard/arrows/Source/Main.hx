package;

import elm.graphics.core.Keyboard;

import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {
    private var kboard:Keyboard;
    private var tf:TextField;
	public function new () {
		super();
        tf = new TextField();
        kboard = new Keyboard();
        tf.width = 500;
        addChild(tf);
        stage.addEventListener(KeyboardEvent.KEY_DOWN, key_handle);
        stage.addEventListener(KeyboardEvent.KEY_UP, key_handle);
        tf.text = Std.string(kboard.arrows());
    }
    private function key_handle(key:KeyboardEvent) {
        kboard.key_handler(key);
        tf.text = Std.string(kboard.arrows());
    }
}
