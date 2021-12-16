#include <stdio.h>
#include <string.h>

void main() {
	char deci[16], tmp[16];
	printf("Enter a binary number: ");
	scanf("\n%[^\n]s", deci);
	int size=strlen(deci), j=0, num=1, final=0;
	for(int i=size-1;i>=0;i--) {
		tmp[j]=deci[i];
		j++;
	}
	for(int k=0;k<size;k++) {
		num=0;
		if(tmp[k]=='1') {
			num=1;
			for(int i=0;i<k;i++) {
				num = num*2;
			}
		}
		final = final+num;
	}
	printf("\n\nNumber is decimal: %d\n\n", final);
}
