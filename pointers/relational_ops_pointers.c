#include<stdio.h>
int main(){
    int var[] = {10, 20, 300};
    int i, *ptr;
    const int MAX =3;
    ptr = var;
    i = 0;
    //using relational operator on pointer value
    while(ptr<=&var[MAX-1]){
        printf("The address of var[%d] is : %p\n", i, ptr);
        printf("The value of var[%d] is : %d\n", i, *ptr);
        //performing increment on pointer value
        ptr ++;
        i++;

    }
    return 0;
}