/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void open_brackets(FILE *fp);

int main(){
    FILE *fp = NULL;
    fp = fopen("20210310_2.txt","rt");
    if(fp == NULL){
        printf("Error opening file!\n");
        exit(1);
    }
    else{
        open_brackets(fp);
    }
    fclose(fp);
    return 0;
}
void open_brackets(FILE *fp){
    int count = 0;
    int ch;
    while((ch = getc(fp))!= EOF){
        if(ch == '{' || ch == '[' || ch == '('){
            count++;
        }
        if(ch == '}' || ch == ']' || ch == ')'){
            count--;
        }
    }
    if (count == 0){
        printf("Each bracket is closed\n");
    }
    else{
        printf("You have %d not closed brackets", count);
    }
}