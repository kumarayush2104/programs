#include <stdio.h>

main() {
	printf("Finding the length of longest integer sub-sequences\n\n");
	int arr[] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,1,2,3,4,5 };
	int size = sizeof(arr)/sizeof(int), i, tmp=0;
	int large=arr[0], j=0;
	for(i=0;i<size;i++) {
		j++;
		if(large>=arr[i]) {
//			printf("Breaking \n");
			large=arr[i];
//			printf("%d ", j);
			if(tmp<j) tmp=j;
			j=0;
		}
	}
	printf("Longest integer sub-sequences: %d\n\n", tmp);
}
