package elm.graphics.core;

import openfl.events.KeyboardEvent;

class Keyboard {
    private var keys:Map<Int,Bool>;
    public function new() keys = new Map();
    public function key_handler(key:KeyboardEvent) {
        if (key.type == KeyboardEvent.KEY_DOWN) keys.set(key.keyCode, true);
        if (key.type == KeyboardEvent.KEY_UP) keys.remove(key.keyCode);
    }
    public function keys_down() {
        return [for (k in keys.keys()) if (keys.exists(k)) k];
    }
    private inline static function toXY(up:Int, down:Int, left:Int, right:Int, keys:Array<Int>){
        function is (key) {
            return if (key == up || key == down || key == right || key == left ) {
                switch(keys.indexOf(key)) {
                        case -1: 0;
                        default: 1;
                }
            } else 0;
        }
        return {x: is(right) - is(left), y: is(up) - is(down)};
    }
    public function arrows() return toXY(38, 40, 37, 39, this.keys_down());

}
