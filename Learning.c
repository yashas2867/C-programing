#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter the number: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("A = %d\nB = %d\nC = %d\n", a, b, c);

    if(a>b && a>c){
        printf("%d, a is greater\n", a);
    }
    else if(a<b && b>c){
        printf("%d, b is greater\n",b);
    }
    else if(a<c && b<c){
        printf("%d, c is greater\n", c);
    }
    else if(a==b && b>c){
        printf("%d is greater ,and also a and b are equal\n", a);
        printf("a and b are greater than c");
    }
    else if (b==c && a<b){
        printf("%d is greater ,and also b and c are equal\n", b);
        printf("b and c are greater than a");
    }
    else if(a==c && b<a){
        printf("%d is greater ,and also a and c are equal\n", a);
        printf("a and c are greater than b\n");
    }
    else{
        printf("all are equal");
    }
    return 0;
}