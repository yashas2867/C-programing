#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i = 1, fact = 1;
    while(i <= n){
        fact = fact*i;
        i++;
    }
    printf("%d", fact);
}