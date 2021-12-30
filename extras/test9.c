#include <stdio.h>

main() {
	int num, bak, ans=0, test, sum;
	printf("\nChecking Armstrong number\n");
	printf("Enter a number: ");
	scanf("%d", &num);
	bak=num;
	for(int i=0;num>0;i++) {
		test = num%10;
		sum=1;
		for(int j=1;j<=3;j++) {
			sum = sum*test;
		}
		ans = ans + sum;
		num = num/10;
	}
	if(ans==bak) printf("Yes\n\n");
}
