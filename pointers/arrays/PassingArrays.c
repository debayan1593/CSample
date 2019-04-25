#include<stdio.h>
void calculateAverage(int arr[]);
int main(){
    int ar[] = {3,2,7,12,8,4,16};
    calculateAge(ar);
    return 0;
}

void calculateAverage(int arr[]){
    int sum = 0;
    double avg;
    for(int i = 0; i<7; i++){
        sum += arr[i];
    }
    avg = (double)sum/7;
    printf("The average of the values of the array is : %f\n", avg);
}