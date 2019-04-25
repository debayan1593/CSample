#include<stdio.h>
#include<unistd.h>
int main(){
    int a[5] = {2,45,1,16,22};
    for(int i = 0; i<5; i++){
        printf("%d\n",*(a + i));
    }
    return 0;
}
