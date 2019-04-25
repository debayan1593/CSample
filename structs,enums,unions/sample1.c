#include<stdio.h>
struct Point{
    int x,y;
}p1;
struct DesignatedPoint{
    int x, y, z;
};
int main(){
    struct Point p1={0,1};
    p1.x = 20;
    struct DesignatedPoint dp1 = {.y = 0, .z = 2, .x=3};
    struct DesignatedPoint dp2 = {.x = 20};
    printf("x=%d, y=%d",p1.x,p1.y);
    printf("\ndpx: %d, \ndpy: %d, \ndpz: %d", dp1.x,dp1.y,dp1.z);
    printf("\ndp2x: %d", dp2.x);
    return 0;
}