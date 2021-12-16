#include <stdio.h>
#include "include/enroll.h"

void main() {
	system("clear");
        enroll();
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	swap(num1,num2);
}


int swap(int num1, int num2) {
	int tmp=num1;
	num1=num2;
	num2=tmp;
	printf("\n\nNumbers after swapping is %d, %d\n\n", num1, num2);
}
