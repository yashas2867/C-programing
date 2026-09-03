#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int sum = 0, digit;
    for( ; n != 0; ){
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    printf("Sum = %d", sum);

}