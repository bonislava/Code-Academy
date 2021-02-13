/*Задача 4.Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned num = 0;
    int *p = NULL;
    printf("enter lenght: ");
    scanf("%d", &num);
    
    p=(int*)malloc(num*sizeof(int));

	for(int i=0; i<num; i++){
		printf("Enter element %d: ", i);
		scanf("%d",(p+i));
	}
	free(p);
	return 0;
}