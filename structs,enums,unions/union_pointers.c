#include<stdio.h>
union Test{
    int x;
    char y;
};
int main(){
    union Test p1;
    p1.x = 65;

    union Test *p2 = &p1;
    printf("x : %d,\ny: %c",p2->x,p2->y);
    printf("\n");

    return 0;
}