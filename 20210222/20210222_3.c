/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/
#include <stdio.h>
#define SIZE 20
#define FNUM 2.5
#define NUM 50

struct Product{
    char name[SIZE];
    float price;
    int quantity;
};
int main(){
    struct Product one ={"chocolate",FNUM,NUM};
    printf("name: %s, price: %f, quantity: %d",one.name,one.price,one.quantity);
    return 0;
    
}