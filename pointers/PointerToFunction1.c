#include<stdio.h>
double getAverage(int *arr, int size);
int main(){
    double avg;
    int arrSize = 5;
    int arr[5] = {5, 20, 45, 100, 250};
    //passing pointer to the array as an argument
    avg = getAverage(arr, arrSize);
    printf("Average of array elements : %f\n", avg);
    return 0;
}
//A function which can accept a pointer can also accept an array
double getAverage(int *arr, int size){
    int i, sum = 0;
    double avg;
    for(i=0; i<size; i++){
        sum += arr[i];
    }
    avg = (double)sum/size;
    return avg;
}