/*8. Да прочетем какво се случва със стойността на променливата x:
char x = 8;
x = x -2;
x= x+ 6;
x= x – 10 +2;
Каква ще бъде стойността на x, ако я отпечатаме на екрана след последната
калкулация?*/
#include<stdio.h>

int main(){
    char x = 8; 
    x = x-2; /*8-2=6*/
    x = x - 10 + 2; /*6-10+2=-2*/
    signed char y = x; /*signed char y=-2*/
    printf("%d",y); /*-2*/

    return 0;
}