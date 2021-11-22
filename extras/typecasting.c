#include <stdio.h>

#include "../include/clear.h"
#include "../include/enroll.h"


main() {
	clear();
	enroll();
	int i=12, j=5;
	float ans;
	ans = i/(float)j;
	printf("\n%f\n", ans);
	return 0;
}
