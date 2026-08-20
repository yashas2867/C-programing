#include<stdio.h>
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    printf("the year is = %d\n", year);

    if(year%400 == 0 || year % 4 == 0 && year % 100 != 0 ){
        printf("The year is leap year");
    }
    else{
        printf("the year is not leap year");
    }
}