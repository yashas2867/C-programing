#include<stdio.h>
int main(){
    int num[5], i;

    for(i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        printf("You entered: %d\n", num[i]);
    }
    for(i = 0; i < 5; i++){
        printf("The numbers are = %d\n", num[i]);
    }
}
