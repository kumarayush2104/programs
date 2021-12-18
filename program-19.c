#include <stdio.h>
#include "include/enroll.h"

void main() {
        enroll();
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("\nNumbers before swapping %d, %d\n\n", num1, num2);
	swap(num1,num2);
	main();
}


int swap(int num1, int num2) {
	int tmp=num1;
	num1=num2;
	num2=tmp;
	printf("Numbers after swapping %d, %d\n\n", num1, num2);
}
