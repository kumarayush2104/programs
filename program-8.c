#include <stdio.h>
#include "include/clear.h"
#include "include/enroll.h"

main() {
	clear();
	int date, month, year; char *day;
        enroll();
	printf("\nEnter day, followed by date (dd-mm-yyyy): ");
	scanf("%s %d %d %d", day, &date, &month, &year);
//	printf("The day and date you have entered is:\nDate:- %d-%d-%d\nDay:- %s\n\n", date, month, year, day);
	printf("Day: %s\nDate: %d\nMonth: %d\nYear: %d\n\n", day, date, month, year);
}
