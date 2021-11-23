#include <stdio.h>


main() {
	int age;
	system("clear");
	printf("\n\nTo run this program you should be 18 years or above\n\n");
	printf("Enter your age: ");
	scanf("%d", &age);
	if ( !(age>17) ) {
		system("clear");
		printf("\n\nGo away Kid\n\n");
		sleep(2);
		main();
	} else {
		program();
	}
}

program() {
	float avg;
	char **grade;
	system("clear");

	printf("---------------------------\n");
	printf("-Percentage vs Grade Chart-\n");
	printf("---------------------------\n");
	printf("|     >90    |	   A+	  |\n");
        printf("---------------------------\n");
        printf("|    90-80   |     A      |\n");
        printf("---------------------------\n");
        printf("|    80-70   |     B+     |\n");
        printf("---------------------------\n");
        printf("|    70-60   |     B      |\n");
        printf("---------------------------\n");
        printf("|    60-50   |     C      |\n");
        printf("---------------------------\n");
        printf("|    50-40   |     D      |\n");
        printf("---------------------------\n");
        printf("|    40-35   |     E      |\n");
        printf("---------------------------\n");
	printf("|     35>    |     F      |\n");
        printf("---------------------------\n\n");
	printf("Enter your percentage: ");
	scanf("%f", &avg);
	if (avg<100 && avg > 90) {
		grade = "A+";
	} else if (avg<=90 && avg>80) {
		grade = "A";
	} else if (avg<=80 && avg>70) {
		grade = "B+";
	} else if (avg<=70 && avg>60) {
		grade = "B";
	} else if (avg<=60 && avg>50) {
		grade = "C";
	} else if (avg<=50 && avg>40) {
		grade = "D";
	} else if (avg<=40 && avg>35) {
		grade = "E";
	} else if (avg<35 && avg> 0) {
		grade = "F";
	} else if (avg==100 || avg==0) {
		printf("\n\nDude, is it for real ?\n\n");
		exit(1);
	} else {
		printf("\n\nPlease enter a valid number\n\n");
		exit(1);
	}
	printf("\n\nYour Percentage: %.2f\nYour Grade: %s\n\n\n", avg, grade);
}
