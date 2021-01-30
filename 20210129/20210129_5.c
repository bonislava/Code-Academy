/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/
#include<stdio.h>

int EvenOrNot();

int main(void){
    EvenOrNot();
    return 0;
}
int EvenOrNot(){
    int a;
    printf("Enter a number: \n");
    scanf("%d",&a);
    if (a % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("the number is Odd");
    }
}