/*Задача 11. Ако имаме символен низ от символа char str[] = “Hello”;
копирайте всеки един от неговите символи в низ, който да изглежда
огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
резултата.*/
#include<stdio.h>

int main(){
    char str[] ="Hello";
    char rts[5];
    rts[4]=str[0];
    rts[3]=str[1];
    rts[2]=str[2];
    rts[1]=str[3];
    rts[0]=str[4];
    rts[5]=str[5];
    printf("%s\n",rts);
    return 0;

}