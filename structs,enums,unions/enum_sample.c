//c enum example
#include<stdio.h>
enum week{Sun, Mon, Tues, Wed, Thurs, Fri, Sat};
int main(){
    int i;
    for(i=Sun;i<=Sat;i++){
        printf("\n%d",i);
    }
    return 0;
}
