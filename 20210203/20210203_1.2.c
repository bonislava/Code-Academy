/*Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/
#include <stdio.h>

int main(){
    int arr1[]={1,2,3};
    char arr2[]={'a','b','c','\0'};
    double arr3[]={4.1,5.1,6.1,4.1};
    printf("The first element of arr1 is %d\n",arr1[1]);
    printf("The second of arr2 is %c\n",arr2[2]);
    printf("The third element of arr3 is %f\n",arr3[3]);
}