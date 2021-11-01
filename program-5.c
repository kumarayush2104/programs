#include <stdio.h>
#include "include/enroll.h"
#include "include/clear.h"
main() {
	clear();
	float tempF, tempC;
	enroll();
	printf("\nEnter Temperature in F: ");
	scanf("%f", &tempF);
	tempC= (tempF-32)*5/9;
	printf("Temperature in C: %.2f\n\n", tempC);
}

