#include<stdio.h>
int main(){
    int n, original;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    original = n;
    
    printf("target digit is = %d\n", n);
    int target;
    scanf("%d", &target);

    int count = 0, digit;
    for( ; n!=0 ;){
        digit = n % 10;
        if(digit == target){
            count++;
        }
        n = n / 10;
    }
    printf("target digit appears %d times", count);
}