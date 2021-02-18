/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/
#include <stdio.h>
#include <string.h>
#define size 35

int main(){
    char str1[size];
    char str2[size];
    char *str3 = "A string to be copied!";
    char *str4 = "I am very good in strings coping!";
    
    memset(str1,'\0',sizeof(str1));
    strcpy(str1,str3);
    printf("%s\n",str1);

    memset(str2,'\0',sizeof(str2));
    strcpy(str2,str4);
    printf("%s",str2);
    return 0;
}
