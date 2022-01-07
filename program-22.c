#include <stdio.h>
#include "include/enroll.h"

void main(void) {
    enroll();
    int arr[10], size=sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Numbers in ascending order: ");
    for(int i=0;i<size;i++) {
        printf("%d ", sort(arr,  i, size));
    }
}

int sort(int arr[10], int index, int size) {
    int small = arr[index], tmp;
    for(int i=index;i<size;i++) {
        if(small>arr[i]) {
            tmp = small;
            small=arr[i];
            arr[i]=tmp;
        }
    }
    return small;
}
