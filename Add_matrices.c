#include<stdio.h>
#include<conio.h>

int main(){
    
    int i,j,mat[3][3],matr[3][3],matrix[3][3];

    // matrix 1 values
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("\tmatrix 1 a[%d][%d] :-",i+1,j+1);
            scanf("%d",&mat[i][j]);    // matrix 1 values stored in variable "mat"

        }
        printf("\n");
    }
    // matrix 2 values
     for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            printf("\tmatrix 2 b[%d][%d] :-",i+1,j+1);
            scanf("%d",&matr[i][j]);     // matrix 2 values stored in variable "matr"

        }
        printf("\n");
    }

    printf("\nAddition of both martices is:-\n");

    // print added value of final matrix
     for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            matrix[i][j]=mat[i][j]+matr[i][j];   // Addition of values before being printed

            printf(" %d",matrix[i][j]);
            

        }
        printf("\n");
    }
}