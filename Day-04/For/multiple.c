#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i;
    for(i = 1; i <= 10; i++){
    printf("%d*%d = %d\n", n, i, n*i);
    }
    return 0;
}