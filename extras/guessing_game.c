#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../include/enroll.h"
#include "../include/clear.h"

main() {
	clear();
        enroll();
	int num;

	printf("----------------------------------\n");
	printf("-	   Guessing Game  	 -\n");
	printf("----------------------------------\n");
	printf("Guess an Integer in 0 to 10: ");
	srand(time(NULL));
	int randNum = rand() % 11;
	if (scanf("%d", &num) != 1) {
		scanf("%s", &num);
	printf("%d", num);
		if( num==1953069157 || num==1414092869 ){
			clear();
			exit(0);
		}
		printf("\nYou are supposed to write an integer\n\n");
	}
	else if (num > 10 || num < 0) {
		printf("\nYou are supposed to write in 0 to 10\n\n");
	}
	else if (randNum == num) {
		printf("\nYou got me !!!\n\n");
	} else {
		printf("\nYou are wrong, I was thinking about %d\n\n", randNum);
	}

	printf("Game will reset in 3 secs...\n");
	printf("Write \"exit\" or \"EXIT\" to quit\n\n");
	sleep(2);
	main();
}
