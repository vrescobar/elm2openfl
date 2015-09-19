package;

import openfl.display.Bitmap;
import openfl.Assets;
import openfl.events.MouseEvent;

class Main extends openfl.display.Sprite {
    function new(){
        super();
        // in the project.xml I could redefine the path for a convenient path name
        var img = Assets.getBitmapData("images/yogi.jpg");
        var yogi = new Bitmap(img);
        addChild(yogi);
         // The defaults are already the 0, 0 corner and by using a closure I can have yogi in the local scope
        stage.addEventListener(MouseEvent.MOUSE_MOVE,
                                function(mouse:MouseEvent){
                                    yogi.width = yogi.height = Math.max(mouse.stageX, mouse.stageY);
                                });
    }
}