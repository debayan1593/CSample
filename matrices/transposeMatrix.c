#include<stdio.h>
//Find the transpose of a matrix
int main(){
    //declare the variables
    int r, c,a[100][100], trn[100][100], i,j; 
    //prompt user to enter no of rows and columns
    printf("Enter the number of rows and columns :\n");
    scanf("%d%d",&r,&c);
    //prompt user to enter the elements of the matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("Enter element[%d][%d]:\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    //perform transpose of the matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            if(i==j){
                trn[i][j] = a[i][j];
            }else{
                trn[i][j] = a[j][i];
            }
            
        }

    //display the matrix 
    printf("The matrix is :\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("%d",a[i][j]);
            if(j==c-1){       
                printf("\n");
            }
        }
    //display the transpose of the matrix
    printf("The transpose of the matrix is :\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            printf("%d",trn[i][j]);
            if(j==c-1){       
                printf("\n");
            }
        }
    return 0;
}
