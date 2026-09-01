#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int product = 1;
    while( n != 0){
        product = product *( n % 10);
        n = n / 10;
    }
    printf("Product is = %d", product);
}