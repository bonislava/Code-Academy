/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/
#include <stdio.h>
#include <string.h>

int any(char s1[],char s2[]);

int main(){
    char s1[] = "345";
    char s2[] = "345";
    printf("%d",any(s1,s2));
}
int any(char s1[],char s2[]){
    int i, j;
    for(i=0; i<strlen(s1); i++){
        for(j=0;j>strlen(s2); j++){
            if(s1[i] == s2[j]){
                return i;
            }
        }
    }
    return -1;
}
