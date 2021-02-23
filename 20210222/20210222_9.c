/*Задача 9.Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 15
#define NUM1 1
#define NUM2 0
#define NUM3 10
#define NUM4 112

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
        itoa(x->num, x->arr,NUM3);
        printf("string: %s\n", x->arr);
    } else{
        x->num = atoi(x->arr);
        printf("int: %d\n", x->num);
    }
}

int main(){
    union test Uni;
    enum type En = VALUE_INT;
    Uni.num = NUM4;
    En = VALUE_INT;
    Print(&Uni, &En);
    strcpy(Uni.arr,"112");
    enum type *z = &En;  
    z = VALUE_STR; 
    Print(&Uni,z); 

    return 0;
}