/*Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13.
*/
#include <stdio.h>
const double pi;
double S(double R);
int main(){
    printf("%lf\n",S(1));
    printf("%lf\n",S(1.5));
    printf("%lf\n",S(13));
    return 0;
}
const double pi = 3.14159;
double S (double R){
    return(pi*R*R);
}