#include <stdio.h>

#include "include/clear.h"
#include "include/enroll.h"
// #include "include/program9_month.h"

main() {
	clear();
	int date, month, year;
	char **getMonth;
	char day[10];
        enroll();
	printf("\nEnter day, followed by date (eg: Wednesday 21-01-2021): ");
	scanf("%s %d-%d-%d", day, &date, &month, &year);
	if (month == 1) {
		getMonth="January";
	} else if (month == 2) {
                getMonth="Febuary";
        } else if (month == 3) {
                getMonth="March";
        } else if (month == 4) {
                 getMonth="April";
        } else if (month == 5) {
                 getMonth="May";
        } else if (month == 6) {
                 getMonth="June";
        } else if (month == 7) {
                 getMonth="July";
        } else if (month == 8) {
                 getMonth="August";
        } else if (month == 9) {
                 getMonth="September";
        } else if (month == 10) {
                 getMonth="October";
        } else if (month == 11) {
                 getMonth="November";
        } else if (month == 12) {
                 getMonth="December";
        } else {
		 getMonth="Not a Valid Month value";
	}

	printf("Day: %s\nDate: %d\nMonth: %s\nYear: %d\n\n", day, date, getMonth, year);
}
