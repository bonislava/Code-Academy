/*Задача 9. Напишете макрос, който прави идентификатор на низ
(стринг)*/
#include <stdio.h>

#define MY_STR(x) #x

int main() {
    int value = 0;
    printf(MY_STR(value));
    return 0;
} 