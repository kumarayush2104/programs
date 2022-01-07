#include <stdio.h>

void main(void) {
	int arr[10] = { 1,2,3,4,5 }, element, index;
	printf("Enter element: ");
	scanf("%d", &element);
	printf("Enter Index: ");
	scanf("%d", &index);
	for(int i=6; i>index;i--) {
		arr[i] = arr[i-1];
	//	arr[i+1] = arr[i];
	//	printf("%d %d\n", i+1, i);
	}
	arr[index] = element;
	for(int i=0;i<10;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}
