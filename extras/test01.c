#include <stdio.h>

void main(void) {
	int a[2]={ 9 } b[2]= { 8 };
	int *c=&a[0], *d=&b[0];
	printf("\n\nSubtraction of %d and %d is %d\n\n", *c, *d,  *c-*d);
}
