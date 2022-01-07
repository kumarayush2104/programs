#include <stdio.h>

main() {
	// var key *switch

	int mat1[3][3]; int mat2[3][3], key=1, out=0;
	system("clear");
	if(key==1) {
		printf("\n\t\tMatrix-1\n");
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				printf("Enter element %d, %d: ", i+1 , j+1);
				scanf("%d", &mat1[i][j]);
			}
		}
	}
	if(key==1) {
		printf("\n\t\tMatrix-2\n");
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				printf("Enter element %d, %d: ", i+1, j+1);
				scanf("%d", &mat2[i][j]);
			}
		}
	}
	if(key==1) {
		printf("\n\t\tMatrix-1\n");
		for(int i=0;i<3;i++) {
			printf("| ");
			for(int j=0;j<3;j++) {
				if(mat1[i][j]<10) printf("0");
				printf("%d ", mat1[i][j]);
			}
			printf("|\n");
		}
	}
	if(key==1) {
		printf("\n\t\tMatrix-2\n");
		for(int i=0;i<3;i++) {
			printf("| ");
			for(int j=0;j<3;j++) {
				if(mat2[i][j]<10) printf("0");
				printf("%d ", mat2[i][j]);
			}
			printf("|\n");
		}
	}
	if(key==1) {
		printf("\n\t\tMatrix Multiplication\n");
		for(int i=0;i<3;i++) {
			printf("| ");
			for(int j=0;j<3;j++) {
				for(int k=0;k<3;k++) {
//					printf("\n%d,%d * %d,%d\n", i+1, k+1, k+1, j+1);
					out = out + mat1[i][k]*mat2[k][j];
				}
				printf("%d ", out);
				out=0;
			}
			printf("|\n");
		}
	}

}
