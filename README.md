# elm2openfl

Port of the [elm examples](http://elm-lang.org/Examples.elm) to haxe's [OpenFL framework](openfl.org); or at least the most equivalent code in idiomatic haxe and openfl.
I don't try to force OpenFL work in the way Elm does, but using equivalent patterns to solve the same problems, e.g. instead of use haxe signals, the way to go in openfl is to use events.

*This repository has been created for my own learning* but additional ideas and pull requests are also welcome.

In the comparison between Elm and Haxe it is possible to see that Elm signals are very often just a one liner and Haxe 
uses a verbose class (very often with much more options) which is per design full of side effects.

To change that part of OpenFL the design would mean a whole new signal library and probably also a new renderer which 
keeps the status in a nested/composable data structure and diff it between the frame renderings. 

That is not possible without rewrite the whole OpenFL and Lime almost from the basement.

# Parts of the elm library which I implemented

I am also lazily implementing the minimum required functions/classes from Elm which I need to implement the examples.
I am not really planning to port the things which already have an equivalent in openFL or haxe 
(for example I didn't port the __HSL__ color schema, it is out of the scope of this project).

You can explore them in the package [Elm](Elm) from this repository.

# Examples Implemented

## Core
Not everything under the section core is relevant to haxe as they are different languages, but I find the type system
of haxe flexible enough to implement everything that Elm has to offer without major complications.
 
### union types
 [either](Core/union_types/either) </br>
 binary tree </br>
 boolean expressions </br>


## Visuals
### Layout
[Hello World](Visuals/layout/hello_world) </br>
[Simple layout](Visuals/layout/layout_simple) </br>

##  Events (Signals)
In elm the communication between the parts is mostly made with _signals_, even if haxe has several implementations and
libraries of signals, in OpenFL _events_ are the way to go.


### Mouse
[position](Events/mouse/position) </br>
[is down](Events/mouse/is_down)  </br>
[clicks](Events/mouse/clicks)  </br>
[tracker](Events/mouse/tracker)  </br>
[yogi](Events/mouse/yogi)  </br>
[stamps](Events/mouse/stamps) </br>
### Window
[size](Events/window/size) </br>
[centering](Events/window/centering) </br>
### Keyboard
[arrows](Events/keyboard/arrows) </br>
[wasd](Events/keyboard/wasd) </br>
[keys down](Events/keyboard/keys_down) </br>
[key presses](Events/keyboard/key_presses) </br>
### Time
[clock](Events/time/clock): This implementation is way different but with similar results.</br>

# Related repositories
[elm2haxe](https://github.com/metaperl/elm2haxe): Those guys have more ambitious goal, but I can't really understand the logic behind their folder structure.

