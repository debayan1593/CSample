#include<stdio.h>
struct Point{
    int x,y;
};
int main(){
    struct Point p1 = {10,20};
    struct Point *p2 = &p1;
    printf("\nx: %d,\ny: %d",p2->x, p2->y);
    printf("\n");
    return 0;
}