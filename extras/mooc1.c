// MOOC Assignment
//
// Ayush Kumar (202103103510253)
// CS-1
//

#include <stdio.h>

void main(void) {
        char fetch[25];
        FILE *fp=fopen("data.txt", "r");
        FILE *buffer=fopen("enrollment.txt", "w");
        while(fscanf(fp, "\n%[^\n]s", fetch) != EOF ) {
                fprintf(buffer, "202103103510%c%c%c\n", fetch[8], fetch[9], fetch[10]);
        }
	fclose(fp);
        fclose(buffer);
}
