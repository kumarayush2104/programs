#include <stdio.h>
#define x main



x() {
	int base;
	printf("Enter base of the triangle: ");
	scanf("%d", &base);
	int one =base/2;
	for(int i=0;i<base;i++) {
		for(int j=0;j<i;j++){
			printf(" ");
		}
		for(int k=one*2;k>0;k--){
			printf("+");
		}
		printf("\n");
		one--;
	}
}
