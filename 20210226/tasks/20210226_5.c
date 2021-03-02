/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

#include <stdio.h>
#define SIZE 5

typedef int arr[SIZE];
int main(){
    arr a ={0,1,2,3,4};
    for(int i=0; i<SIZE;i++){
        printf("arr[%d]= %d\n",i,a[i]);
    }
    return 0;
}