#include<stdio.h>
int main(){
    int n, target;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int digit, evensum = 0, oddsum = 0;
    while(n != 0){
        digit = n % 10;
        if(digit % 2 == 0){
            evensum = evensum + digit;
        }
        else{
            oddsum = oddsum + digit;
        }
        n = n / 10;
    }
    printf("Sum of even digits is = %d\n", evensum);
    printf("Sum of odd digits is = %d\n", oddsum);
    printf("Difference is = %d\n", evensum - oddsum);
}