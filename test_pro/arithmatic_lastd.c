#include <stdio.h>

main() {
	int num;
	system("clear");
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\nLast digit of the number is %d\n\n", num%10);
}
