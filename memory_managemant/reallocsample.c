#include<stdio.h>
#include<stdlib.h>
int main(){
    //declare variables
    int i, num, *ptr;
    //prompt user to define size fo array
    printf("Please enter the initial size of the array\n");
    scanf("%d",&num);
    //dynamically allocate memory to the array
    ptr = (int*)malloc(num*sizeof(int));
    if(ptr==NULL){
        printf("error!Could not allocate memory!");
        exit(0);
    }
    //print the allocated address of the array
    printf("Addresses from initial allocation are:\n");
    for(i=0;i<num;i++){
        printf("%p\n",ptr+i);
    }
    //reallocate memory to the array
    printf("Please enter new size of the array\n");
    scanf("%d",&num);
    ptr = realloc(ptr,num*sizeof(int));
    if(ptr==NULL){ 
        printf("error!Could not allocate memory!");
        exit(0);
    }
    //print the reallocated addresses of the array
    
    printf("Addresses from reallocation are:\n");
    for(i=0;i<num;i++){
        printf("%p\n",ptr+i);
    }
    //free the memory
    free(ptr);
    return 0;
}
