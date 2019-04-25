#include<stdio.h>

int main(){
    int i = 20;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d %p",*ptr,ptr);
    printf("\nAddress of i and value of *ptr %p",ptr);
    printf("\nValue stored in *ptr%d",*ptr);
    printf("\nAddress of *ptr%p",pptr);
    printf("\nValue of *pptr%p",*pptr);
    printf("\nValue stored in **ptr %d",**pptr);

    return 0;
}
