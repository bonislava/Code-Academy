/*Задача 17. Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/
#include<stdio.h>

int array(int a[2][3], int b[2][3]);

int main(){
	int arr1[2][3] = {{1, 2, 3}, {1, 2, 3}};
	int arr2[2][3] = {{4, 5, 6}, {7, 8, 9}};
	printf("Multiplication of arr1 and arr2 is: \n");
	array(arr1, arr2);
	return 0;
}
int array(int a[2][3], int b[2][3]){
	int i, j;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", a[i][j] * b[i][j]);
		}
	}
}
