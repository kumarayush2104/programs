#include <stdio.h>
#include "include/enroll.h"

main() {
	fflush(stdin);
	long age; int tmp;
	system("clear");
        enroll();
	printf("Enter your age: ");
	tmp = scanf("%ld", &age);
	if (tmp != 0){
		printf("\nYou have lived for %ld\n", age*365*24*60*60);
		sleep(2);
		main();
	}
	if (tmp == 0){
		printf("You have entered wrong input\n");
		sleep(2);
		scanf("%s", &age);
		main();
	}
}
