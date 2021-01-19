/*Задача 9. Аритметични оператори*/

#include<stdio.h>

int main(){
    float iX = 13.030;
    float iY = 44.11;
    float iResult;
    iResult = iY * iX;
    printf("%f * %f = %f \n", iY, iX, iResult);
    iResult = iY + iX;
    printf("%f + %f = %f \n", iY, iX, iResult);

    return 0; 
}