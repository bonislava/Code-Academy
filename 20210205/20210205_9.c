/*Задача 9. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include <stdio.h>

int atoi(char *str);
void itoa(int n, char *s);
double atof(char *str);
void reverse(char *str);

int main(){
    char str1[] = "love eating";
    char str2[] = "1234.56";
    int number = 123;
    reverse(str1);
    printf("Reverse function : %s\n", str1);
    itoa(number, str1);
    printf("itoa function : %s\n", str1);
    printf("atoi function :  %d\n", atoi(str1));
    printf("atof function : %lf\n", atof(str2));

    return 0;
}
int atoi(char *str){
    char *pos = str;
    int res = 0, y = 1;
    while (*pos >= '0' && *pos <= '9'){
        pos++;
    }
    pos--; 
    while (pos >= str){ 
        res += (*pos % '0') * y;
        y *= 10;
        pos--;
    }
    return res;
}
void itoa(int n, char *s){
    char *str4 = s;
    do{
        *s = (n % 10 + '0');
        n /= 10;
        s++;
    }while(n > 0);
    *s = '\0';
    reverse(str4);
}
double atof(char *str){
    char *dec = str, *inn;
    double result = 0, y = 1;
    while (*dec >= '0' && *dec <= '9'){
        dec++;
    }
    inn = dec - 1;
    while(inn >= str){
        result += (*inn % '0') * y;
        y *= 10;
        inn--;
    }
    if( !(*dec == '.' || *dec == ',') ){
        return result;
    }
    dec++;
    y = 0.1;
    while(*dec != '\0'){
        result += (*dec % '0') * y;
        y *= 0.1;
        dec++;
    }
    return result;
}
void reverse(char *str){
    if(!*str){
        return;
    }
    char *str3 = str;
    char x;
    while(*++str3);
    for(str3--; str < str3; str++, str3--){
        x = *str;
        *str = *str3;
        *str3 = x;
    }
}
