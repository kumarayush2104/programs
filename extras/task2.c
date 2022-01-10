//
//  File: task2.c
//  Ayush Kumar (202103103510253)
//  CS-1
//

#include <stdio.h>

void func(int *ptr, int size) {
    printf("Numbers in user_array are: \n");
    for(int i=0;i<=size;i++) printf("%d\n", *(ptr + i)+1);
}
void main(void) {
    int user_array[9], arr_size=sizeof(user_array)/sizeof(int);
    
    for(int i=0;i<=arr_size;i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &user_array[i]);
    }
    
    func(&user_array, arr_size);
}
