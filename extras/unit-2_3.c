#include <stdio.h>

void main() {
    int num[24], search, count=0;
    for(int i=0;i<=24;i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\n\nEnter a number to get searched: ");
    scanf("%d", &search);
    
    for(int i=0;i<=25;i++) {
        if(num[i]==search) count++;
    }
    
    printf("Number of occurrence of %d in array: %d\n\n", search, count);
}
