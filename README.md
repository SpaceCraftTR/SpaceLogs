# SpaceLogs
Simple log parser for C++ developers.

### How to build?

Building SpaceLogs is really simple, just execute the makefile. :)

```
make
```
### Important
Use SpaceLogs with the way you use std::cin and std::cout. For instance;

```cpp
"Test log">>log;
stream<<log;
```

This would be a common mistake;
```cpp
"Test log">>log;
"Test log 2\nNew log!">>log;
stream<<log;
```
With the wrong code above, we've only passed the second log (or list of logs that are seperated with \n character) to our stream.

Please be aware about this.
