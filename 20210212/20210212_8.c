/*Задача 8.Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int size,i;
    int *p;
    printf("Enter size:\n");
    scanf("%d",&size);

    p = alloca(size*sizeof(int));

    for(i=0;i<size;i++){
        printf("Enter for %d\n",i);
        scanf("%d",&p[i]);
    }
    for(i=0;i<size;i++){
        printf("for %d is %d\n",i,p[i]);  
    }
    return 0;
}