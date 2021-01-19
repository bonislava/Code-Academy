/*Упражнение 15. Условен оператор (?:)*/

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