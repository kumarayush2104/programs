#include <string.h>

char name[50], password[50];
FILE * tmp;

registeration() {
	clear();
	printf("--------------------------------------\n");
	printf("-	     Registeration	     -\n");
	printf("--------------------------------------\n");
	printf("Enter your name: ");
	scanf("\n%[^\n]s", name);
	pass_check();
}

pass_check() {
	printf("Enter password (atleast 8 characters needed): ");
	scanf("\n%[^\n]s", password);
	if (strlen(password) == 8 || strlen(password) > 8) {
		chdir("include/keychain");
	        tmp = fopen(name, "wb");
                fwrite(password, 1, sizeof(password), tmp);
                printf("Registration Successfull !\n\n");
		printf("Run this program again for login\n\n");
		exit(0);
        } else {
                clear();
                printf("Error !! You need to enter atleast 8 characters\n\n");
                pass_check();
        }

}
