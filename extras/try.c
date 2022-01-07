#include <stdio.h>

void main(void) {
	int a[5]= { 1,2,3,40,5 };
	int *x = &a[3];
	printf("%d\n", sizeof(a));
	free(x);
	// printf("Loc: %p Val: %d\n", x+3, *(x+3));
	printf("%d\n", sizeof(a));
}
