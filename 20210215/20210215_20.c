/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *change(char *str, char *old, char *new);

int main(){
    char str[] = "I am a poor programmer";
    char poor[] = "poor";
    char great[] = "great";
    char *str2 = NULL;
    str2 = change(str, poor, great);
    printf(" %s\n", str2);
    free(str2);
    return 0;
}

char *change(char *str, char *old, char *new){
    char *str2;
    int i, count = 0;
    int newlen = strlen(new);
    int oldlen = strlen(old);
    for(i = 0; str[i] != '\0'; i++){
        if(strstr(&str[i], old) == &str[i]){
            count++;
            i += oldlen - 1;
        }
    }
    str2 = (char *)malloc(i + count * (newlen - oldlen) + 1);
    i = 0;
    while(*str){
        if(strstr(str, old) == str){
            strcpy(&str2[i], new);
            i += newlen;
            str += oldlen;
        }
        else
            str2[i++] = *str++;
        }
    }
    str2[i] = '\0';
    return str2;
}
