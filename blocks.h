//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "news -c", 3600, 13},
	{"", "update -c", 3600, 12},
	{"", "volume", 0, 11},
	{"", "brightness", 0, 10},
	{"", "battery", 60, 0},
	{"", "clock", 60, 0},
	{"", "calander", 3600, 0},
	{"", "network", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
