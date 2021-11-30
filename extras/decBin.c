#include <stdio.h>

main() {
	int num, tmp, j=0;
	system("clear");
	printf("Enter a number: ");
	scanf("%d", &num);
	for(int i=0; i<num; i++){
		if(num>10){
			num=num/10;
			break;
		}
		j++;
		printf("%d", j);
	}
}
