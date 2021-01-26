/*Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа*/
#include<stdio.h>

int main(){
    char s;
    int counter = 0;
    while((s = getchar()) != EOF){
        counter ++;
        if(counter > 80){
            putchar(s);
        }
    }
    return 0;
}