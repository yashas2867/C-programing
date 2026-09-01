#include<stdio.h>
int main(){
    int n, target;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    scanf("%d", &target);
    printf("target number is = %d\n", target);

    int digit, found = 0;
    while(n != 0){
        digit = n % 10;
        if(digit == target){
            found++;
        }
        n = n / 10;
    }
    if(found > 0){
        printf("digit is found");
    }
    else{
        printf("digit not found");
    }
}