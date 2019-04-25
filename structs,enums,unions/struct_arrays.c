#include<stdio.h>
struct Point{
    int x,y;
};
int main(){
    struct Point arr[10];
    int i;
    for(i = 0; i<10;i++){
        arr[i].x = i;
        arr[i].y = i*i;
    }
    int j;
    for(j=0;j<10;j++){
        printf("\nx: %d,y: %d",arr[j].x,arr[j].y);
    }
    return 0;
}