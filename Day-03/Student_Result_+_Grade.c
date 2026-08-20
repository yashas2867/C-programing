#include<stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("enter the marks1: ");
    scanf("%d", &marks1);
    printf("marks1 = %d\n", marks1);
    if(marks1 < 0 || marks1 > 100){
        printf("invalid marks1\n");
        printf("enter valid marks1:\n");
        //int marks_1;
        scanf("%d", &marks1);
        printf("valid marks1 = %d\n", marks1);
    }
    printf("enter the marks2: ");
    scanf("%d", &marks2);
    printf("marks2 = %d\n", marks2);
    if(marks2 < 0 || marks2 > 100){
        printf("invalid marks2\n");
        printf("enter valid marks2:\n");
        //int marks_2;
        scanf("%d", &marks2);
        printf("valid marks2 = %d\n", marks2);;
    }
    printf("enter the marks3: ");
    scanf("%d", &marks3);
    printf("marks3 = %d\n", marks3);
    if(marks3 < 0 || marks3 > 100){
        printf("invalid marks3\n");
        printf("enter valid marks3:\n");
        //int marks_3;
        scanf("%d", &marks3);
        printf("valid marks3 = %d\n", marks3);
    }
     int total;
     float average;
     total = marks1 + marks2 + marks3;
     average = total / 3.0;

    printf("\ntotal = %d", total);
    printf("\naverage = %.2f\n", average);

    if(marks1 < 35 || marks2 < 35|| marks3 < 35){
        printf("fail\n");
    }
    else{
            printf("reslut = pass\n");
            printf("garde = ");
    
    if(average >= 90 && average <= 100){
        printf("A");
    }
    else if(average >= 80 && average <=89){
        printf("B");
    }
    else if(average >=70 && average <=79){
        printf("C");
    }
    else if (average >= 60 && average <= 69){
        printf("D");
    }
    else if ( average >=50 && average <=59){
        printf("E");
    }
    else if ( average < 50 ){
        printf("F");
    }
    else{
        printf("fail");
    }
    }
}
