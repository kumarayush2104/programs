#include <stdio.h>

main() {
	printf("Finding the length of longest integer sub-sequences\n\n");
	int arr[] = { 1,2,3,1,2,3,4,1,2,3,4,5 };
	int size = sizeof(arr)/sizeof(int), i, tmp=0;
	int large=arr[0], j=0;
	for(i=0;i<size;i++) {
		j++;
		if(large>=arr[i]) {
			large=arr[i];
			if(tmp<j) tmp=j;
			j=0;
		}
	}
	printf("Longest integer sub-sequences: %d\n\n", tmp);
}
