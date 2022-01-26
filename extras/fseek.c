#include <stdio.h>

void main(void) {
        FILE *buffer = fopen("202103103510253", "r");


        fseek(buffer, 0, SEEK_END);
        printf("Location of Cursor (SEEK_END): %d\n", ftell(buffer));

        fseek(buffer, 0, SEEK_SET);
        printf("Location of Cursor (SEEK_START): %d\n", ftell(buffer));

        fseek(buffer, 1, SEEK_CUR);
        printf("Location of Cursor (SEEK_CUR): %d\n\n", ftell(buffer));

}
