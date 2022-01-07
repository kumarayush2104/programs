#include <stdio.h>

void main(void) {
	printf("This will print number in descending order\n\n");
	int arr[]= { 3,14,75,86,31,86 };
	int large=arr[0];
	for(int i=0;i<6;i++) {
		if(large<arr[i]) {
			large=arr[i];
			break;
		}
		printf("%d ", large);
	}
}
