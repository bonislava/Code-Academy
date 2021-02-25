/* Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include <stdio.h>
#include <math.h>

#define AVG(x,y) ((x+y)/2)
#define POWER(x,y) (pow(x,y))
#define TOUPPER(c) (c-32);
#define DISP(sqrt,n) printf("sqrt (%g) = %g\n",n,sqrt(n))

int main(){
    int x =AVG(6,2);
    printf("AVG = %d\n",x);
    char y = TOUPPER('a');
    printf("TOUPPER = %c\n",y);
    char z = POWER(10,2);
    printf("POWER = %d\n",z);
    DISP(sqrt,3.0);
    return 0;
}