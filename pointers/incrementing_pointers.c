#include<stdio.h>
int main(){
    const int MAX = 3;
    int var[] = {10, 20, 300};
    int i, *ptr;
    ptr = &var;
    for(i = 0; i<MAX; i++){
        printf("Address of var[%d] is : %p\n", i, ptr);
        printf("Value of var[%d] is : %d\n", i, var[i]);
        ptr ++;
    }

    return 0;
}