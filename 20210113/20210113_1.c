/*Упражнение 1:
Съберете char (255 + 10). ▪ Какво ще се получи?
▪ Защо?*/

#include<stdio.h>

int main(void){
    printf("%d",(unsigned char)(255+10));

    return 0;
}
 /*резултатът =9,защото размерът на unsigned char = 1Byte(8bits) 
   всичко след 8-мият бит се изтрива и остава 0000 1001*/