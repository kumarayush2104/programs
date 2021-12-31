#include <stdio.h>

void main(void) {
	int num, tmp, ext;
	printf("\tInteger to Hexadecimal converter\n");
	printf("Enter an integer: ");
	scanf("%d", &num);
	ext=num%16;
	printf("0x%d", num/16);
	if(ext==10) printf("A\n");
	else if(ext==11) printf("B\n");
	else if(ext==12) printf("C\n");
	else if(ext==13) printf("D\n");
	else if(ext==14) printf("E\n");
	else if(ext==15) printf("F\n");
	else printf("%d\n", ext);
}
