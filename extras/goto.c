#include <stdio.h>

main() {
	int num;
	printf("Enter a number to check if its odd or even: ");
	scanf("%d", &num);
	if(num%2==0) {
		goto even;
	} else {
		goto odd;
	}
	even: {
		printf("\n\nIt is a even number\n\n");
		return 0;
	}
	odd: {
		printf("\n\nIt is a odd number\n\n");
		return 0;
	}
}
