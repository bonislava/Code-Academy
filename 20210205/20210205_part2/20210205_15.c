/*Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове).*/
#include<stdio.h>

int main(){
	int arr[2][3] = {{1, 2, 5},{6, 7, 9}};
	int sum, i, j, elements;
	double avg;
	elements = 2 * 3;
	avg = 0.0;
	for (i = 0; i < 2; i++){ 
		for (j = 0; j < 3; j++){
			avg += arr[i][j];
		}
	}
	avg = avg / elements;
	printf("Average is: %2.f\n", avg);
	return 0;
}
