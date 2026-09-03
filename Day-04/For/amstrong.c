#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int arm = n, sum = 0, digit;
    for(; n != 0 ;){
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }
    if(sum == arm){
        printf("%d is armstrong number\n", arm);
    }
    else{
        printf("%d is not an Armstrong number\n", arm);
    }
}