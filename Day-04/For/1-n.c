#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i;
    for(i = 1; i <= n; i++){
        printf("%d", i);
    }
    return 0;
}