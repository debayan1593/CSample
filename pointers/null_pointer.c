#include<stdio.h>
int main(){

    int a  = 10;
    void *ptr = &a;
    printf("%d\n",*(int*)ptr);
    printf("%p\n",(int*)ptr);
    pointerArithmetic();
    return 0;
}
//perform pointer arithmetic with void pointers
void pointerArithmetic(){
    int arr[5] = {16, 11, 25, 37,3};
    void *ptr = &arr;
    for(int i = 0; i<5; i++){
        printf("Element[%d] : %d\n", i+1, *((int *)ptr +i));
    }
    return;
}
