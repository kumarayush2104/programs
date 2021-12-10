#include <stdio.h>

main(void) {
	int num1, num2;
	system("clear");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	int large = *&num1;
	if ( large < *&num2 ) {
		large = *&num2;
	}
	printf("\n\nLargest number is %d\n\n", large);
}
