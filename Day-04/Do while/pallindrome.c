#include<stdio.h>
int main(){
    int n, original;
    printf("Enter the number n = ");
    scanf("%d", &n);
    printf("N = %d\n", n);
    original = n;

    int i = 0, pallindrome = 0, digit;
    do{
        digit = n % 10;
        pallindrome =  pallindrome * 10 + digit;
        n = n / 10;
    }while( n != 0);
    if(pallindrome == original){
        printf("%d is a pallindrome number\n", original);
    }
    else{
        printf("%d is not a pallindrome number\n", original);
    }

}