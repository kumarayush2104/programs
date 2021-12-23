#include <stdio.h>
#include "include/enroll.h"

main() {
        enroll();
	int arr[11], size=sizeof(arr)/sizeof(int), fnl[size], small, j=1;
	for(int i=1;i<size;i++) {
		printf("Enter number %d: ", i);
		scanf("%d", &arr[i]);
	}
	small=arr[1];
	for(int i=size;i>1;i--) {
		if(small <= arr[i]) printf("%d ", arr[i]);
	}
	printf("\n\n");
	/*for(int i=1;i<size;i++) {
		printf("%d ", fnl[i]);
	}*/
}
