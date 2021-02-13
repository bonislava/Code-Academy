/*Задача 7.Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = NULL;
    int size,i;
    printf("Enter a size: \n");
    scanf("%d",&size);
    p = (int*)calloc(size,sizeof(int));
    if(NULL == p){
        printf("Allocation memory error\n");
        exit(1);
    }
    printf("after calloc:\n");
    for(i=0;i<size;i++){
        printf("%d : %d\n", i ,*(p+i));
    }
    free(p);
    return 0;
}