package;

import elm.graphics.core.Keyboard;
import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {
    private var kb:Keyboard;
    private var tf:TextField;
    public function new () {
        super();
        kb = new Keyboard();
        tf = new TextField();
        tf.width = 500;
        addChild(tf);
        stage.addEventListener (KeyboardEvent.KEY_DOWN, key_handle);
        stage.addEventListener (KeyboardEvent.KEY_UP, key_handle);
    }
    private function key_handle(key:KeyboardEvent) {
        kb.key_handler(key);
        tf.text = "You are holding down the following keys: " + Std.string(kb.keys_down());
    }
}
