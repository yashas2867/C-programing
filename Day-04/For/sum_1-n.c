#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i, sum = 0;
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("Sum = %d", sum);
    return 0;
}