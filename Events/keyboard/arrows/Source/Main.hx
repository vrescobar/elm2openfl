package;

import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {
    private var keys_horitzonal:Int = 0;
    private var keys_vertical:Int = 0;
    private var tf:TextField;
	public function new () {
		super();
        tf = new TextField();
        tf.width = 500;
        addChild(tf);
        update_signal(); // init
        stage.addEventListener (KeyboardEvent.KEY_DOWN, key_handle);
        stage.addEventListener (KeyboardEvent.KEY_UP, key_handle);
    }
    private function update_signal() tf.text = Std.string('{ x = ${keys_horitzonal}, y = ${ keys_vertical } }');
    private function key_handle(key:KeyboardEvent) {
        // f is the function modifier determines whether press or release (add or substract)
        var f = switch(key.type) {
            case KeyboardEvent.KEY_DOWN: function(old ,new_status){ return  new_status; }; // The event is repeated on long press. Assign only.
            case KeyboardEvent.KEY_UP: function(old, new_status){ return old - new_status; }; // Release is sent only once.
            default: return; // any other KeyBoard event doesn't need to be processed here
        }
        // on press left negative, right possitive
        keys_horitzonal = f(keys_horitzonal,if (key.keyCode == 37) - 1 else if (key.keyCode == 39) 1 else 0);
        // on press up negative, right possitive
        keys_vertical = f(keys_vertical, if (key.keyCode == 38) 1 else if (key.keyCode == 40) - 1 else 0);
        update_signal();

        /* I am not really satisfied with this code, long pressing repeats the event and in addition the variable is
           not thread safe because the keys_* variables aren't atoms.
        */
    }
}