/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b)*/
#include<stdio.h>

void my_swap(int *a, int *b);

int main(){
    int x = 4;
    int y = 5;
    printf("old value of x: %d, y: %d\n",x,y);
    int *a =&x;
    int *b =&y;
    my_swap(a,b);
    printf("New value of x: %d, y: %d",x,y);
    return 0;
}
void my_swap(int *a,int *b){
    *a = *a + *b; 
    *b = *a - *b; 
    *a = *a - *b;
}
