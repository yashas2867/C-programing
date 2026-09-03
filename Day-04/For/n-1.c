#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("n = %d\n", n);

    int i;
    for(i = n; i >= 1; i--){
        printf("%d ", i);
    }
    return 0;
}