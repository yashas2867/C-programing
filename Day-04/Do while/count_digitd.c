#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);

    int count = 0;
    do{
        n = n / 10;
        count++;
    }while( n != 0);
    printf("Count of digits = %d\n", count);

}