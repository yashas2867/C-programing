#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);

    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= n);
}