/*Напишете функция int isLetter(char c), която проверява дали подадения параметър е буква или не е буква 
от ASCII таблицата. Използвайте я в main(), заедно с функцията getchar().*/
#include <stdio.h>

int isLetter(char c);

int main(void){
    char c;
    printf("Vyvedi bukva: ");

    char x = isLetter(scanf("%d", &c));

    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        printf(" bukvata s %d nomer e v ASCII tablicata - %c.", x, x);
    }
    else{
        printf("bukvata s %d nomer ne e v ASCII tablicata - %c.", x, x);
    }

    return 0;
}

int isLetter(char c){
    return c = getchar();
}