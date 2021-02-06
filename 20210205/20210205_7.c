/*Задача 7. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include <stdio.h>

void our_strcat(char *s,char *t);

int main(){
    char s[]="one";
    char t[]="five";
    our_strcat(s,t);
    printf("%s",s);

    return 0;
}

void our_strcat(char *s, char *t)
{
    while(*s != '\0')
        s++;
    while((*s++ = *t++));
}