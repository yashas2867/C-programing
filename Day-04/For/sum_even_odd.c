#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int evensum = 0, oddsum = 0, digit;
    for( ; n != 0 ;){
        digit = n % 10;
        if(digit % 2 == 0){
            evensum += digit;
        }
        else{
            oddsum += digit;
        }
        n = n / 10;
    }
    printf("even sum = %d\n", evensum);
    printf("odd sum = %d\n", oddsum);

}