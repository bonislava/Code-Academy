/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/
#include <stdio.h>
int main(){
    FILE *fp = NULL;
    int position;
    fp = fopen("20210308_15.txt","r");
    fseek(fp,0,SEEK_END);
    position = ftell(fp);
    for(int i = 0;i <= position;i++){
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    
    return 0;
}