#include <stdio.h>

struct Student {
    char name[100];
    long enroll;
    struct personal {
	int age;
	char hobby[50];
    }per;
}one;

void main(void) {
    printf("Enter Name: ");
    scanf("%[^\n]s\n\n", one.name);
    printf("Enter Enrollment Number: ");
    scanf("%ld", &one.enroll);
    printf("Enter Age: ");
    scanf("%d", &one.per.age);
    printf("Enter your hobby: ");
    fgets(one.per.hobby, 50, stdin);
    scanf("\n%[^\n]s", one.per.hobby);

    printf("\n\n--------------------------------\n");
    printf("         Student Biodata        \n");
    printf("--------------------------------\n");
    printf("Name: %s\n", one.name);
    printf("Enroll No: %ld\n", one.enroll);
    printf("Age: %d\n", one.per.age);
    printf("Hobby: %s\n\n", one.per.hobby);

}
