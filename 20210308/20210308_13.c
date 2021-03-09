/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/
#include <stdio.h>

#define SIZE 100
 
int main(){
    FILE *fp;
    int count = 0;  
    char c; 
    fp = fopen("20210308_13.txt", "r");
    if (NULL == fp){
        printf("Could not open file.\n");
        return 1;
    }
    for (c = getc(fp); c != EOF; c = getc(fp)){
        if (c == '\n'){
            count += 1;
        }
    }         
    fclose(fp);
    printf("Contains %d lines in the file\n", count + 1);
    return 0;
}