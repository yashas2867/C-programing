#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int smallest = 9, digit;
    for(; n != 0 ; ){
        digit = n % 10;
        if(digit < smallest){
            smallest = digit;
        }
        n = n / 10;
    }
    printf("smallest is %d", smallest);

}