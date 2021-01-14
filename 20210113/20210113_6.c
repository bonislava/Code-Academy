/*6. Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9
000 000 000 000 775 845.
Изведете всяка променлива на екрана със printf()*/
#include<stdio.h>

int main(){
    signed char sValue = -127;
    printf("%d\n",sValue);
    unsigned char cValue = 255;
    printf("%u\n",cValue);
    unsigned int iValue = 6237498;
    printf("%u\n",iValue);
    unsigned long long int uValue = 4294967292;
    printf("%llu\n",uValue);
    signed long long lValue = -9000000000000775845;
    printf("%lld\n",lValue);
    
    return 0;
}