#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);

    int i = 1, factorial = 1;
    do{
        factorial = factorial * i;
        i++;
    }while(i <= n);
    printf("Factorial = %d\n", factorial);
}