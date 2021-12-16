#include <stdio.h>

main() {
	system("clear");
	printf("String tokenizing\n\n");
	char ch[30]="hello-my-name-is-ayush";
	for(int i=0;i<strlen(ch);i++){
		if(ch[i]=='-') {
			printf("\n");
		} else
		printf("%c", ch[i]);
	}
	printf("\n");
}
