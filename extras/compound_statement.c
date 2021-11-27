#include <stdio.h>

int i=5;

void main() {
	printf("\n\n%d\n\n", i);
	i=10;
	{
		printf("%d\n\n", i);
		i=20;
		printf("%d\n", i );
	}
}
