/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>

int main(){
    int arr[5] ={0};
    int i;
    printf("Enter elements to array: \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:\n");
    for(i=0;i<5;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}