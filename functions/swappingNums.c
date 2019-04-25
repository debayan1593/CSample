#include<stdio.h>

//Todemonstrate call by reference by passing address to a function
//instead of actual values


void swap(int *num1, int *num2);
int main(){

    //declare 2 variables
    int num1 = 20;
    int num2 = 50;

    //call a swapping function as pass references as parameters
    swap(&num1, &num2);
    //print the swapped nums
    printf("Numbers after swapping :\n");
    printf("num1 : %d\n", num1);
    printf("num2 : %d\n", num2);
    
}

//define a function foe swapping nums
void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
