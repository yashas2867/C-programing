#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i = 1;
    while(i <= n){
        printf("%d\n", i);
        i++;
    }
}