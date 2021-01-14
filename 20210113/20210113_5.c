/*5. Използвайте функцията sizeof(),за да проверите размера
на типа на вашата машина. Типове за проверка- integer, float,
short int, unsigned long int*/
#include<stdio.h>

int main(){
    int iValue = 10;
    printf("\n%d\n",sizeof(iValue));
    float fValue = 3.1;
    printf("\n%d\n",sizeof(fValue));
    short int sValue = 32760;
    printf("\n%d\n",sizeof(sValue));
    unsigned long int uValue = 12;
    printf("\n%lu\n",sizeof(uValue));

    return 0;
}