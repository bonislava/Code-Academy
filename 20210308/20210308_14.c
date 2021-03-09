/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/
#include <stdio.h>
#define NUM 32

int main(){
    FILE *fp = NULL;
    fp = fopen("20210308_14test.txt","r");
    FILE *fp2 = NULL;
    fp2 = fopen("20210308_14original.txt","wt");
    char ch;
    while((ch=getc(fp))!=EOF){
        if((ch>='a'&& ch<='z')){
            fputc(ch-NUM,fp2);
            
        }
        else{
            fputc(ch,fp2);
        }
    }
    fclose(fp);
    fclose(fp2);
    fp=NULL;
    fp2=NULL;
    remove("20210308_14test.txt");
    rename("20210308_14original.txt","20210308_14test.txt");

    fp = fopen("20210308_14test.txt","r");
    while((ch=getc(fp))!=EOF){
        printf("%c",ch);
    }
    fclose(fp);
    
    return 0;
}