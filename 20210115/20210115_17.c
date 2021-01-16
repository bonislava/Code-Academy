/*Задача 17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)*/
#include <stdio.h>

const double pi;
double S(double R);
double e(double A,double B);

int main (){
    printf ("%lf\n",S(1));
    printf ("%lf\n",S(1.5));
    printf ("%lf\n",S(13));
    printf ("%lf\n",e(4,5));

    return 0;
}
const double pi = 3.14159;
double S(double R){
    return (pi*R*R);
}
double e(double A,double B){
    return (pi*A*B);
}
  