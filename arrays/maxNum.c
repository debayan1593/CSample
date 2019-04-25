#include<stdio.h>
int main(){
    //declare variables
    int numElements,i, j, max;
    int elem[100];
    //prompt user to enter the no. of elements
    printf("Please enter the number of elements\n");
    scanf("%d",&numElements);
    //prompt user to enter the numbers
    for(i = 0; i<numElements;i++){
        printf("Please enter element no %d :\n",i+1);
        scanf("%d",&elem[i]);
    }
    //compare the numbers and find the max no
    max = elem[0];
    printf("max initialised to : %d\n", max);
    for(j=1;j<numElements;j++){
        if(elem[j]>max){
            max = elem[j];
        }
    }

    printf("maximum number is : %d\n",max);
    return 0;
}
