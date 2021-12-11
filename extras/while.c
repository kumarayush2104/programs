#include <stdio.h>

main() {
	int z=10;
	while(z>-1) {
		if(z==0) {
			printf("Loop is ended\n\n");
		}
		else {
			printf("Loop is running\n\n");
		}
		z--;
	}
}
