#include <stdio.h>

main() {
	int num=0, len=0, tmp;
	printf("Largest subsequences-2\n\n");
	while(num!=-1) {
		printf("Enter a number: ");
		scanf("%d", &num);
		len++;
		tmp=num;
		if(tmp>num) len=1;
	}
	if(len=1) printf("%d\n", len);
	else printf("%d\n", len-1);
	printf("\n\n");
}
