#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);

    int i = 1, sum = 0;
    do{
       sum = sum + i;
        i++;
    }while(i <= n);
    printf("Sum = %d\n", sum);
}