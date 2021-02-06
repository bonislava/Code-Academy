/*Задача 3.Опитайте да го направите сами:
Функция our_strcpy(char *s,char *t),която копира t в s */
#include <stdio.h>

void our_strcpy(char *s,char *t);

int main(){
    char s[] = "Nothing";
    char t[] = "Thing";
    our_strcpy(s,t);
    printf("s: %s\n",s);

    return 0;
}
void our_strcpy( char *s, char *t){
    int i = 0;
    while((*s = *t) != '\0'){
        s++;
        t++;
    }
}
