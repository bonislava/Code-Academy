/*Задача 10. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include <stdio.h>

void my_strncpy(char *s,char *t,int n);

int main(){
    char s[] = "Mcdonald's";
    char t[] = "cheeseburher";
    my_strncpy(s,t,6); /*6 symbols copy from t */
    printf("%s",s);

    return 0;
}

void my_strncpy(char *s, char *t, int n){
    while(n>0){
        *s=*t;
        *s++,*t++,n--;
    }
}