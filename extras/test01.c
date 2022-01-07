#include <stdio.h>

void main(void) {
	int arr[5]= { 1,2,3,4,5 };
	char str[] = "Hello";
	for(int i=0;i<sizeof(arr)/sizeof(int);i++) {
		printf("Index %d:, Val: %d, Address: %p\n", i, arr[i], &arr[i]);
	} printf("\n\n");
	for(int i=0;i<sizeof(str)/sizeof(char)-1;i++) {
                printf("Index %d:, Val: %c, Address: %p\n", i, str[i], &str[i]);
        }
}
