#include <stdio.h>
int max(int x, int y){
	if(x>y)
		return x;
	else
		return y;
}
void func(int *ptr){
	*ptr = 30;
}
int main(void){
	int a = 10, b = 20;
	int m = max(a,b);
	int changevar = 20;
	func(&changevar);
	printf("m is %d", m);
	printf("changevar:%d",changevar);
	return 0;
}
