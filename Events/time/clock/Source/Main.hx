package;

import openfl.Lib;
import elm.graphics.collage.Ngon;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.TimerEvent;
import openfl.utils.Timer;
import Std;
import Date;


class Main extends Sprite {
    private var p:Sprite;
    private var watch:Sprite;
    private var watch_border:Sprite;
    private var seconds_hand:Sprite;
    private var minutes_hand:Sprite;
    private var hours_hand:Sprite;

    function new(){
        super();

        watch_border = new Ngon(0, 0, 12, 110, 0xEEEEED, 1);
        watch = new Ngon(0, 0, 12, 111, 0xD6DAD3, 1);
        seconds_hand = newHand(100, 0xFF0000);
        minutes_hand = newHand(100, 0x565854);
        hours_hand = newHand(60, 0x565854);

        addChild(watch);
        addChild(watch_border);
        addChild(seconds_hand);
        addChild(minutes_hand);
        addChild(hours_hand);

        stage.addEventListener(Event.RESIZE, onResize);
        keepLayout();

        var timer = new Timer(1000);
        timer.addEventListener (TimerEvent.TIMER, timer_onTimer);
        timer.start();
    }
    private function timer_onTimer(event:TimerEvent):Void {
        var d = Date.now();
        seconds_hand.rotation = d.getSeconds() * (360/60) - 90;
        minutes_hand.rotation = d.getMinutes() * (360/60) - 90;
        hours_hand.rotation = d.getHours() * (360/24) - 90;
    }

    function onResize(e:Event) keepLayout();
    function keepLayout() {
        watch.x = Std.int(Lib.current.stage.stageWidth/2);
        watch.y = Std.int(Lib.current.stage.stageHeight/2);
        watch_border.x = hours_hand.x = minutes_hand.x = seconds_hand.x = watch.x;
        watch_border.y = hours_hand.y = minutes_hand.y = seconds_hand.y = watch.y;
    }

    function newHand(radius:Float, color:Int, ?alpha:Float=1) {
        var hand:Sprite = new Sprite();
        hand.graphics.beginFill(color);
        hand.graphics.drawRect(0,0, radius, 0.8);
        hand.graphics.endFill();
        return hand;

    }
}
