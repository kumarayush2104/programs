#include <stdio.h>

main() {
	int num1, num2;
	system("clear");
	printf("Enter First number: ");
	scanf("%d", &num1);
	printf("Enter Second number: ");
	scanf("%d", &num2);
	printf("\n\nSum of %d and %d is %d\n\n", *&num1, *&num2, *&num1+*&num2);
}
