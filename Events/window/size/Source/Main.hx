package;

import openfl.display.Bitmap;
import openfl.Assets;
import openfl.events.Event;

class Main extends openfl.display.Sprite {
    function new(){
        super();
        // in the project.xml I could redefine the path for a convenient path name
        var img = Assets.getBitmapData("images/paint.jpg");
        var background = new Bitmap(img);
        #if flash // Seems that flash behaves slightly different here
        background.width = background.height = Math.max(stage.stageWidth, stage.stageHeight);
        #end
        function onResize(e:Event){
            background.width = background.height = Math.max(stage.stageWidth, stage.stageHeight);
        }
        stage.addEventListener(Event.ADDED_TO_STAGE, onResize);
        stage.addEventListener(Event.RESIZE, onResize);
        addChild(background);
    }
}