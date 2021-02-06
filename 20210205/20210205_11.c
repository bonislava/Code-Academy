/*Задача 11. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include <stdio.h>

void my_strncat(char *s,char *t,int n);

int main(){
    char s[] = "Mcdonald's";
    char t[] = " cheeseburher";
    my_strncat(s,t,6); /*6 symbols  from t */
    printf("%s",s);

    return 0;
}

void my_strncat(char *s, char *t, int n){
    int i;
    for(i=0; s[i] != '\0'; i++){
    }
    for (int j = 0; j<n ;j++,i++){
        s[i] = t[j];
    }
    s[i] = '\0';
}