#include <stdio.h>

main() {
	int sum, ans=0;
	for(int i=1;i<=5;i++) {
		sum=1;
		for(int j=1;j<=i;j++) {
			sum = sum * 10;
		}
		ans = ans + sum;
	}
	printf("%d\n\n", ans-5);
}
