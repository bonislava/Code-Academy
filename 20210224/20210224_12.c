/*Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/
#include <stdio.h>

#define GENERIC_MAX(t,x,y)(x > y ? x : y)
int main(){
    printf("%d\n",(GENERIC_MAX(int, 25, 16)));
    printf("%f\n",(GENERIC_MAX(float, 1.2,4.6)));
    printf("%c",(GENERIC_MAX(char,'c','y')));
    return 0;
}