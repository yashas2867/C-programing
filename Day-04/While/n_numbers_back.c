#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i = n;
    while(i >= 1){
        printf("%d\n", i);
        i--;
    }
}