#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int sum = 0, digit;
    while( n != 0 ){
        digit = n % 10;
        if( digit % 2 !=0){
            sum = sum + digit;
        }
        n = n / 10;
    }
    printf("Sum of odd digits are = %d", sum);
}