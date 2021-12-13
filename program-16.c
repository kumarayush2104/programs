#include <stdio.h>
#include "include/enroll.h"
#include "include/color.h"

main() {
	system("clear");
	blink();
        enroll();
	stop_blink();
	int  num;long long one=1;
	printf("Enter a number to get its factorial: ");
	scanf("%d", &num);
	for(int i=1;i<=num;i++) {
		one = one * i;
	}
	printf("\nFactorial of %d is %lld\n\n", num, one);
}
