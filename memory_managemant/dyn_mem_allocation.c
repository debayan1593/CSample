#include<stdio.h>
#include<stdlib.h>
struct employee{
    char *name;
    int salary;
};

int main(){
    //define a pointer
    int* x;
    //dynamically allocate memory to it at runtime
    x = (int*)malloc(50*sizeof(int));
    printf("\nSize of pointer x: %lu", sizeof(x));
    free(x);
    printf("\nSize of pointer x: %lu", sizeof(x));

    //define derived datatype and allocate memory
    // using calloc(no. of items, size)
    typedef struct employee emp;
    emp *e1;
    //e1 = (*emp)calloc(30, sizeof(emp));

    return 0;
}