#include<stdio.h>
int calfactorial(int n){
    int factorial = 1;
    for(int i =2; i<=n;i++){
        factorial = factorial * i;
    }
    return factorial;

}
int main(){
    int getNum;
    printf("\nplease enter a no. to find it's factorial\n");
    scanf("%d",&getNum);
    int factorial = calfactorial(getNum);
    printf("Factorial of number: %d\n", factorial);
    return 0;
}
