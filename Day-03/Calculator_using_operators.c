#include <stdio.h>

int main() {

    int a, b;
    char op;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("result is = %d", a+b);
    }
    else if (op == '-') {
        printf("result is = %d", a-b);
    }
    else if (op == '*') {
        printf("result is = %d", a*b);
    }
    else if (op == '/') {

        if (b == 0) {
            printf("cannot divide by zero\n");
        }
        else {
            printf("perform division\n");
            printf("result is = %d", a/b);
        }
    }
    else if (op == '%') {

        if (b == 0) {
            printf("cannot divide by zero\n");
        }
        else {
            printf("perform modulus\n");
            printf("result is = %d", a%b);
        }
    }
    else {
        printf("invalid operator\n");
    }

    return 0;
}