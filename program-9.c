#include <stdio.h>
#include "include/clear.h"
#include "include/enroll.h"

main() {
	clear();
	int date, year;
	char day[10]; char month[10];
        enroll();
	printf("\nEnter day, followed by date (dd-mm-yyyy): ");
	scanf("%s %d %s %d", day, &date, month, &year);
//	printf("The day and date you have entered is:\nDate:- %d-%d-%d\nDay:- %s\n\n", date, month, year, day); **/

	printf("Day: %s\nDate: %d\nMonth: %s\nYear: %d\n\n", day, date, month, year);
}
