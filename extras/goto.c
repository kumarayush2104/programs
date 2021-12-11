#include <stdio.h>
#include "../include/message.h"

main() {
	system("clear");
	printf("Testing GOTO\n\n");
	int x=0, z=0;
		if (x==0) {
			if( z== 0) {
				goto test;
			}
		}
	test: {
		warning("Go to is running");
		error("Go to is running");
		info("Go to is running");
	}
}
