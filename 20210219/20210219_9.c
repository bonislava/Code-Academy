/*Задача 9. Направете функця add(), която събира две точки.*/
#include <stdio.h>
#define NUM_1 10
#define NUM_2 15
#define NUM_3 20
#define NUM_4 25

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
struct point add(struct point a, struct point b){
  struct point res;
  res.x = a.x + b.x;
  res.y = a.y + b.y; 
  return res;
}
int main(){
  struct rect screen;
  struct point res;  
  screen.a = makepoint(NUM_1, NUM_2);
  screen.b = makepoint(NUM_3,NUM_4);
  res = add(screen.a, screen.b);
  printf("Sum x = %d\n", res.x);
  printf("Sum y = %d", res.y);
  return 0;
}
