#include<stdio.h>
int main(){
    int n, original;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    original = n;

    int palindrome = n, reverse = 0, digit;
    for(; n != 0 ; ){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(reverse == original){
            printf("%d is palindrome number", original);
        }
        else{
            printf("%d is not pallindrome number", original);
            return 0;
        }
}