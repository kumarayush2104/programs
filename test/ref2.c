#include <stdio.h>

void main() {
	int soc[]= { 1,2,3,4,5,6,7,8,9,10 };
	int *socptr= &soc;
	printf("\n\nElements of soc[]:\n");
	for(int i=0;i<10;i++) printf("%d\n", *(socptr + i)); 
}
