/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл*/

#include <stdio.h>
#include "9.h"

int main(){
    int a = 1;
    printf("result is %d",Add3());
    return 0;
}

int Add3(){
    int b;
    printf("Enter a value of b:");
    scanf("%d",&b);
    return Add2(b)+2;
}

int Add2(int b){
    int a;
    printf("enter a value of a:");
    scanf("%d",&a);
    return Add(a)+5;
}

int Add(int a){
    return a+4;
}
