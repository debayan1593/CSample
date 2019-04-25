#include<stdio.h>
#include<stdlib.h>
int main(){

    //declare variables iterators, rows, cols,2 matrices, sum matrices
    int rows, cols, a[100][100], b[100][100], sum[100][100], i, j; 
    //prompt user to enter no. of rows and cols
    printf("Enter the number of rows(between 1 & 100) :\n");
    scanf("%d",&rows);
    printf("Enter the number of columns(between 1 & 100) :\n");
    scanf("%d",&cols);
    //prompt user to enter elements of matrices
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++){
            printf("Enter element[%d][%d] of matrix a :\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++){
            printf("Enter element[%d][%d] of matrix b :\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    //calulate the sum of the matrices

    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    //display the sum
    printf("The sum of the 2 matrices is :\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++){
            printf("%d ", sum[i][j]);
            if(j == (cols-1)){
                printf("\n");
            }
        }
    
    return 0;
}
