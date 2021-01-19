/*Упражнение 13. Логически оператори*/

#include<stdio.h>

int main(){
    int nA;
    printf("nA = ");
    scanf("%d",&nA);
    int nB;
    printf("nB = ");
    scanf("%d",&nB);
    int nX;
    printf("nX = ");
    scanf("%d",&nX);
    int nY;
    printf("nY = ");
    scanf("%d",&nY);
    if ( nA > nB && nA !=0 ){
        printf("&& Operator : Both conditions are true\n");
    }
    if ( nX > nY || nY != 20) {
        printf("|| Operator : Only one condition is true\n");
        }
    if ( ! (nA > nB && nB !=0 ) ) {
        printf(" ! Operator : Both conditions are true\n");
    } 
        else {
            printf("Both conditions are true.\n");
            }
    if (nX != nY || nX == 0){
        printf("|| Operator : Only one condition is true\n");
    }
    if (nA == nB && nB != 0){
        printf("&& Operator : Both conditions are true\n");
    }
    return 0;

}