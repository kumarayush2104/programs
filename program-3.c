#include <stdio.h>
#include "include/enroll.h"

main() {
	system("clear");
	int num;
        enroll();
	printf("Enter a Number: ");
	scanf("%d", &num);
	printf("The number you entered is %d\n\n", num);
}
