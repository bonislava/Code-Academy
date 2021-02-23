/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
#include <stdio.h>
#include <string.h>
#define SIZE 20
#define SIZE2 10
#define D_NUM 0.5
#define NUM 2

enum bool{
    false,
    true
};
struct Fields{
  int num;
  char arr1[SIZE2];
  double d;
  enum bool e;
};
int main(){
  struct Fields arr2[SIZE];
  for(int i=0;i<SIZE;i++){
    arr2[i].num=i;
    strcpy(arr2[i].arr1,"COFFEE");
    arr2[i].d=(double)i+D_NUM;
    if(i%NUM==0){
        arr2[i].e=true;
    } else{
        arr2[i].e=false;
    }
  }
  for(int i=0;i<SIZE;i++){
    printf("%d,%s,%lf,%d\n", arr2[i].num,arr2[i].arr1,arr2[i].d,arr2[i].e);
  }
  return 0;
}
