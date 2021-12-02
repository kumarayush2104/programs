#include <stdio.h>

main() {
	int try[] = { 1, 2, 3, 4, 5 }, j=0, key=0;
	int n = sizeof(try)/sizeof(int);
	printf("\n\n%d\n\n", n);
	for(int i=0;i<n;i++){
		if(try[j] == try[i]){
			break;
		}
		j++;
	}

	printf("\n\n%d\n\n", j);
}
