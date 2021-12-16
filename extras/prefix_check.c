#include <stdio.h>
#include <string.h>

main() {
	system("clear");
	char full[20], prefix[5];
	printf("Checking Prefix\n\n");
	printf("Enter string: ");
	scanf("\n%[^\n]s", full);
	printf("Enter prefix: ");
	scanf("\n%[^\n]s", prefix);
	if(strncmp(full, prefix, strlen(prefix))==0) {
		printf("Yes %s is a prefix of %s\n\n", prefix, full);
	} else {
		printf("No, %s is not a prefix of %s\n\n", prefix, full);
	}
}
