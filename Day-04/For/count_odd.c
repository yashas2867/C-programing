#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i, count = 0;
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            count++;
        }
    }
    printf("count = %d", count);
    return 0;
}