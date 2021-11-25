#include <stdio.h>
#include "include/enroll.h"

main() {
	int num;
	system("clear");
        enroll();
	printf("Enter a number to check its divisibility by 3: ");
	scanf("%d", &num);
	if ( num%3==0) {
		printf("\nYes, %d is divisible by 3\n\n", num);
	}
	printf("\n\n");
	return 0;
}
