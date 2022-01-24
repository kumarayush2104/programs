#include <stdio.h>

void main(void) {
        FILE *buffer = fopen("202103103510253", "r"); // opening file in read format
        printf("Location of cursor by default: %d\n", ftell(buffer));

        fseek(buffer, 0, SEEK_END); // shifting the cursor to end of the line
        printf("Location of cursor after using SEEK_END: %d\n", ftell(buffer));

        // usage of buffer: rewind basically shift the cursor to the starting of the file
        // Lets check the location of the file after using rewind();

        rewind(buffer); // syntax of rewind();

        printf("Location of cursor: %d\n\n", ftell(buffer));

}
