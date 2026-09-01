#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i=1;
    while(i <= 10){
        printf("%d*%d = %d\n", n, i, i*n);
        i++;
    }
}