/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.*/
#include<stdio.h>
#include "10.h"
int main(){
    float a,b,c;
    printf("Enter a value of a= ");
    scanf("%f", &a);
    printf("Enter a value of b= ");
    scanf("%f", &b);
    printf("NOK is : %d\n",(NOK(abs(a), abs(b))));
    printf("Abs of a is: %.2f\n",Abs(a));
    printf("Abs of b is : %.2f\n",Abs(b));
    printf("Enter a value of c=");
    scanf("%d", &c);
    Root(c);

}
int NOK(int a, int b){   
    for (int i = ((a > b)? a : b); i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }  
}
float Abs(float a){
    if(a < 0)
    return -a;
    else{
        return a;
    }
}
int Root(int c){
    double x = sqrt(c);
    if (c < 0){
        if(x < 0){
            printf("-1\n");
        }
        Abs(c);
        x = sqrt(c);
        printf("sqrt(c) = %f\n", x);
    }
    else{
    printf("sqrt(c) = %f",x);
    }
}
