#include <stdio.h>

main() {
	int num=0, len=1, tmp=0;
	printf("Largest subsequences-2\n\n");
	while(num!=-1) {
		tmp=num;
		printf("Enter a number: ");
		scanf("%d", &num);
		if( num==-1 ) break;
		else if( tmp>num ) len=1;
		len++;
	}
	printf("%d\n", len-1);
	printf("\n\n");
}
