/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметри
спейс, неспейс, спецификатори;*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
    char arr[SIZE],arr2[SIZE];
    int num;
    FILE *fp;
    fp = fopen("20210308_6.txt","w+");
    fputs("Happy 8 march ",fp);

    rewind(fp);
    fscanf(fp,"%s %d %s",arr,&num,arr2);
    printf("%s %d %s",arr,num,arr2);

    fclose(fp);
    return 0;


}