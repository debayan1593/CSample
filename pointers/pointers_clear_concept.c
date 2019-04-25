#include<stdio.h>
int main(){
    int num = 10;
    int *ptr1;
    int **ptr2;
    ptr1 = &num;
    ptr2 = &ptr1;

    printf("Possible ways to find value of variable num\n");
    printf("Value of num is(num) :%d\n",num);     
    printf("Value of num using ptr1(*ptr1) is :%d\n",*ptr1);
    printf("Value of num using ptr2(**ptr2) is :%d\n",**ptr2);     

    printf("Possible ways to find address of variable num\n");
    printf("Address of num is(&num) :%p\n",&num);
    printf("Address of num using ptr1 is(ptr1) :%p\n",ptr1);
    printf("Address of num using ptr2 is((*ptr2) :%p\n",*ptr2);
    
    printf("Possible ways of finding value of ptr1\n");
    printf("Value of ptr1 using ptr1(ptr1): %p\n", ptr1);
    printf("Value of ptr1 using ptr2(*ptr2):%p\n", *ptr2);

    printf("ways of finding address of pointer\n");
    printf("Address of ptr1 is (&ptr1): %p\n",&ptr1);
    printf("Address of ptr1 is (ptr2) : %p\n", ptr2);

    printf("Double pointer value and address\n");
    printf("value of ptr2 is (ptr2) : %p\n",ptr2);
    printf("Address of ptr2 is (&ptr2): %p\n", &ptr2);

    return 0;
}
