#include <stdio.h>

main() {
	int num1, num2;
	system("clear");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	if ( num1 > num2 ) {
		printf("%d is greater than %d\n\n", num1, num2);
	} else if ( num2 > num1 ) {
		printf("%d is greater than %d\n\n", num2, num1);
	} else if ( num1 == num2 )  {
		printf("%d is equal to %d\n\n", num1, num2);
	} else {
		exit(1);
	}
}
