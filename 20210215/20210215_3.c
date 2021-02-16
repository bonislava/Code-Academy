/*Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char*/
#include <stdio.h>
//#include <stdlib.h>

int main(){
    int a = 1234;
    float b = 2.2;
    char c = 'h';
    
    int *p_a = &a;
    float *p_b = &b;
    char *p_c = &c;

    return 0;
}