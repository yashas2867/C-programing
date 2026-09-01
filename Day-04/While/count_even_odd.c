#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int evencount = 0, oddcount = 0 , digit;
    while(n != 0){
        digit = n % 10;
        if(digit % 2 == 0){
            evencount++;
        }
        if(digit % 2 != 0){
            oddcount++;
        }
        n = n / 10;
    }
    printf("even numbers are = %d\n", evencount);
    printf("odd numbers are = %d", oddcount);

}