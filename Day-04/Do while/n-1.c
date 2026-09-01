#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);

    int i = n;
    do{
        printf("%d\n", i);
        i--;
    }while(i >= 1);
}