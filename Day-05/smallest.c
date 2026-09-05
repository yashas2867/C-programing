#include<stdio.h>
int main(){
    int num[5], i;

    printf("enter the numbers = ");

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    int smallest;
    smallest = num[0];
    for(i = 4; i > -1; i--){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    printf("The smallest number is: %d\n", smallest);
}