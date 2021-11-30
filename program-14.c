#include <stdio.h>
#include "include/clear.h"
#include "include/enroll.h"

main() {
	clear();
        enroll();
	int choice, num1, num2;
	printf("\n\n   A Simple Calculator  \n\n");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("\n\n");
	printf("Press 1 for addition\n");
	printf("Press 2 for Subtraction\n");
	printf("Press 3 for multiplication\n");
	printf("Press 4 for division\n\n\n");
	scanf("%d", &choice);
	printf("\n\n");
	switch(choice) {
		case 1:
			printf("Addition of %d and %d is %d", num1, num2, num1+num2);
			break;
		case 2:
			printf("Subtraction of %d and %d is %d", num1, num2, num1-num2);
			break;
		case 3:
			printf("Multiplication of %d and %d is %d", num1, num2, num1*num2);
			break;
		case 4:
			printf("Division of %d and %d is %d", num1, num2, num1/num2);
		default:
			break;
	}
	printf("\n\n\n\n\n");

}
