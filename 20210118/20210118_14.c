/*Упражнение 14. Comma operator*/

#include <stdio.h>

int main(){
    int nX = 1, nY = 2;
    printf("\nInit values: X= %d, Y= %d\n", nX, nY);
    nX = 1 + 2, 2 * 3, 3 + 4; /*1-во: 3+4
                               *2-ро: 2*3
                               *3-то: 1+3 и х ще присвои резултатът 3*/
    nY = ( 7 * 8, 8 + 9, 9 - 4); /*тук с най-висок приоритет са скобите,в които ще се изпълни
                                  *1-во: 7*8
                                  *2-ро: 8+9
                                  *3-то: 9-4 и y ще присвои резултатът 5*/
    printf("\nX= %d, Y= %d\n", nX, nY);
    return 0;
}