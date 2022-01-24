#include <stdio.h>

void main(void) {
        FILE *buffer = fopen("202103103510253", "r"); // We are opening a file in read mode


        fseek(buffer, 0, SEEK_END); // Shifting the cursor at end of the line
        printf("Location of Cursor (SEEK_END): %d\n", ftell(buffer));

        fseek(buffer, 0, SEEK_SET); // Shifting the cursor at custom place ("0" for beginning of the file, and can be adjusted n "characters", by using n inplace of 0)
        printf("Location of Cursor (SEEK_START): %d\n", ftell(buffer));

        fseek(buffer, 1, SEEK_CUR); // adjusting the cursor forward by "1" character ( use negative number to adjust the cursor backward )
        printf("Location of Cursor (SEEK_CUR): %d\n\n", ftell(buffer));

        // ftell(); is used for finding the location of cursor

}
