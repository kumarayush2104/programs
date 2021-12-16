#include <stdio.h>
#include <string.h>

main() {
	int j=0, key; char string[50], revstr[50];
	printf("Checking for Palindrome String\n\n");
	printf("Enter string: ");
	scanf("\n%[^\n]s", string);
	for(int i=strlen(string);i>=0;i--) {
		key=0;
		if(string[i]!=string[j-1]) {
			printf("No\n\n");
			return 0;
		}
		j++;
	}
	printf("Yes\n\n");
}

