/*Задача 5 Разширяване на заделена памет с realloc*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = NULL,i,n1,n2;
    printf("Enter size: ");
    scanf("%u", &n1);

    p = (int*) malloc(n1*sizeof(int));
    
    printf("Adresses of previously allocated memory: ");
    for(i=0; i<n1; i++){
        printf("%p\n",p+i);
    }
    printf("\nEnter the new size: ");
    scanf("%u",&n2);
    
    p = realloc(p,n2*sizeof(int)); /*rellocing the memory*/
    
    printf("Addresses of newly allocated memory: ");
    for (i=0; i<n2; i++){
        printf("%p\n",p+i);
    }
    free(p);
    return 0;
}