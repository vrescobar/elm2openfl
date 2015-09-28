package;

import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {
    private var kb:KeyBoard;
    private var tf:TextField;
    public function new () {
        super();
        kb = new KeyBoard();
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

class KeyBoard {
    private var keys:Array<Int>;
    public function new() keys = new Array();
    public function key_handler(key:KeyboardEvent) {
        if (key.type == KeyboardEvent.KEY_DOWN) keys.push(key.keyCode);
        if (key.type == KeyboardEvent.KEY_UP) keys.remove(key.keyCode);
    }
    public function keys_down() {
        return keys.copy(); // Not the best way to achieve immutability

    }
}