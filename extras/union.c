#include <stdio.h>

union test {
        int x;
        int y;
}var;

// Syntax is almost same like stucture;

void main(void) {
        var.x=8;
        printf("Value of var.x: %d\n", var.x);
         // same declaration like structures

        // then what is the differnce ?? Checkout output
        printf("Value of var.y: %d\n\n", var.y);
}
