#include<stdio.h>
int main(){
    int num[5], i;

    printf("enter the numbers = ");

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    int largest;
    largest = num[0];
    for(i = 1; i < 5; i++){
        if(num[i] > largest){
            largest = num[i];
        }
    }
    printf("The largest number is: %d\n", largest);
}