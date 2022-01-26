#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void main(void) {
	int option;
	system("clear");
	printf("------------------------------------\n");
	printf("       Student Biodata (Ver: 5)     \n");
	printf("------------------------------------\n");
	printf("Press 1 for searching the database\n");
	printf("Press 2 for adding new record in database\n");
	printf("Press 3 for removing record from database\n");
	printf("Press 4 for modify existing records\n");
	printf("Press 5 to get summary of database\n");
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
			auth(option);
			break;
		}
		case 3: {
			system("clear");
			auth(option);
			break;
		}
		case 4: {
			system("clear");
			auth(option);
			break;
		}
		case 5: {
			system("clear");
			summ();
			break;
		}
		default: {
			system("clear");
			exit(0);
		}
	}
}


void insert(void) {
	char name[75], enroll[25], course[17], dob[20];
        printf("------------------------------------\n");
        printf("         New Student Record         \n");
        printf("------------------------------------\n");
	printf("\nEnter exit to quit and back to go back to main menu\n\n");
	printf("Enter Enrollment Number: ");
	scanf("\n%[^\n]s", enroll);
	if(strcmp("back", enroll)==0) {
		system("clear");
		main();
	}
	if(strcmp("exit", enroll)==0) {
		system("clear");
		exit(0);
	}
	if( access(enroll, F_OK) == 0 ) {
		system("clear");
		printf("This enrollment number already exists...\n\n");
		insert();
	}
	if( strlen(enroll) != 15) {
		system("clear");
		printf("Invalid Enrollment Number...\n\n");
		insert();
	}
	printf("Enter Name: ");
	scanf("\n%[^\n]s", name);
	printf("Enter Date of Birth (dd/mm/yyyy): ");
	scanf("\n%[^\n]s", dob);
	printf("Enter Course Name: ");
	scanf("\n%[^\n]s", course);

	printf("\n\n");
	short int key=0;
	system("clear");
        printf("------------------------------------\n");
        printf("        Is this info correct ?      \n");
        printf("------------------------------------\n");
	printf("Name: %s\nEnrollment Number: %s\nDate of Birth: %s\nCourse Name: %s\n\n", name, enroll, dob, course);
	printf("Is this info correct ? (Yes:1 No:0 ): ");
	if(scanf("%hd", &key)==0) {
		system("clear");
		insert();
	}
	if(key==1) {
		generate(name, enroll, dob, course);
	} else {
		system("clear");
		insert();
	}
}

void generate(char name[75], char enroll[25], char dob[20], char course[17]) {
	FILE *open = fopen(enroll, "w");
	fprintf(open, "Name: %s\n", name);
	fprintf(open, "Enrollment Number: %s\n", enroll);
	fprintf(open, "Date of Birth: %s\n", dob);
	fprintf(open, "Course: %s\n", course);
	fclose(open);
	system("clear");
	printf("\n\n%s Registration Successful\n\n", enroll);
	main();
}


void search(void) {
	char enroll[25], buffer[300];
        printf("------------------------------------\n");
        printf("        Search Student Record       \n");
        printf("------------------------------------\n");
fix:	printf("\nEnter exit to quit and back to go back to main menu\n\n");
	printf("Enter Enrollment Number: ");
	scanf("\n%[^\n]s", enroll);
	if(strcmp("back", enroll)==0) {
		system("clear");
		main();
	}
	if(strcmp("exit", enroll)==0) {
		system("clear");
		exit(0);
	}
	if( access(enroll, F_OK) != 0 ) {
		system("clear");
		printf("\nEnrollment number doesn't exist, Please run this portal again to register a new student record\n\n");
		search();
	}
	FILE *open = fopen(enroll, "r");
	system("clear");
	fread(buffer, 50, 50, open);
	fflush(stdout);
	printf("------------------------------------\n");
        printf("            Student Record          \n");
        printf("------------------------------------\n");
	printf("%s\n", buffer);
	goto fix;
}

void del(void) {
	char enroll[25]; int key;
        printf("------------------------------------\n");
        printf("        Delete Student Record       \n");
        printf("------------------------------------\n");
	printf("\nEnter exit to quit and back to go back to main menu\n\n");
	printf("Enter Enrollment Number: ");
	scanf("\n%[^\n]s", enroll);
        if(strcmp("back", enroll)==0) {
                system("clear");
                main();
        }
        if(strcmp("exit", enroll)==0) {
                system("clear");
                exit(0);
        }
	if( access(enroll, F_OK) != 0 ) {
		system("clear");
		printf("\nEnrollment Number doesn't exist\n\n");
		del();
	}
	printf("Are you sure ? (Yes:1, No:0)\n: ");
	if(scanf("%d", &key)==0) {
		system("clear");
		del();
	}
	if(key==0) {
		system("clear");
		del();
	}
	remove(enroll);
	system("clear");
	printf("\n\nRecord %s cleared\n", enroll);
	main();
}

void modify(void) {
	char enroll[25], print[35]="cat ";
        printf("------------------------------------\n");
        printf("        Modify Student Record       \n");
        printf("------------------------------------\n");
	printf("\nEnter exit to quit and back to go back to main menu\n\n");
	printf("Enter Enrollment Number: ");
	scanf("\n%[^\n]s", enroll);
	if(strcmp("back", enroll)==0) {
                system("clear");
                main();
        }
        if(strcmp("exit", enroll)==0) {
                system("clear");
                exit(0);
	}
	if( access(enroll, F_OK) !=0 ) {
		system("clear");
		printf("\n\nEnrollment Number doesn't exist\n\n");
		modify();
	}
	strcat(print, enroll);
	char pre[50], changes[50], post[200];
	int choice;
ahous:
	system("clear");
	fflush(stdout);
	system(print);
	printf("\n\nPress 1 to Change Name\nPress 2 to Change Date of Birth\nPress 3 to Change Course\n: ");
	if(scanf("%d", &choice)==0){
		system("clear");
		printf("Working");
		goto ahous;
	}
	printf("\n\n");
	if(choice==1) {
		printf("Enter Name: ");
		scanf("\n%[^\n]s", changes);
	} else if(choice==2) {
		printf("Enter Date of Birth(dd/mm/yyyy): ");
		scanf("\n%[^\n]s", changes);
	} else if(choice==3) {
		printf("Enter Course: ");
		scanf("\n%[^\n]s", changes);
	} else {
		system("clear");
		printf("\n\nPlease enter a valid input\n\n");
		goto ahous;
	}
	FILE *fp = fopen(enroll, "r");
	FILE *tmpfp = fopen("tmp", "w");

	if(choice==1) {
		fprintf(tmpfp, "Name: %s\n", changes);
		for(int i=0;i<1;i++) fscanf(fp, "\n%[^\n]s", pre);
		for(int i=0;i<3;i++) {
			fscanf(fp, "\n%[^\n]s", pre);
			fprintf(tmpfp, "%s\n", pre);
		}
	} if(choice==2) {
		for(int i=0;i<choice;i++) {
			fscanf(fp, "\n%[^\n]s", pre);
			fprintf(tmpfp, "%s\n", pre);
		}
		fprintf(tmpfp, "Date of Birth: %s\n", changes);
		for(int i=0;i<choice+1;i++) fscanf(fp, "\n%[^\n]s", pre);
		fprintf(tmpfp, "%s\n", pre);
	} if(choice==3) {
		for(int i=0;i<choice;i++) {
			fscanf(fp, "\n%[^\n]s", pre);
			fprintf(tmpfp, "%s\n", pre);
		}
		fprintf(tmpfp, "Course: %s\n", changes);
	}
	fclose(tmpfp);
	tmpfp = fopen("tmp", "r");
	short key; system("clear");
	fread(post, 50, 50, tmpfp);
        printf("------------------------------------\n");
        printf("        Is this info correct ?      \n");
        printf("------------------------------------\n");
	printf("%s", post);
	printf("Is this info correct ? (Yes:1 No:0 ): ");
        if(scanf("%hd", &key) == 0) {
		system("clear");
		modify();
	}
        if(key==1) {
                fclose(fp);
		remove(enroll);
		rename("tmp", enroll);
        } else {
                system("clear");
                modify();
        }
	system("clear");
	printf("\n\nModification Successful\n\n");
	sleep(3);
	main();
}

void auth(int option) {
	char username[10], passcode[6];
        printf("------------------------------------\n");
        printf("	    Authenication  	    \n");
        printf("------------------------------------\n");
	printf("\nEnter exit to quit and back to go back to main menu\n\n");
	printf("Enter Username: ");
	scanf("\n%[^\n]s", username);
        if(strcmp("back", username)==0) {
                system("clear");
                main();
        }
        if(strcmp("exit", username)==0) {
                system("clear");
                exit(0);
        }
	printf("Enter 4 Digit Passcode: ");
	scanf("\n%[^\n]s", &passcode);
	system("clear");
	if((strcmp(username, "Admin") == 0 && strcmp(passcode, "4321")==0) || (strcmp(username, "kumarayush2104") == 0 && strcmp(passcode,"2161")==0)) {
		printf("\n\nAuthenication Successful, you are being redirected\n\n");
		sleep(3);
		if(option==3) {
			system("clear");
			del();
		}
		if(option==2) {
			system("clear");
			insert();
		}
		if(option==4) {
			system("clear");
			modify();
		}
	}
	system("clear");
	printf("\n\nWrong Username or Password\n\n");
	sleep(3);
	auth(option);
}

void summ(void) {
	char count[]="ls 20*03*10* | wc -l", list[]="ls -1 2021*";
	printf("------------------------------------\n");
        printf("      Student Database Summary      \n");
        printf("------------------------------------\n");
	printf("Total Students Registered: ");
	fflush(stdout);
	system(count);
	printf("\n\nList of Registered Enrollment numbers: \n\n");
	fflush(stdout);
	system(list);
	sleep(6);
	main();

}
