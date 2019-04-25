#include<stdio.h>
void getSeconds(unsigned long *par);
int main(){
    unsigned long sec;
    getSeconds(&sec);
    
    printf("number of seconds : %ld\n", sec);

    return 0;
}
void getSeconds(unsigned long *par){
    *par = time(NULL);
    return ;
}