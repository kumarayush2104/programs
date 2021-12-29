#include <stdio.h>

main() {
	//even_add
	float sum=0;
	for(float i=1;i<=5;i++) {
		sum = sum + 1/i;
	}
	printf("%f\n", sum);
}
