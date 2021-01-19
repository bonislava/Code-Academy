/*Упражнение 11. Increment / decrement operators . Какво става, ако се препълни броячът?*/

#include <stdio.h>

int main() {
    int iCounter = 0;
    while( ++ iCounter < 3 ) {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter ++: %d\n", iCounter ++);
        printf("Counter --: %d\n", iCounter --);
        }
        return 0;
}
/* броячът, не може да се препълни ,защото ние му даваме стойност < от дадено число.
*в момента,в който операторът за сравнение(по-малко) е невярен ,цикълт спира  */ 