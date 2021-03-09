/*Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла;*/

#include <stdio.h>
#define SIZE 60
#define NUM_READ 10

int main(){
    FILE *fp;
    char str[SIZE];
    fp = fopen("20210308_3.txt", "rt");
    if(fp== NULL){
        perror ("Error opening file");
        return(-1);
    }
    if(fgets(str,NUM_READ,fp)!= NULL){
        printf("%s",str);
    }
    fclose(fp);
    fp=NULL;
    return 0;
}