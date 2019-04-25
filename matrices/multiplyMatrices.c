#include<stdio.h>
int main(){
    //declare the variables
    int r, c, a[100][100],  b[100][100], sum[100][100], i, j, k, l;
    //prompt user to enter no of rows and cols
    printf("Enter the number of rows(between 1 & 100):\n");
    scanf("%d",&r);
    printf("Enter the number of cols(between 1 & 100):\n");
    scanf("%d",&c);
    //prompt user to enter the elements of the matrix
    for(i = 0; i<r;i++)
        for(j=0;j<c;j++){
            printf("Enter element[%d][%d] of matrix a:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    for(i = 0; i<r;i++)
        for(j=0;j<c;j++){
            printf("Enter element[%d][%d] of matrix b:\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    //multiply the elements of the matrix

    for(i = 0; i<r;i++)
        for(j=0;j<c;j++){
            k=0,l=0;
            sum[i][j] = a[i][k]*b[l][j] + a[i][k+1]*b[l+1][j];
        }
    //iterate thru the result and display the matrix
    printf("The multiplied array is :\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("%d",sum[i][j]);
            if(j==(c-1)){
                printf("\n");
            }
        }
    return 0;
}
