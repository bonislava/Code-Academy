/*Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/
#include <stdio.h>

int main(){
    int a = 15;
    int *p_a = &a;
    *p_a += 5;
    printf("%d\n",a);
    return 0;
}