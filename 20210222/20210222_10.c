/*Задача 10.Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 15
#define NUM1 1
#define NUM2 0
#define NUM3 15

enum type{ 
    VALUE_INT = NUM1 ,
    VALUE_STR = NUM2
};
union test{
    int num;
    char arr[SIZE];
};
struct value{
    union test member1;
    enum type member2;
};
void Print(struct value* x, enum type* y){
    if(y){
        printf("member of int : %d\n", x->member1.num);
    } else{
        printf("member of arr : %s\n", x->member1.arr);
    }
}
int main(){
   struct value x;
   x.member1.num =NUM;
   x.member2 = VALUE_INT;
   Print(&x,&x.member2);
   strcpy(x.member1.arr,"String");
   enum type *z=&x.member2;
   z=VALUE_STR;
   Print(&x,z);
   return 0;
}
