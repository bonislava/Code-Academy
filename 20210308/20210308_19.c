/*Задача 19:
Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

/*.\a.exe 20210308_15.txt
  hello*/

#include <stdio.h>

void copy(FILE *first,FILE *second){
    int c;
    while((c = getc(first)) != EOF){
        putc(c,second);
    }
}
int main(int argc,char *argv[]){
    FILE *fp;
    if(argc == 1){
        copy(stdin,stdout);
    }
    else{
        while(--argc > 0){
            if((fp = fopen(*++argv,"r"))== NULL){
                printf("cat: can't open %s\n",*argv);
                return 1;
            }else{
                copy(fp,stdout);
                fclose(fp);
            }
        }
    }
    return 0;
}
