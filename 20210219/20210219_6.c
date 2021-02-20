/*Задача 6. Направете по подобен начин триъгълник:*/
#include <stdio.h>
#include <string.h>

#define SIZE 15
#define ROW_1 3
#define ROW_2 7
#define COL_1 8
#define COL_2 13
#define COL_3 1

struct point{
  int x;
  int y;
};
int main(){
  int row,col;
  char arr[SIZE][SIZE];
  struct point a = {ROW_1,COL_1};
  struct point b = {ROW_2,COL_2};
  struct point c = {ROW_2,COL_3};
  for(row = 0; row < SIZE; row++){
    for(col = 0; col < SIZE; col++){
      if(row == a.x && col == a.y){
        arr[row][col]='@';
      }
      else if(row == b.x && col == b.y){
        arr[row][col]='@';
      }
      else if(row == c.x && col == c.y){
        arr[row][col]='@';
      }
      else{
        arr[row][col] = ' ';
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
