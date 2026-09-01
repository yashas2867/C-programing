#include <stdio.h>                                                                             
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int smallest = 9 , digit;
    while(n != 0){
        digit = n % 10;
        if(smallest > digit){
            smallest = digit;
        }
        n = n / 10;
    }
    printf("smallest number is = %d", smallest);
}