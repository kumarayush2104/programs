#include <stdio.h>

main() {
	printf("This program will print cube from to gven number\n\n");
	printf("Enter a num: ");
	int num, out=1;
	scanf("%d", &num);
	for(int i=1;i<=num;i++) {
		for(int j=1;j<=3;j++) {
			out = out * i;
		}
		printf("Cube of %d: %d\n", i, out);
		out=1;
	}
}
