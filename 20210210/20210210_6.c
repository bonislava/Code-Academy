/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/
#include <stdio.h>
int linear_search(int arr[], int n, int key){
    int i = 0;
    while(i < n){
        printf("%d\n", *arr);
        if(*arr==key){
            return i;
        }
        i++;
        arr++;
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",linear_search(arr, 10, 5));
    return 0;
}