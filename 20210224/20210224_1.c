/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.*/
#include <stdio.h>

#define PI 3.14
#define E 10
#define A 15
int main(){
    int a = A;
    int e = E;
    double pi = PI;
    double res = a + e + pi;
    printf("result is :%f",res);
}