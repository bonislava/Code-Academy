/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define size 10

int main(){
    int arr[size][size][size];
    
    int *element =&arr;
    long long int sum = 0;

    srand(time(NULL));
    for(int i = 0; i < size*size*size; i++){
        *element = rand();
        //printf("%d\n", *element);
        sum += *element;
        element++;
    }
    printf("sum = %lld\n", sum / (size*size*size));
    return 0;
}
