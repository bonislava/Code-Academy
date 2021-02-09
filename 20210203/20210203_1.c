/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/
#include <stdio.h>

int main(){
    char arr1[3];
    int arr2[3];
    double arr3[3];
    printf("Size is %d, %d, %d",sizeof(arr1),sizeof(arr2),sizeof(arr3));
    return 0;
}
