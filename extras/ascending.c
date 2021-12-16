#include <stdio.h>

main() {
	printf("Printing an array in ascending order\n\n");
	int arr[]={ 1,2,3,9,6,7,8 };
	int size=sizeof(arr)/sizeof(int);
	int n=0;
	int large;
	for(int i=0;i<size;i++) {
		for(int j=size;j<size;j++) {
			if(arr[i]==arr[j]) {
				break;
			}
		//	else if(arr[i]>arr[j]) {
		//		large=arr[j];
			 else {
				printf("%d %d\n", arr[i], arr[j]);
			}

		}
		//printf("%d ", large);
	}
}
