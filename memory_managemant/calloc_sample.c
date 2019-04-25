#include<stdlib.h>
#include<stdio.h>

int main(){
    int i, n;
    int *element;

    printf("\nEnter total no. of elements : ");
    scanf("%d",&n);
    /*returns a void pointer(casted to int*) pointing to first 
    block of allocated space*/
    element = (int*)calloc(n, sizeof(int));

    /*if it fails to allocate space as defined
    it returns a null pointer*/
    if(element == NULL){
        printf("\nSpace not available!");
        exit(0);
    }
    for(int i = 0; i<n;i++){
        printf("Enter element %d\n",i+1);
        scanf("%d",&element+i);
    }
    for(int i = 1;i<n;i++){
        if(*element>*(element+i)){
            *element = *(element+i);
        }
    }
    printf("\nSmallest element is :%d",*element);
    return 0;
}