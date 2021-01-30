/*Задача 4. Напишете функция, която връща резултат a*2 + b*c*/
#include<stdio.h>

const int x = 2;
float rez();

int main(void){
    printf("The result is : %f\n",rez());
    return 0;
}
float rez(){
    float a,b,c;
    printf("Enter a value of a:\n");
    scanf("%f",&a);
    printf("Enter a value of b:\n");
    scanf("%f",&b);
    printf("Enter a value of c:\n");
    scanf("%f",&c);
    return a*x + b*c;
}