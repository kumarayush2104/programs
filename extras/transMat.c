#include <stdio.h>

main() {
    int mat[4][4], key=1;
    
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("Enter element %d, %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\n\n");
    
    if(key==1) {
        for(int i=0;i<3;i++){
            printf("| ");
            for(int j=0;j<3;j++) {
                printf("%d ", mat[i][j]);
            }
            printf("|");
            printf("\n");
        }
    }

    printf("\n\nTranspose of the matrix\n\n");
    
    for(int i=0;i<3;i++) {
        printf("| ");
        for(int j=0;j<3;j++) {
            if(i!=j) {
                printf("%d ", mat[j][i]);
            } else printf("%d ", mat[i][j]);
        }
        
        printf("|\n");
    }
    
}
