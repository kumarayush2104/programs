#include <stdio.h>
#include "include/enroll.h"

main() {
	system("clear");
        enroll();
	int num1, num2;
	printf("Enter First number: ");
	scanf("%d", &num1);
	printf("Enter Second number: ");
	scanf("%d", &num2);
	int sum= num1 + num2;
	printf("Sum of %d and %d is %d\n\n", num1, num2, sum);
}
