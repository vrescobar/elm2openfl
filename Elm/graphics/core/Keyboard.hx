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
}