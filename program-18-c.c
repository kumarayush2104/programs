#include <stdio.h>
#include "include/enroll.h"
#include "include/message.h"

main() {
	system("clear");
        enroll();
	int rows;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	int base=rows;
	if(rows%2!=0) warning("You are using odd number as a base, you may face some unexpected results !!");
	for(int x=1;x<=rows;x++) {
		for(int y=base;y>0;y--) {
			printf("  ");
		}
		for(int z=1;z<=x*2;z++) {
			printf("* ");
		}
		printf("\n");
		base--;
	}
}
