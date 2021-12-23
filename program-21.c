#include <stdio.h>
#include "include/enroll.h"

main() {
        enroll();
	int arr[11], size=sizeof(arr)/sizeof(int);
	for(int i=1;i<size;i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &arr[i]);
	}
	int large=arr[1];
	for(int i=1;i<size;i++) {
		if(large < arr[i]){
			large=arr[i];
		}
	}
	int small=arr[1];
	for(int i=1;i<size;i++) {
		if(small > arr[i]) {
			small=arr[i];
		}
	}
	printf("\n\n");
	printf("Smallest number: %d, Largest number : %d\n\n", small, large);
}
