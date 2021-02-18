/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM_SIZE 5
#define MAX_RAND 11

void fill_random(int *arr, int size){
    int *element = arr;
    srand (time (NULL));
    
    for (int i = 0; i < size; i++){
      *element = rand() % MAX_RAND;
      printf ("num  = %d\n", *element);
      element++;
    }
}

int main (){
    int arr[DIM_SIZE][DIM_SIZE];

    fill_random(arr[0], DIM_SIZE*DIM_SIZE);
    
    for (int i = 0; i < DIM_SIZE; i++){
        for(int j=0; j< DIM_SIZE; j++){
            if(arr[i][j]>0 && arr[i][j] < 6){
                printf("arr[%d][%d] = %d\n", i,j, arr[i][j]);
            }
        }
    }

    return 0;
}