/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/
#include <stdio.h>
#include <string.h>
#define SIZE 15
#define ROW_1 3
#define ROW_2 7
#define COl_1 4
#define COl_2 10

struct point{
    int x;
    int y;
};
int main(){
    int row,col;
    char arr[SIZE][SIZE];
    struct point a = {ROW_1,COl_1};
    struct point b = {ROW_2,COl_2};
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            if(row == a.x && col == a.y){
                arr[row][col]='@';
            }
            else if(row == b.x && col == b.y){
                arr[row][col]='@';
            }
            else{
                arr[row][col]='-';
            }
        }
    }
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col ++){
            printf("%c",arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
