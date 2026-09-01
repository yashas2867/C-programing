#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int sum = 0;
    while(n != 0){
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
}