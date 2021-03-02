/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/

#include <stdio.h>
#define SIZE 32

typedef struct k{
    int num;
    char arr[SIZE];
}key_t;

int main(){
    key_t keytab[SIZE] = {
        {"break",0},
        {"void",1},
        {"case",2},
        {"char",3},
        {"auto",4},
        {"register",5},
        {"sizeof",6},
        {"printf",7},
        {"do",8},
        {"while",9},
        {"for",10},
        {"double",11},
        {"int",12},
        {"if",13},
        {"else",14},
        {"enum",15},
        {"extern",16},
        {"goto",17},
        {"float",18},
        {"long",19},
        {"return",20},
        {"switch",21},
        {"short",22},
        {"signed",23},
        {"unsigned",24},
        {"static",25},
        {"struct",26},
        {"typedef",27},
        {"union",28}

    };
    return 0;
}
