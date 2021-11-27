#include <stdio.h>
#include "include/enroll.h"

main() {
	int num1, num2, num3;
	system("clear");
        enroll();
	printf("Enter First number: ");
	int a = scanf("%d", &num1);
	printf("Enter Second number: ");
	int b = scanf("%d", &num2);
	printf("Enter Third number: ");
	int c = scanf("%d", &num3);
	if ( a==0 || b==0 || c==0 ) {
		printf("You are supposed to write and integer");
		return 1;
	}

	if ( num1 > num2 && num1 > num3 ) {
		printf("%d is greater than %d and %d\n\n", num1, num2, num3);
	}
	if ( num2 > num1 && num2 > num3 ) {
		printf("%d is greater than %d and %d\n\n",  num2, num1, num3);
	}
	if ( num3 > num1 && num3 >num2 ) {
		printf("%d is greater than %d and %d\n\n", num3, num1, num2);
	}
}
