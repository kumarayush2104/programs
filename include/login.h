#include <string.h>
#include <unistd.h>

char check_name[100], check_pass[100], pass_buffer[100];
FILE * name_exist;

login() {
	printf("--------------------------------------\n");
        printf("-                Login               -\n");
        printf("--------------------------------------\n");
	printf("Enter your name: ");
	scanf("\n%[^\n]s", check_name);
	chdir("include/keychain");
	if( access(check_name, F_OK ) == 0 ) {
		pass();
	} else {
		clear();
		printf("Wrong Username, Please try again\n");
		login();
	}
}


pass() {
	name_exist = fopen(check_name, "rb");
	printf("Enter password: ");
	scanf("\n%[^\n]s", check_pass);
	fread(pass_buffer, sizeof(char), 100, name_exist);
	if(  strcmp(pass_buffer, check_pass) == 0 ) {
		clear();
		printf("This is Keychain program ver:1.4\n\n");
		printf("Welcome, %s\n\n\n", check_name);
		exit(0);
	} else {
		clear();
		printf("Wrong Password, Please try again\n\n");
		pass();
	}
}
