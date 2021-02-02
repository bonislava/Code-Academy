/*Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

#include <stdio.h>
#include <ctype.h>

double atof(char *s);

int main(){
    char s[] = " -543.123";
    printf("-%lf\n",atof(s));
}
double atof(char *s){
    double Value , power;
    int i;

    if(s[i] == ' '){
        i++;
    }
    if(s[i] == '-'){
        i++;
    }
    for(Value = 0.0; isdigit(s[i]);i++){
        Value = 10.0 * Value + (s[i] - '0');
    }
    if(s[i] == '.'){
        i++;
    }
    for(power = 1.0; isdigit(s[i]); i++){
        Value = 10.0 * Value +(s[i] - '0');
        power = power * 10;
    }
    return Value / power;
}