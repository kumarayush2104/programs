#include <stdio.h>

main() {
	int arr[] = { 1,2,3,4,5 }, n = sizeof(arr)/sizeof(int);
	int *address = &arr;
	system("clear");
	for(int i=0;i<n;i++){
		printf("Element %d: %d\n\n", i, *(address + i ));
	}
}
