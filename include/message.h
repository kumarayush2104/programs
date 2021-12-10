#include "color.h"


info(char *message) {
	cyan();
	printf("\n%s\n", message);
	white();
}

warning(char *message) {
	yellow();
	printf("\n%s\n", message);
	white();
}

error(char *message) {
	red();
	printf("\n%s\n", message);
	white();
}
