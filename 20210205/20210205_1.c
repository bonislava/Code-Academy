/*Задача 1.Напишете функцията void printStr(char *s) аргумент поинтер
към началото на стринга. Използвайте for цикъл и обходете стринга докато
не стигнете знака за на стринг '\0'. На ваяка итерация пристирайте всеки
един елемент на стринга с printf(“%с”, с[i])*/
#include <stdio.h>

void printStr(char *s);

int main(){
    char *s = "Print string";
    printStr(s);

    return 0;
}
void printStr(char *s){
    char new;
    for(int i=0; s[i] !='\0'; i++){
        new = s[i];
        printf("\n%c",new);
    }

}