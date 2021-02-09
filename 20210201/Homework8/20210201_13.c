/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include <stdio.h>
#include <string.h>

void lower(char s[]);

int main(){
    char s[] = "LOW THIS STRING";
    lower(s);
    return 0;
}
void lower(char s[]){
    int i;
    for(i=0; i<strlen(s); i++){
        if(s[i]>= 'A' && s[i]<= 'Z'){
            s[i] = s[i]+' ';
        }
        putchar(s[i]);
    }
}
