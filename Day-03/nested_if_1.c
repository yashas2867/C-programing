#include<stdio.h>
int main(){
    int age;
    printf("enter the age: ");
    scanf("%d\n", &age);
    printf("age = %d\n", age);

    if(age >= 18){
        printf("eligible for vote\n");
    
        if(age > 60){
        printf("senir citizen\n");
        }
    }    
    else{
        printf("not eligible for vote\n");
    }
}