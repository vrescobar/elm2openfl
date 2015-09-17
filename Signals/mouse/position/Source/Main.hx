package;

import openfl.text.TextFormatAlign;
import openfl.text.TextFormat;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.events.MouseEvent;

class Main extends Sprite
{
    private var messageField:TextField;
    function new(){
        super();
        var messageFormat:TextFormat = new TextFormat("Verdana", 24, 0xFF0000);
        messageFormat.align = TextFormatAlign.LEFT;

        messageField = new TextField();
        messageField.width = 500;
        messageField.x = messageField.y = 10;
        // There is a bug in the android target caused by the next line; it prevents to show the text on android
        //     however you can deactivate it or hopefully wait until an update fixes it
        messageField.defaultTextFormat = messageFormat;
        messageField.text = #if !mobile "<move the mouse>" #else "<touch the screen>" #end ;
        addChild(messageField);
        stage.addEventListener(MouseEvent.MOUSE_MOVE, MouseProcess);
    }

    private function text(txt:String) { messageField.text = txt; }
    private function MouseProcess(cursor:MouseEvent):Void {
        text('(${ cursor.stageX }, ${ cursor.stageY })');
        trace('It is happening: (${ cursor.stageX }, ${ cursor.stageY })');
    }
}