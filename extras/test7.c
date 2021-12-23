#include <stdio.h>

main() {
	printf("Printing Fibonacci Series\n\n");
	int a=0, b=1, sum;
	printf("0 1 ");
	for(int i=0;i<50;i++) {
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ", sum);
	}
	printf("\n\n");
}

