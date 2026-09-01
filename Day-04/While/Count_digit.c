#include<stdio.h>
int main(){
    int n, original;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    original = n;

    printf("Enter digit = ");
    int target;
    scanf("%d", &target);

    int count = 0, digit;
    while(n != 0){
        digit = n % 10;
        if(target == digit){
            count++;
        }
        n = n / 10;
    }
    printf("digit occurs %d times", count);
}