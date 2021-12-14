#include <stdio.h>
#include "include/enroll.h"

main() {
	system("clear");
        enroll();
	printf("\nPrinting prime numbers between 1 to 100\n\n\n");
	int prime=1;
	for(int i=2;i<100;i++) {
		prime=1;
		for(int j=2;j<i;j++) {
			if(i%j==0) {
				prime=0;
				break;
			}
		}
		if(prime==1) {
			printf("Prime number : %d\n", i);
		}
	}
}
