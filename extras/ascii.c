#include <stdio.h>
int i;
main() {
	for( i=0; i<256; ++i) {
		printf("%d: %c\n", i, i);
	}
}
