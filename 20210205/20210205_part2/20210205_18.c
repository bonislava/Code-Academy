/*Задача 18. Напишете програма за умножение на два тримерни
масива, елемент по елемент.*/
#include <stdio.h>

int array(int a[2][3][4], int b[2][3][4]);

int main(){
	int arr1[2][3][4] = {{{1, 2, 2, 3}, {1, 3, 4, 5}, {6, 7, 8, 9}},
    	{{10, 1 , 2, 5}, {6, 8, 8, 7}, {3, 1, 4, 9}}};
	int arr2[2][3][4] = {{{3, 4, 2, 3}, {8, 3, 9, 11}, {2, 1, 3, 2}},
    	{{10, 4, 6, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
	printf("Multiplication of arr1 and arr2 is: \n");
	array(arr1, arr2);
	return 0;
}
int array(int a[2][3][4], int b[2][3][4]){
	int i, j, k;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
            		for(k = 0; k < 4; k++){
                		printf("%d ", a[i][j][k] * b[i][j][k]);
                		if(k==3){
                    			printf("\n");
                		}
            		}
		}
	}
}
