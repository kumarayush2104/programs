// This extension is for clearing the screen

#ifdef _WIN32
	#include <conio.h>
#endif

clear() {
	#ifdef _WIN32
	clrscr();
	#elif __linux__
	system("clear");
	#else
	printf("This Program supports only Linux and Windows installations at the moment");
	exit(0);
	#endif
}
