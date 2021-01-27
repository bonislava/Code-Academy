/*Упражнение 11*. Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
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
    int j = 0;
    for (int i = 0, j = (strlen(s) - 1); i < j; i++, j--){
        char z = s[j];
        s[j] = s[i];
        s[i] = z;
    }
    printf("%s\n", s);
}
