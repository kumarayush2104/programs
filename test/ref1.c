#include <stdio.h>

struct Bio {
	char name[50];
	int age;
}pers[5];

void main() {
	for(int i=0;i<5;i++) {
		printf("Enter name: ");
		scanf("\n%[^\n]s", pers[i].name);
		printf("Enter age: ");
		scanf("%d", &pers[i].age);
		printf("\n");
	}

	printf("\n\n=======================================================================\n\n");
	
	for(int i=0;i<5;i++) printf("Name: %s\nAge: %d\n\n", pers[i].name, pers[i].age);
}  
