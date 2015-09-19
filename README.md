# elm2openfl

Port of the [elm examples](http://elm-lang.org/Examples.elm) to haxe's [OpenFL framework](openfl.org); or at least the most equivalent code in idiomatic haxe and openfl.
I don't try to force OpenFL work in the way Elm does, but using equivalent patterns to solve the same problems, e.g. instead of use haxe signals, the way to go in openfl is to use events.

*This repository has been created for my own learning* but additional ideas and pull requests are also welcome.

In the comparison between Elm and Haxe it is possible to see that Elm signals are very often just a one liner and Haxe 
uses a verbose class (very often with much more options) which is per design full of side effects.

To change that part of OpenFL the design would mean a whole new signal library and probably also a new renderer which 
keeps the status in a nested/composable data structure and diff it between the frame renderings. 

That is not possible without rewrite the whole OpenFL and Lime almost from the basement.


# Examples Implemented

## Signals / Events

In elm the communication between the parts is mostly made with _signals_, even if haxe has several implementations and
libraries of signals, in OpenFL _events_ are the way to go.


### Mouse
[position](Events/mouse/position) </br>
[is down](Events/mouse/is_down)  </br>
[clicks](Events/mouse/clicks)  </br>
[yogi](Events/mouse/yogi)  </br>


# Related repositories
[elm2haxe](https://github.com/metaperl/elm2haxe): Those guys have more ambitious goal, but I can't really understand the logic behind their folder structure.

