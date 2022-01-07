#include <stdio.h>
#include <string.h>

main() {
	char str1[4]="utu", str2[4]="Utu";

	printf("\n\nlength of str1: %d, length of str2: %d\n\n", strlen(str1), strlen(str2));
	printf("Are they same ? ");
	if(strcmp(str1, str2) ==0 ) printf("Yes\n"); else printf("No\n");
}
