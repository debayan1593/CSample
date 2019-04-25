#include<stdio.h>
int main(){
    //declare variables
    int i, num, sum, *ptr;
    //prompt user to enter no. of elements
    printf("Please enter the number of elements\n");
    scanf("%d",&num);
    //set array pointer by dynamically allocating memory
    ptr = (int*)malloc(num * sizeof(int));
    //check if memory was allocated
    if(ptr == NULL){
        printf("error!memory not allocated!");
        exit(0);
    }
    //iterate thru the array and add the elements
    for(i=0;i<num;i++){
        printf("Please enter element %d\n",i+1);
        scanf("%d",ptr+1);
        sum+=*(ptr+1);
    }
    //display the sum of elements of the array
    printf("Sum of the elements of the array:%d\n", sum);
    //free the memory
    free(ptr);
    return 0;
}
