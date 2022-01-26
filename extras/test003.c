#include <stdio.h>
#include <string.h>

void main(void) {
    char name1[50], name2[50];
    int large;
    printf("Enter First Name: ");
    scanf("%[^\n]s", name1);
    printf("Enter Second Name: ");
    scanf("\n%[^\n]s", name2);

    if(strlen(name1) > strlen(name2)) large=strlen(name1);
    else large=strlen(name2);

    printf("\n\n");

    for(int i=large;i>=0;i--) {
        printf("%c %c\n", name1[i], name2[i]);
    }
}
