#include <stdio.h>

void main(void) {
	int a=5;
	int *p = &a;
	printf("\nLoc: %p, Val: %d\n", p, *p);
	p = p + 3;
        printf("\nLoc: %p, Val: %d\n", p, *p);
	*p = 25;
        printf("\nLoc: %p, Val: %d\n", p, *p);
	p = p - 3;
        printf("\nLoc: %p, Val: %d\n", p, *p);


}
