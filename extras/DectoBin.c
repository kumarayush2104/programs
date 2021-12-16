#include <stdio.h>
#include <string.h>

main() {
	char bin[17]; int dec=0;
	printf("Binary to Decimal\n\n");
	printf("Enter binary number: ");
	scanf("\n%[^\n]s", bin);
	printf("\n");
	for(int i=0;i<strlen(bin);i++) {
		printf("%c\n", bin[i]);
	}
	//printf("%d\n\n", dec);
}
