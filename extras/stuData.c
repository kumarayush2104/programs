#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void main(void) {
	system("clear");
	printf("------------------------------------\n");
	printf("	  Student Biodata	    \n");
	printf("------------------------------------\n");
	printf("Press 1 for searching the database\n");
	printf("Press 2 for adding new record in database\n");
	printf("Press 3 for removing record from student database\n");
	printf("Press any other key to quit\n: ");
	scanf("%d", &option);
	switch(option) {
		case 1: {
			system("clear");
			search();
			break;
		}
		case 2: {
			system("clear");
			insert();
			break;
		}
		case 3: {
			system("clear");
			remove();
			break;
		}
		default:
			return 0;
	}
}


insert() {
	char name[75], enroll[25], course[15], dob[10];
        printf("------------------------------------\n");
        printf("         New Student Record         \n");
        printf("------------------------------------\n");
	printf("Enter Enrollment Number: ");
	scanf("\n%[^\n]s", enroll);
	if( access(enroll, F_OK) == 0 ) {

	}
}


