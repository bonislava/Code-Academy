/*Задача 7.
Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/
#include <stdio.h>
#define MIN_NUM 33
#define MAX_NUM 50

int main(){
    FILE *fp;
    int ch;
    fp = fopen("20210308_7.txt","w+");
    for(ch = MIN_NUM; ch <= MAX_NUM; ch++){
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}