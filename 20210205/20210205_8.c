/*Задача 8. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include <stdio.h>

int strend(char s[],char t[]);

int main(){
    char s[] = "first string";
    char t[] = "string";
    printf("%d",strend(s,t));

    return 0;
}
int strend(char s[],char t[]){
    char *x=s;
    char *y=t;
    while(*x){
        t=y;
        for(s=x;*s == *t;s++,t++){
            if(*s == '\0' && *t == '\0'){
                return 1;
            }
        }
        x++;
    }
    return 0;
}