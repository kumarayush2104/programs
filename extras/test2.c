#include <stdio.h>

main() {
	int arr[]={ 5,1,2,3,4,5,6,7,8 }, fix, key=0;
	int n = sizeof(arr)/sizeof(int);
	printf("We are trying to test number of distinct numbers\n\n");
	int distinct=n;
	for(int i=0;i<n;i++){
		fix = arr[i];
		for(int j=i+1;j<n;j++){
			if( fix == arr[j] ) {
	                        distinct--;
			}
		}
	}
	printf("Total number of distinct numbers: %d\n\n", distinct);
}
