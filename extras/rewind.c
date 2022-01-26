#include <stdio.h>

void main(void) {
        FILE *buffer = fopen(FILENAME_HERE, "r");
        printf("Location of cursor by default: %d\n", ftell(buffer));

        fseek(buffer, 0, SEEK_END);
        printf("Location of cursor after using SEEK_END: %d\n", ftell(buffer));
        rewind(buffer);
        printf("Location of cursor: %d\n\n", ftell(buffer));

}
