#include<stdio.h>
int main(){
    int var  = 2889;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;

    printf("Value of var :%d\n", *ptr1);
    printf("Address of var :%p\n", ptr1);
    printf("Value of ptr1 :%p\n", *ptr2);
    printf("Address of ptr1 :%p\n", ptr2);
    printf("Value of ptr2 :%d\n", **ptr2);


    return 0;
}
