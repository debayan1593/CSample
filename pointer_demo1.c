#include<stdio.h>
int main(){
    int var= 20;
    int *ip;

    *ip = &var;
    printf("Address of variable var : %p\n", &var);
    printf("Value stored in pointer *ip : %p\n", ip);
    printf("Value of *ip variable : %d\n", *ip);
    return 0;
}