//
//  File: task2.c
//  Ayush Kumar (202103103510253)
//  CS-1
//

#include <stdio.h>

void func(int *ptr, int size) {
    printf("Numbers in user_array are: \n");
    for(int i=0;i<=size;i++) printf("%d\n", *(ptr + i)+1); 
    /* Extracting the values store on memory location with *(ptr) and 
       using "+i" as increment to the memory location to print the remaining array elements. */
}

void main(void) {
    int user_array[9], arr_size=sizeof(user_array)/sizeof(int);
    
    for(int i=0;i<=arr_size;i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &user_array[i]); // Scanning array elements
    }
    
    func(&user_array, arr_size); // Passing initial memory location and size of the array to function 'func'
}










