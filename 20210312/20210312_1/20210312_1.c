/*Задача 1. Реализация на списък. Напишете програма, която добавя и 
изтрива елемент от списък по позиция в списъка. Използвайте следния 
елемент на динамичния списък:*/

#include "1func.h"


extern t_node *start;

int main(){
    int i;
    init();
    for(i=1; i<15; ++i)
        add(i);
    printList();

    int x;
    dellFirst(&x);
    printf("x = %d\n",x);
    printf("\nRest elements are: \n");
    printList();

    return 0;
}
