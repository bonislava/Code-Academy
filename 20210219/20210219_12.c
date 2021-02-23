/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/
#include <stdio.h>
#include <math.h>
#define NUM1 7
#define NUM2 10
#define NUM3 5
#define NUM4 14

struct TPoint{
  int X;
  int Y;
};
double distance(struct TPoint a,struct TPoint b){
    return sqrt(((b.X-a.X)*(b.X-a.X)+(b.Y-a.Y)*(b.Y-a.Y)));
}
int main(){
  struct TPoint a={NUM1,NUM2};
  struct TPoint b={NUM3,NUM4};    
  printf("Distance between a and b is %lf", distance(a,b));
  return 0;
}
