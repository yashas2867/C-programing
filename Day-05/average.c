#include<stdio.h>
int main(){
    int num[5], i;
    printf("Enter the numbers = ");

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;
    float average;
    for(i = 0; i < 5; i++){
        sum += num[i];
    }
    average = sum / 5.0;
    printf("The average of the numbers is: %.3f\n", average);
}