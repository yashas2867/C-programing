#include <stdio.h>                                                                             
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int large = -1, digit;
    while(n != 0){
        digit = n % 10;
        if(large < digit){
            large = digit;
        }
        n = n/10;
    }
    printf("Largest number is = %d", large);
}