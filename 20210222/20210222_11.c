/*Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/
#include <stdio.h>
#define NUM1 -7
#define NUM2 10

union Uni{
    int x;
    int y;
    char z;
}Point;

int main(){
    Point.x = NUM1;
    printf("x = %d\n",Point.x);
    Point.y= NUM2;
    printf("y = %d\n",Point.y);
    Point.z = 'c';
    printf("z = %c\n",Point.z);

    return 0;
}
