#include <stdio.h>

void main(void) {
	int a=9, b=8;
	int *c=&a, *d=&b;
	printf("\n\nSubtraction of %d and %d is %d\n\n", *c, *d,  *c-*d);
}
