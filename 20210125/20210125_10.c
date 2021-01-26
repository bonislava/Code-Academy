/*Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред*/
#include <stdio.h>
#include <string.h>

int get_reversed(char s[]);

int main(){
    char c = 0;
    char s[1000];
    while (c != EOF){
        c = getchar();
        strncat(s, &c, 1);
        if (c == '\n'){
            get_reversed(s);
        }
    }
    return 0;
}
int get_reversed(char s[]){
    char str[100];
    int cnt = 0;
    for (int i = strlen(s) - 1; i >= 0; i--){
        str[cnt] = s[i];
        cnt ++;
    }
    str[cnt-1] = '\0';
    printf("%s\n", str);
}
