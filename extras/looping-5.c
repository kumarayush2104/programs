#include <stdio.h>

main() {
	int base;
	printf("Enter base of the triangle: ");
	scanf("%d", &base);
	if( base%2 != 0) {
		base++;
		printf(" Warning !! taking a even number as a base !!\n\n\n\n");
	}
	int ref=base;
	for(int i=0;i<=base/2;i++) {
		for(int j=ref;j>=0;j--){
			printf(" ");
		}
		for(int k=0;k<i*2;k++) {
			printf("*");
		}
		ref--;
		printf("\n");
	}
}
