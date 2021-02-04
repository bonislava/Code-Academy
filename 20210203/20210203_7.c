/*Задача 7. Дефинирайте масив int с 10 елемента. Дефинирайте
пойнтер, който ще сочи към масива. Насочете пойнтера към масива. Нужно
ли е да използвате &? Какво представлява името на масива? Какво сочи?
Колко начина има за да изпишете насочването на пойнтера към масива.
Има ли разлика между тях?*/
#include <stdio.h>
int main(void){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};/*array declaration*/
    int *arrP;/*pointer variable*/
    arrP = &arr[0]; 
    int (*ptr)[10] = &arr;/*ptr-pointer that can point 
                           *whole array*/
    printf("%p\n", arrP);
    return 0;
}
/*arrP = &arr[0],means assigning addres of first
 *element of array(at 0 position) to variable arrP,
 *whereas arrP = arr[0] means assigning value of first 
 *elsment to variable arrP*/
