#include<stdio.h>
int main(){
    int n, original;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    original = n;

    int digit, sum = 0;
    while(n !=0){
        digit = n % 10;
        digit = digit * digit * digit;
        sum = sum + digit;
        n  = n / 10;
    }
    if( sum == original ){
        printf("Armstrong number");
    }
    else{
        printf("Not an amstrong number");
    }
}