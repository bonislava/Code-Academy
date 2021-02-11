/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}*/
#include <stdio.h>
int sum_array(int *a, int n){
    int sum = 0;
    while (n != 0){
        sum += *a;
        a++;
        n--;
    }
    return sum;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("Sum is: %d",sum_array(arr,5));
    return 0;
}