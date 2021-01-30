/*Задача 3. Напишете функция, която връща резултат (а+в)*4*/
#include<stdio.h>

const int x = 4;
float rez();

int main(void){
    printf("The result is %f\n",rez());
    return 0;
}
float rez(){
    float a,b;
    printf("Enter a value of a:\n");
    scanf("%f",&a);
    printf("Enter a value of b:\n");
    scanf("%f",&b);
    return (a+b)*x;
}