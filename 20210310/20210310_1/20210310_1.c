/*Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
   
void Compare_two_files(FILE *fp, FILE *fp2);

int main(){  
    FILE *fp = fopen("20210310_1test.txt","rt"); 
    FILE *fp2 = fopen("20210310_1test2.txt","rt"); 
    if(fp == NULL || fp2 == NULL){ 
        perror("Error opening file");
        exit(1); 
    } 
    Compare_two_files(fp, fp2);  
    fclose(fp); 
    fclose(fp2); 
    return 0; 
}
void Compare_two_files(FILE *fp, FILE *fp2){ 
    char x = getc(fp); 
    char y = getc(fp2); 
    int l = 1;
    int position = 0; 
    while(x != EOF && y != EOF){  
        position++;
        if (x == '\n' && y == '\n'){ 
            l++;
            position = 0; 
        }  
        if(x != y){
            l;
        }  
        x = getc(fp); 
        y = getc(fp2); 
    }
    printf("Difference in line: %d in positon %d\n", l,position);
 
}