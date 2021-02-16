/*Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (int) ( *(char *)a - *(char *)b );
}
int main(){
    char arr[] = {'c', 'e', 'd', 'a', 'b'};
    qsort((void*) arr, sizeof(arr), 1, cmp);
    for (int i = 0; i < sizeof(arr); i++){
        printf("%c ", arr[i]);
    }
    return 0;
}
