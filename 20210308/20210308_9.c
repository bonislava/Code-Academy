/*Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("20210308_9.txt", "w+");
    if(fp == NULL){
        printf("Failed to open\n");
        exit(1);
    }else{
        fprintf(fp, "%s %s %s %s", "That", "is", "a", "test.");
    }
    fclose(fp);
    fp = NULL;
    return 0;
}