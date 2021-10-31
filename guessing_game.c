#include <stdio.h>
#include <time.h>
#include "include/enroll.h"
#include "include/clear.h"

main() {
	clear();
        enroll();
	int num;
	printf("------------------------------------\n");
	printf("-	    Guessing Game	   -\n");
	printf("------------------------------------\n");
	printf("Guess an Integer: ");
	scanf("%d", &num);
	srand(time(NULL));
	int randNum = rand() % 11;

	if( randNum == num ) {
		printf("You got me !!!\n\n\n");
	} else {
		printf("Sorry, The integer I was thinking is %d\n\n\n", randNum);
	}


}
