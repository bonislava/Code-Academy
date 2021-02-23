/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

#include <stdio.h>

#define NUM_1 0
#define NUM_2 15

struct point{
  int x;
  int y;
};
struct rect{
  struct point a;
  struct point b;
};
struct point makepoint(int x, int y){
  struct point make;
  make.x = x;
  make.y = y;
  return make;
}
int main(){
  struct rect screen;
  struct point makepoint(int, int);
  screen.a = makepoint(NUM_1,NUM_1);
  screen.b = makepoint(NUM_2,NUM_2);
  for (int i = screen.a.x; i < screen.b.x; i++){
    for (int j = screen.a.y; j < screen.b.y; j++){
      printf("-");
    }
    printf("\n");
  }
  return 0;
}
