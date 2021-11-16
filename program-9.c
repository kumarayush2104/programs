#include <stdio.h>

#include "include/clear.h"
#include "include/enroll.h"
#include "include/program9_month.h"

main() {
	clear();
	int date,month, year;
	char day[10];
        enroll();
	printf("\nEnter day, followed by date (eg: Wednesday 21-01-2021): ");
	scanf("%s %d-%d-%d", day, &date, &month, &year);
	printf("Day: %s\nDate: %d\nMonth: %s\nYear: %d\n\n", day, date, getMonth[--month], year);
}
