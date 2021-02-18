/*Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM1 5
#define NUM2 6
#define FROM1 35
#define FROM2 42
#define FROM3 49

int choice();
void lottery(int num, int from);

int main(){
    switch (choice()){
        case 1: 
            lottery(NUM1, FROM1);
            break;
        case 2:
            lottery(NUM2, FROM2);
            break;
        case 3:
            lottery(NUM2, FROM3);
            break;
    }
}
int choice(){
    int x;
    printf("For 5/35 press 1.\nFor 6/42 press 2.\nFor 6/49 press 3.\n");
    scanf("%d", &x);
    return x;
}
void lottery(int num, int from){
    srand(time(NULL));
    int result[num];
    for (int i = 0; i < num; i++){   
        result[i] = rand() % (from + 1);
    }
    printf("Winning numbers :\n");
    for (int i = 0; i < num; i++){
        printf("%d \t", result[i]);
    }
}
