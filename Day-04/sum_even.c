#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int sum = 0, i = 1;
    while(i <= n){
        if(i % 2 == 0)
        sum = sum + i;
        i++;
    }
    printf("sum = %d", sum);
}