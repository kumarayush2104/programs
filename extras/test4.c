#include <stdio.h>

main() {
	int sum=1;
	for(int i=1;i<=6;i++) {
		for(int j=6;j>=i;j--) {
			printf(" ");
		}
		for(int j=1;j<=i;j++) {
			if(sum<10) printf("0");
			printf("%d ", sum);
			sum++;
		}
		printf("\n");
	}
}
