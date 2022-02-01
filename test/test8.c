#include <stdio.h>

void main() {
	int num=9;
	int *ptr = &num;
	ptr =10;
	printf("%d", *ptr);
}

// not printing 10, why ?
