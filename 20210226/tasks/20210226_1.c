/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/
#include <stdio.h>
typedef struct { 
    int x,y,z; 
} t_Point;

int main(){
    t_Point num = {1,2,3};
    printf("Numbers are : %d,%d,%d",num.x,num.y,num.z);
    return 0;
}