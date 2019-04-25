#include<stdio.h>
int main(){
    int n, i;
    float num[100], sum=0.0, average; 
    printf("Please enter the number of elements\n");
    scanf("%d",&n);

    while(n>100 || n<0){
        printf("Error! Number should be in the range of 1 to 100\n");
        printf("Please enter number again\n");
        scanf(&n);
    }
    for(i=0;i<n;i++){
        printf("Please enter number %d\n", i+1);
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }

    average = sum/n;
    printf("The average of the numbers is : %f\n",average);
    return 0;
}
