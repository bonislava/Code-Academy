/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.*/
#include <stdio.h>
#define SIZE 15

struct People{
    char name[SIZE];
    char surname[SIZE];
    struct People *p;
};

int main(){
    struct People human1 = {"Bonislava", "Veleva"};
    struct People human2;
    human2.p = &human1;
    printf("name: %s\n",human2.p->name);
    printf("surname: %s\n",human2.p->surname);

    return 0;
}