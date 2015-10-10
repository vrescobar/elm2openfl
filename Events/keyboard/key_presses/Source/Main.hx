package;

import elm.graphics.core.Keyboard;
import String;
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
        // this Listener proves that my implementation is leaky and I need to know the details of the class before use it
        stage.addEventListener(KeyboardEvent.KEY_UP, kboard.key_handler);
    }
    private function key_handle(key:KeyboardEvent) {
        kboard.key_handler(key);
        var char:String = try String.fromCharCode(if(kboard.keys_down().length>0) kboard.keys_down()[0] else 0)
                          catch(msg:String) " ";
        tf.text = 'The last key you pressed was: "' + char +'"';
        }
}

