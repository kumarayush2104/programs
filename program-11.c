#include <stdio.h>
#include "include/enroll.h"

main() {
	int age, tmp;
	system("clear");
        enroll();
	printf("Enter your age: ");
	tmp = scanf("%d", &age);
	if (tmp != 0){
		printf("\n\nYou have lived for %d\n\n", age*365*24*60*60);
		return 0;
	}
	printf("You have entered wrong input\n\n");
	return 1;
}
