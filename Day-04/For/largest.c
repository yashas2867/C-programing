#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int largest = 0, digit;
    for(; n != 0 ; ){
        digit = n % 10;
        if(digit > largest){
            largest = digit;
        }
        n = n / 10;
    }
    printf("largest is %d", largest);

}