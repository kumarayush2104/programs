#include <stdio.h>

main() {
	system("clear");
	int test[] = { 1, 2, 9, 4, 5 };
	int n=sizeof(test)/sizeof(int);
	int large=test[0];
	for(int i=0;i<n;i++) {
		if( test[i]>large ) {
			large = test[i];
		}
	}
	printf("%d is the largest number in the array\n\n\n", large);
}
