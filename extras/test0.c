#include <stdio.h>

int func(int *p) {
	*p = *p +1;
	return *p;
}

void main(void) {
	int num=2;
	printf("\n\n%d\n\n", func(&num));
}
