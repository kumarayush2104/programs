#include <stdio.h>
#include "include/enroll.h"

main() {
	system("clear");
        enroll();
	int rows;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	for(int x=1;x<=rows;x++) {
		for(int y=1;y<=x;y++) {
			printf("%d ", y);
		}
		printf("\n");
	}

}
