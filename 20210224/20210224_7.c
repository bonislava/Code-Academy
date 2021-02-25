/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти*/
#include <stdio.h>
#ifndef _MYHEADER_H_
#define _MYHEADER_H_ 5
#endif

int main(){
    printf("_MYHEADER_H_: %d", _MYHEADER_H_);
}