/*7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf()*/
#include<stdio.h>

int main(){
    signed short sValue = 24212;
    printf("%d\n",sValue);
    int iValue = -1357674;
    printf("%d\n",iValue);
    int iiValue = 1357674;
    printf("%d\n",iiValue);
    signed int siValue = -1357674000;
    printf("%d\n",siValue);
    unsigned int uValue = 3657895000;
    printf("%u\n",uValue);
    
    return 0;
}