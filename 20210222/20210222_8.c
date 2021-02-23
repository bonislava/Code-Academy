/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
#include <stdio.h>
#include <string.h>
#define SIZE 15
#define NUM1 1
#define NUM2 0

enum type{ 
    VALUE_INT = NUM1 ,
    VALUE_STR = NUM2
};
union test{
    int num;
    char arr[SIZE];
};
void Print(union test* x, enum type* y){
    if(y){
        printf("int : %d\n", x->num);
    } else{
        printf("string : %s\n", x->arr);
    }
}

int main(){
    union test Uni;
    enum type En = VALUE_INT;
    Uni.num = 5;
    Print(&Uni, &En);
    strcpy(Uni.arr, "string");
    enum type *z = &En;
    z = VALUE_STR;
    Print(&Uni, z);

    return 0;
}