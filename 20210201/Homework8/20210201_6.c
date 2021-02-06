/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>

int Multiplication(int x,int y);

int main(){
    printf("The rezult is : %d",Multiplication(1,30));
    return 0;
}
int Multiplication(int x,int y){
    int m = 1;
    while(x <= y){
        m = m*x;
        x++;
    }
    return m;
}
