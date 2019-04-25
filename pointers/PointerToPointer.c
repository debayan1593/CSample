#include<stdio.h>
int main(){
    int var;
    int *ptr;
    int *pptr;
    var = 20;
    ptr = &var;
    pptr = &ptr;
    printf("The value of the variable is : %d\n", var);
    printf("The address of the variable is : %p\n", ptr);
    printf("The address of the pointer is : %p\n", pptr);
    return 0;
}