#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int multiply = 1, digit;
    for( ; n != 0; ){
        digit = n % 10;
        multiply *= digit;
        n = n / 10;
    }
    printf("multiply = %d", multiply);

}