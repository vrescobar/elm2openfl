package;

import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {

    private var tf:TextField;
	public function new () {
		super();
        tf = new TextField();
        tf.text = "false";
        addChild(tf);
        stage.addEventListener (MouseEvent.MOUSE_DOWN, on_button);
        stage.addEventListener (MouseEvent.MOUSE_UP, on_button);

    }

    private function on_button(mouse:MouseEvent) {
        trace(mouse.buttonDown);
        tf.text = Std.string(mouse.buttonDown);
    }

	
}