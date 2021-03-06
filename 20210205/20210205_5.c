/*Задача 5. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0.
Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/
#include <stdio.h>

int our_strcmp(char *s, char *t);

int main(){
    char *s = "12345";
    char *t = "12345";
    printf("Res: %d",our_strcmp(s,t));

    return 0;
}
int our_strcmp(char *s, char *t){
    int i=0;
    for(;*s==*t;s++,t++){
        if(*s == '\0'){
            return 0;
        }
        return s[i] - t[i];
    }
}