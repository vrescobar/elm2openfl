package;

import openfl.Assets;
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

        var font = Assets.getFont("assets/fonts/DroidSansMono.ttf");
        var messageFormat:TextFormat = new TextFormat(font.fontName, 24, 0xFF0000);
        messageFormat.align = TextFormatAlign.LEFT;
        messageField = new TextField();
        messageField.width = 500;
        messageField.x = messageField.y = 10;
        messageField.embedFonts = true;

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