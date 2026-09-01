#include <stdio.h>                                                                             
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int digit;
    digit = n % 10;
    while(n >= 10){
        n = n / 10;
    }
    printf("first digit = %d\n", n);
    printf("last digit = %d\n", digit);

}