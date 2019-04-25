#include<stdio.h>
#include<stdlib.h>
int main(){
    //declare the variables
    int i, num, sum, *ptr;
    //prompt user to enter no. of vaariables
    printf("Please enter number of elements\n");
    scanf("%d",&num);
    //allocate memory dynamically
    ptr = (int*)calloc(num, sizeof(int));
    //check if memory  has been allocated
    if(ptr ==NULL){
        printf("ERROR!memory allocation failed!");
        exit(0);
    }
    //calculate the sum of the array elements
    for(i=0;i<num;i++){
        printf("Please enter element[%d]:\n",i+1);
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    //display the sum of the array elements
    printf("Sum of the elements:%d\n", sum);
    //free the allocated memory
    free(ptr);
    return 0;
}
