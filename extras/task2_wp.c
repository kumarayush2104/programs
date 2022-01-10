 #include <stdio.h>
 
 void func(int arr[9]) {
     
     printf("Numbers with increment are: \n");
     for(int i=0;i<10;i++) printf("%d\n",  arr[i]+1);
 }
 
 void main(void) {
     int arr[9];
     for(int i=0;i<10;i++) {
         printf("Enter %d number: ", i+1);
         scanf("%d", &arr[i]);
     }
     func(arr);
 }
