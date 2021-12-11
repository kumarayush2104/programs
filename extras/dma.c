#include <stdio.h>

main() {
	system("clear");
	int *x = (int *) malloc(4);
	printf("size of %d\n\n", sizeof(x));
	for(int i=0;i<2;i++) {
		x[i] = i+1;
	}
	printf("size of %d\n\n", sizeof(x));
	printf("Elements of *x are: \n\n");
	for(int i=0;i<6;i++) {
		printf("%d\n", x[i]);
	}
}
