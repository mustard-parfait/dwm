//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"dwmnet",				5,		0},
	{"",		"dwmdisk",				3600,		0},
	{"", 		"dwmmemory",				10,		0},
	{"",		"dwmcpu",				10,		0},
	{"", 		"dwmbattery 2>/dev/null ",			300,		0},
	{"", 		" date '+%b %d (%a) %I:%M%p' ",		60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
