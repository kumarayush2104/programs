#include <stdio.h>
#include <string.h>

main() {
	int num; char bin[sizeof(int)*16], i;
	printf("Enter an integer number (expected size: %d bytes): ", sizeof(int));
	scanf("%d", &num);
	for(i=0;num>0;i++) {
		if(num%2==0) bin[i]='0';
		else bin[i]='1';
		num=num/2;
	}
	for(int i=strlen(bin);i>=0;i--) {
		printf("%c", bin[i]);
	}
	printf("\n\n");
}
