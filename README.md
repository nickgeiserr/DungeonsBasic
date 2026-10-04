# DungeonsBasic
Blank dll + console setup that wont crash mcd2

on a time crunch so things aren't perfect like handling input etc. feel free to make any pull requests for changes. i'll probably merge them if they don't break it. small project used for speeding up larger ones.

sidenotes: modding framework im working on https://github.com/nickgeiserr/Spicewood

## How to run

1. Build the Library solution to get your dll.
2. Run the output server. 
3. Inject the dll using any injector of your choice (if you can't find one, my spicewood repo has a self contained injector in it)
4. make sure the console loaded properly. after that, ur set.


## How to write

The only thing this changes is that you must use the defined console Print function i setup. It's very simple to understand. 

> Print(PrintType, std::string message);

> PrintType determines the color + starting tag

message is the message. nothing else changes.

there is 5 print types
```cpp
enum PrintType {
	Startup, - used one on startup to print a special line
	Info, - info tag
	Debug, - debug info
	Error, - error log
	Warning - warning
};
```