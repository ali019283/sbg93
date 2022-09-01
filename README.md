# sbg93
sbg93 is a minimal befunge 93 interpreter, that barely works.

dont expect much out of it, it may lack some important features and it may have bugs.

it doesnt have char or ascii support for now(which includes ", g, p, ~ and ',')

# how to use
```
+-------------------------------------------------------------------+
| -> sbg93          [Befunge93 file]...                             |
| -> +              Addition                                        |
| -> -              Subtraction                                     |
| -> *              Multiplication                                  |
| -> /              Division                                        |
| -> %              Module                                          |
| -> !              NOT                                             |
| -> `              Greater than                                    |
| -> >              Direction right                                 |
| -> <              Direction left                                  |
| -> ^              Direction up                                    |
| -> v              Direction down                                  |
| -> ?              Random direction                                |
| -> _              Horizontal IF (0: right, 1: left)               |
| -> |              Vertical IF (0: up, 1: down)                    |
| -> :              Duplicate last value                            |
| -> \              Swap last 2 values given                        |
| -> $              Remove last value                               |
| -> .              Give last value as output and remove            |
| -> #              Discard next command                            |
| -> &              Get input                                       |
| -> @              End                                             |
+-------------------------------------------------------------------+
```

# installing / compiling
run 
```
# make
```
to compile

run 
```
# make install
```
to install

