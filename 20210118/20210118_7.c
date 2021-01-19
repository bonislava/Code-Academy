/*Задача 7: Условен оператор (?:)
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две числа*/

#include <stdio.h>

int main(){
    int nA = 1;
    int nB = ( nA == 1 ? 2 : 0 );
    printf("A value is %d\n",nA);
    printf("B value is %d\n", nB);
    printf("Other value of nA = ");
    scanf("%d",&nA);
    int maxV = (nA > nB ? nA : nB);
    printf("The max value is %d\n", maxV);

    return 0;

}
