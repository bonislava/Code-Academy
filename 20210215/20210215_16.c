/*Задача 16.
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема*/
#include <stdio.h>
#include <string.h>

int main(){
    char str1[35];
    char str2[35];
    char *str3 = "A string to be copied!";
    char *str4 = "I am very good in strings coping!";
    
    strcpy(str1,str3);
    printf("%s\n",str1);

    strcpy(str2,str4);
    printf("%s",str2);
    return 0;
}

