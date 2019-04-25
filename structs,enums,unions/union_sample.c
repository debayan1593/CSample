#include<stdio.h>
union test{
    int x,y;
};
union Sample1{
    int x;
    char y;
}sample1;
union Sample2{
    char x;
    char y;
}sample2;
union Sample3{
    char x;
    int arr[10];
}sample3;
int main(){
    union test t;
    t.x = 2;
    printf("After making x = 2 \nx: %d,\ny: %d", t.x,t.y);

    t.y = 10;
    printf("After making y = 10 \nx: %d,\ny: %d", t.x,t.y);
    printf("\n");

    //printing sizes of the unions
    printf("Size of sample1 : %lu\n", sizeof(sample1));
    printf("Size of sample2 : %lu\n", sizeof(sample2));
    printf("Size of sample3 : %lu\n", sizeof(sample3)); 
    return 0;
}