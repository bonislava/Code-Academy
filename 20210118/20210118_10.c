/*Упражнение 10. Оператори за присвояване*/

#include<stdio.h>

int main(){
    int nResult = 10; 
    int nX = 6;
    printf("Result = %d\n", nResult);
    nResult += nX;
    printf("Result += %d -> %d\n", nX, nResult);
    nResult *= nX;
    printf("Result *= %d -> %d\n", nX, nResult);
    nResult /= nX;
    printf("Result /= %d -> %d\n", nX, nResult);
    nResult %= nX;
    printf("Result %%= %d -> %d\n", nX, nResult);
    nResult -= nX;
    printf("Result -= %d -> %d\n", nX, nResult);
    nResult = 2;
    nResult >>= nX;
    printf("Result >>= %d -> %d\n", nX, nResult);
    nResult &= nX;
    printf("Result &= %d -> %d\n", nX, nResult);
    nResult ^= nX;
    printf("Result ^= %d -> %d\n", nX, nResult);
    nResult = 1;
    nResult <<= nX;
    printf("Result <<= %d -> %d\n", nX, nResult);

    return 0;
}