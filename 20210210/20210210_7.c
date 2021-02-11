/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/
#include <stdio.h>

void sort ( int a[], int n){
    int i, j, temp;
    for ( i = 0; i < n - 1; ++i ){
        for ( j = i + 1; j < n; ++j ){
            if ( a[i] > a[j] ){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int a[10] = {1,2,4,3,6,5,8,7,10,9};
    sort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    return 0;
}