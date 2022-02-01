#include <stdio.h>

struct student {
	char name[50];
	int age;
}

void main() {
	struct student one;
	strcpy(one.name, "Name");
	one.age = 17;
	printf("Name: %s\nAge: %d\n\n", one.name, one.age);
}
