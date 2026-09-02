#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i, fact = 1;
    for(i = 1; i <= n; i++){
        fact = fact * i;

    }
    printf("Factorial = %d", fact);
}