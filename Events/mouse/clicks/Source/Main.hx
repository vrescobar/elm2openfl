package;

import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.display.Sprite;

class Main extends Sprite {

    private var tf:TextField;
    private var clicks:Int;
	public function new () {
		super();
        tf = new TextField();
        clicks = 0;
        tf.text = "0";
        addChild(tf);
        stage.addEventListener(MouseEvent.CLICK, onClick);
    }

    private function onClick(mouse:MouseEvent) {
        // I ask myself what exactly represents this unuseful property: mouse.clickCount
        clicks += 1;
        tf.text = Std.string(clicks);
    }

	
}