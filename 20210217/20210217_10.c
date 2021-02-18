/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define NUM 2

int check(int range, int *res);

int main(){
    int arr[SIZE] = {0};
    int (*prime)(int, int*) = check;
    prime(SIZE, arr);
    printf("The prime numbers 0-%d are:\n", SIZE);
    for(int i=0; arr[i]!='\0'; i++){
        printf("%d ,", arr[i]);
    }
}
int check(int range, int *res){
    int count = 0;
    for(int i = 1; i<range; i++){
        count = 0;
        for(int j = 1; j<range; j++){
            if(i%j==0){
                count++;
            }
        }
        if (count==NUM){
            *res = i;
            res++;
        }
    }
}