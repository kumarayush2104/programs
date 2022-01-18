#include <stdio.h>

void main() {
    int power, base, ans=1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);
    while(power>=1) {
        ans = ans*base;
        power--;
    }
    
    printf("\n\nAnswer: %d\n", ans);
}
