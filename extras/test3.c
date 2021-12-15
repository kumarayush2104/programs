#include <stdio.h>
#include <string.h>

main() {
	printf("Matching patterns\n\n");
	char a[15]="1234512345", b[10]="45";
	int t1=strlen(a), t2=strlen(b), count=0;
	for(int i=0;i<t1;i++) {
		for(int j=0;j<t1;j++) {
			if(a[j]==b[i]) {
//				printf("%c %c\n\n", a[j], b[i]);
				printf("%d\n", count);
			}
		if(count<t1)
			count++;
		else break;
		}
	}
}
