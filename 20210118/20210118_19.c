/*Упражнение 19*. Докажете опитно теоремите на Де Морган:
 ! ( А && B ) = ! A || ! B
! ( A || B ) = ! A && ! B */
#include<stdio.h>

int main(){
    int A = 1, B = 0; 
    int x = !(A && B); 
    printf("!(A && B)  = %d\n", x); //1
    x = ! A || ! B; 
    printf("! A | |! B  = %d\n", x); //1 --> equals 
    int y = !(A || B); 
    printf("!(A || B)  = %d\n", y); // 0
    y = ! A && ! B; 
    printf("! A && ! B  = %d\n", y); //0 --> equals

    return 0;
}