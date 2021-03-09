/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("20210308_10.txt","wt");
    fputs("string",fp);
    fputs(" and string",fp);
    long fpos = ftell(fp);
    printf("%d",fpos);
    fclose(fp);
    fp = NULL;
    
    return 0;
}