/*Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/
#include<stdio.h>

int main(){
    char c;
    int number_of_digits = 0;
    int symbols = 0;
    while((c = getchar()) != EOF){
        symbols ++;
        if(c < '0' || c > '9'){
            continue;
        }
        number_of_digits ++;
    }
    printf("Symbols are: %d\n",symbols);
    printf("Number of digits : %d\n",number_of_digits);
    return 0;

}