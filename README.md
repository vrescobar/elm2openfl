# elm2openfl

Port of the [elm examples](http://elm-lang.org/Examples.elm) to haxe's [openfl framework](openfl.org); or at least the most equivalent code in idiomatic haxe and openfl.
I don't try to force openfl work in the way Elm does, but using equivalent patterns to solve the same problems, e.g. instead of use haxe signals, the way to go in openfl is to use events.

This repository has been created for my own learning, but additional ideas and pull requests are also welcome.

# Examples Implemented

## Signals / Events

In elm the communication between the parts is mostly made with signals, even if haxe has several implementations and 
libraries of signals, in openfl events the way to go is using events

### Mouse
[position](Events/mouse/position)
[is down](Events/mouse/is_down)


# Related repositories
[elm2haxe](https://github.com/metaperl/elm2haxe): Those guys have more ambitious goal, but I can't really understand the logic behind their folder structure.

