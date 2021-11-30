#include <stdio.h>
#include <stdlib.h>
#include "../include/clear.h"
#include "../include/enroll.h"
#include "../include/register.h"
#include "../include/login.h"

main() {
	clear();
	enroll();
	int option;
	printf("-------------------------------------------\n");
	printf("-	      Keychain Program		  -\n");
	printf("-------------------------------------------\n");
	printf("Press 1 for Registering yourself\n");
	printf("Press 2 for Login\n");
	printf("Press any other key to exit\n");
	printf(": ");
	scanf("%d", &option);
	switch(option) {
		case 1:
			registeration();
		case 2:
			clear();
			login();
		default:
			exit(0);
	}

}
