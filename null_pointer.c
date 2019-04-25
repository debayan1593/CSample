//if a pointer contains the 0 value it is pointing to nothing
#include<stdio.h>
int main(){
    int *ptr = NULL;
    printf("The value of pointer is : %p\n", ptr);
    return 0;
}