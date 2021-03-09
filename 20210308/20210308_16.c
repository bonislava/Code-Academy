/*Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/
#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fp = fopen("20210308_16test.txt", "rt");
    FILE *fp2 = NULL;
    fp2 = fopen("20210308_16.txt", "wt");
    int row;
    int count = 1;
    char c;
    printf("Enter row you want to remove\n");
    scanf("%d", &row);
    while((c = getc(fp)) != EOF){
        if(count != row){
            fputc(c, fp2);
        }
        if (c == '\n'){
            count++;
        }
    }
    fclose(fp);
    fclose(fp2);
    
    return 0;
}