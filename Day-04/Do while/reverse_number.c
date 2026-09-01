#include<stdio.h>
int main(){
    int n, original;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);
    original = n;

    int i, digit, reverse = 0;
    do{
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }while(n != 0);
    printf("Reverse of %d is = %d\n", original, reverse);
}