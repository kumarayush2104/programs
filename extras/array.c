#include <stdio.h>

main() {
	int a[5], size=sizeof(a)/sizeof(int);
	for(int i=0;i<size+2;i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\n");
	for(int i=0;i<size+2;i++) printf("number %d: %d\n", i, a[i]);
}
