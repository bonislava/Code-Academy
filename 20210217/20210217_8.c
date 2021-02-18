/*Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1.*/
#include <stdio.h>
#define SIZE 15
#define NUM1 1
#define NUM2 2

int *fibonacci(int *p, int size);

int main(){
    int arr[SIZE];
    int *p_Arr = arr;
    int *p;
    printf("The arrays of Fibonacci is :\n");
    p = fibonacci(p_Arr, SIZE);
    return 0;
}
int *fibonacci(int *p, int size){
    *(p + 0) = 0;
    *(p + NUM1) = NUM1;
    for (int i = NUM2; i < size; i++){
        *(p + i) = *(p + i - NUM1) + *(p + i - NUM2);
    }
    for (int i = 0; i < size; i++){
        printf("%d ", *(p + i));
    }
    return p;
}
