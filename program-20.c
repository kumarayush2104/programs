#include <stdio.h>
#include "include/enroll.h"

main() {
	system("clear");
        enroll();
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Factorial of the number: %d\n\n", fac(num));
}

int fac(int num) {
	if(num==0) {
		return 1;
	}
	return num * fac(num-1);
}
