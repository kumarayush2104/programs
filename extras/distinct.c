#include <stdio.h>

main() {
	int j, arr[] =  { 1,2,3,4,5,5,6 }, size = sizeof(arr)/sizeof(int), def, count=0;
	for(int i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(arr[j] == arr[i]){
				break;
			}
		}
		if( i ==j ) count++;
	}
	printf("\n\n\n%d\n\n\n", count);
}
