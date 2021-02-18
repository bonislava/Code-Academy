/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/
#include <stdio.h>
#define SIZE 5

void swap(int *arr,int i,int j);
void BubbleSort(int *arr, int size);

int main(){
    int arr1[SIZE] = {1, 7, 4, 2, 8};
    int arr2[SIZE] = {1, 2, 3, 6, 5};
    int arr3[SIZE] = {9, 8, 7, 6,1};
    int i;
    BubbleSort(arr1, SIZE);
    for (i = 0; i < SIZE; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    BubbleSort(arr2, SIZE);
    for (i = 0; i < SIZE; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    BubbleSort(arr3, SIZE);
    for (i = 0; i < SIZE; i++){
        printf("%d ", arr3[i]);
    }
    return 0;
}

void swap(int *arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort(int *arr, int size){
    int i, j;
    for (i = 0; i < size; i++){
        int isSwapped = 0;

        for (j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr, j, j + 1);
                isSwapped = 1;
            }
        }

        if (!isSwapped)
            return;
    }
}

