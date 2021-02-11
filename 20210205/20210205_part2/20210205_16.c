/*Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/
#include <stdio.h>

int array(int a[2], int b[2]);

int main(){
	int arr1[2] = {1, 2};
	int arr2[2] = {4, 5};
	printf("Multiplication of arr1 and arr2 is: \n");
	array(arr1, arr2);
	return 0;
}
int array(int a[2], int b[2]){
	int i, j;
	for (i = 0; i < 2; i++){
        printf("%d ", a[i] * b[i]);
	}
}
