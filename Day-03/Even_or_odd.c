#include<stdio.h>
int main(){
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf("number is = %d\n", num);

    if(num % 2==0){
        printf("number is even");
    }
    else {
    printf("number is odd");
    }
}