/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int arr[10][10][10];
    
    int *element =&arr;
    long long int sum = 0;

    srand(time(NULL));
    for(int i = 0; i < 10*10*10; i++){
        *element = rand();
        //printf("%d\n", *element);
        sum += *element;
        element++;
    }
    printf("sum = %lld\n", sum / (10*10*10));
    return 0;
}
