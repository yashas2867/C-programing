#include<stdio.h>
int main(){
    int num[5], i;

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    int sum = 0;
    for(i = 0; i < 5; i++){
        sum += num[i];
    }
    printf("The sum of the numbers is: %d\n", sum);
}