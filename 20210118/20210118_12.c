/*Упражнение 12. Relational operators*/

#include<stdio.h>

int main(){
    int nX;
    printf("x = ");
    scanf("%d",&nX);
    int nY;
    printf("y = ");
    scanf("%d",&nY);
    if (nX == nY) {
        printf("%d and %d are equal\n", nX, nY);
    } 
    else {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY) { 
            printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY){
        printf("%d is less than %d\n",nX ,nY);
    }
    else{
        printf("%d is greater than %d\n",nX,nY);
    }
    if(nX != nY){
        printf("%d and %d are not equal\n",nX,nY);
    }
    else{
        printf("%d and %d are equal\n");
    }
    return 0;
}