/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).Можете ли да умножите пойнтер по пойнтер?
При тази декларация колко пойнтера имаме: пойнтер
int *p, k;*/
#include <stdio.h>

int main(){
    int a;
    int *p_a = &a;
    a = 3;

   printf("%d\n",*p_a);
   int b = 5;
   int *p_b = &b;
   int multiply = (*p_a) * (*p_b);
   printf("Multiplication is: %d\n",multiply);
   return 0;
}