#include<stdio.h>
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);
    printf("number is = %d\n", num);

    if( num == 0){
        printf("the number is zero");
    }
    else if(num > 0){
        printf("the number is positive and ");

        if(num % 2 == 0){
            printf("number is even ");
        }
        else {
            printf("number is odd");
        }
    }
    else{
            printf("the number is negative and ");
        
        if(num % 2 != 0) {
            printf("number is odd ");
        }
        else{
            printf("number is even ");
        }
    }
}