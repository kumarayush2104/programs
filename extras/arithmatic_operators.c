#include <stdio.h>

main() {
	int num1, num2;
	system("clear");
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("\n\nAddition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: Quotient:%d, Remainder: %d\n\n", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);
}
