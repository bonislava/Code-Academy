/*Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/
#include <stdio.h>
#pragma pack(1)
#define SHORT 3
#define CHAR 6
struct Ctype{
    short x:SHORT;
    char y:CHAR;
};
struct Ctype2{
    char y:CHAR;
    char y1:CHAR;
    short x:SHORT;
    short x1:SHORT;
}__attribute__((packed));

int main(){
    struct Ctype one;
    struct Ctype2 two;
    printf("one: %d\n",sizeof(one));
    printf("two: %d\n",sizeof(two));

    return 0;
}
