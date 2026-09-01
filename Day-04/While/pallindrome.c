#include<stdio.h>
int main(){
    int n, original;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("original number is = %d\n", n);
    original = n;

    int reverse = 0;
    while(n != 0){
        reverse = (reverse * 10 + ( n % 10 )) ;
        n = n / 10;
    }
    if(reverse == original){
            printf("Pallindrome number is = %d", reverse);
        }
    else{
            printf("not a pallindrome number ");
        }
}