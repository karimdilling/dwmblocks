//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"volume.sh",	0,	2},
	{"",	"time.sh",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
